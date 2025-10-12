import argparse
import io
import json
import re
import shutil
import subprocess
import sys
import time
from pathlib import Path
from zipfile import ZipFile

import httpx


def dum_json(obj, fp):
    data = json.dumps(obj, indent=2, ensure_ascii=False)
    Path(fp).write_text(data, "utf-8")
    return data


def load_json(fp):
    return json.loads(Path(fp).read_text("utf-8"))


def download_apk() -> Path:
    apk_folder: Path = Path(__file__).resolve().parent / "apk"
    resp = httpx.get(
        f"https://fgo.bigcereal.com/apk/current_ver.json?v={int(time.time())}"
    )
    ver: str = resp.json()["JP"]
    # ver = '2.93.5'
    apk_fn = f"com.aniplex.fategrandorder.v{ver}.xapk"
    apk_fp = apk_folder / ver / apk_fn
    if not apk_fp.exists():
        apk_fp.parent.mkdir(exist_ok=True, parents=True)
        url = f"https://static.atlasacademy.io/apk/{apk_fn}"
        print("[download] getting ", url)
        resp = httpx.get(url, follow_redirects=True)
        assert resp.content
        apk_fp.write_bytes(resp.content)
    print("[download]", apk_fp)
    return apk_fp


def download_apk_en():
    apk_folder: Path = Path(__file__).resolve().parent / "apk/en"
    resp = httpx.get(
        f"https://fgo.bigcereal.com/apk/current_ver.json?v={int(time.time())}"
    )
    ver: str = resp.json()["NA"]
    # ver = '2.93.5'
    apk_fn = f"com.aniplex.fategrandorder.en.v{ver}.apk"
    apk_fp = apk_folder / ver / apk_fn
    if not apk_fp.exists():
        apk_fp.parent.mkdir(exist_ok=True, parents=True)
        url = f"https://static.atlasacademy.io/apk/{apk_fn}"
        print("[download] getting ", url)
        resp = httpx.get(url, follow_redirects=True)
        assert resp.content
        apk_fp.write_bytes(resp.content)
    print("[download]", apk_fp)
    return apk_fp


def extract_apk(apk_fp: Path, output_folder: Path) -> None:
    if str(apk_fp).endswith(".xapk"):
        with ZipFile(apk_fp, "r") as xapk:
            manifest: dict = json.loads(xapk.read("manifest.json"))
            files: dict[str, str] = {
                file["id"]: file["file"] for file in manifest["split_apks"]
            }
            for split in ("base", "config.arm64_v8a"):
                apk_data = xapk.read(files[split])
                extract_apk_bytes(apk_data, output_folder)
    else:
        extract_apk_bytes(Path(apk_fp).read_bytes(), output_folder)


def extract_apk_bytes(apk_data: bytes, output_folder: Path) -> None:
    FILES_TO_EXTRACT = [
        "assets/bin/Data/Managed/Metadata/global-metadata.dat",
        "lib/arm64-v8a/libil2cpp.so",
    ]
    output = Path(output_folder).resolve()
    output.mkdir(parents=True, exist_ok=True)

    with ZipFile(io.BytesIO(apk_data), "r") as apk:
        for extract_file in FILES_TO_EXTRACT:
            if extract_file not in apk.NameToInfo:
                continue
            with apk.open(extract_file) as extract:
                fp = output / extract_file.split("/")[-1]
                with open(fp, "wb") as fd:
                    fd.write(extract.read())
                    print("[extract]", fp)


def dump_cs_il2cppdumper(
    apk_folder: Path, il2cppdumper: str, dump_folder: Path
) -> None:
    Path(dump_folder).mkdir(exist_ok=True, parents=True)
    print("[dump]", dump_folder)

    metadata = apk_folder / "global-metadata.dat"
    il2cpp = apk_folder / "libil2cpp.so"
    commands = [
        il2cppdumper,
        str(il2cpp),
        str(metadata),
        str(dump_folder),
    ]

    p = subprocess.Popen(
        commands,
        stdin=subprocess.PIPE,
        stdout=subprocess.PIPE,
        stderr=subprocess.PIPE,
        shell=False,
        # cwd=str(dump_folder),
    )
    sys.stdout.write(
        p.stdout.read().decode()  # pyright: ignore[reportOptionalMemberAccess]
    )
    sys.stdout.write(
        p.stderr.read().decode()  # pyright: ignore[reportOptionalMemberAccess]
    )
    # p.communicate(input=b"a\n")  # il2cppdumper config.json, anykey=false


def dump_cs_il2cppinspector(
    apk_folder: Path, il2cppdumper: str, dump_folder: Path
) -> None:
    Path(dump_folder).mkdir(exist_ok=True, parents=True)
    print("[dump]", dump_folder)

    metadata = apk_folder / "global-metadata.dat"
    il2cpp = apk_folder / "libil2cpp.so"
    commands = [
        il2cppdumper,
        "--bin",
        str(il2cpp),
        "--metadata",
        str(metadata),
    ]

    p = subprocess.Popen(
        " ".join(commands),
        stdin=subprocess.PIPE,
        stdout=subprocess.PIPE,
        stderr=subprocess.PIPE,
        shell=False,
        cwd=str(dump_folder),
    )
    sys.stdout.write(
        p.stdout.read().decode()  # pyright: ignore[reportOptionalMemberAccess]
    )
    sys.stdout.write(
        p.stderr.read().decode()  # pyright: ignore[reportOptionalMemberAccess]
    )


def get_class_names(dump_folder: Path, output_fp: Path):
    # only root class
    script_fp = dump_folder / "script.json"
    script_data = json.loads(script_fp.read_text(encoding="gbk"))
    dum_json(script_data, script_fp.parent / "script2.json")
    all_cls_names: list[str] = []
    sep = re.compile(r"[<\.\$]")
    for item in script_data["ScriptMethod"]:
        method: str = item["Name"]
        cls_name = sep.split(method)[0]
        if cls_name and cls_name not in all_cls_names:
            all_cls_names.append(cls_name)
    output_fp.write_text("\n".join(all_cls_names), "utf-8")
    return all_cls_names


def main(il2cppdumper: str):
    pwd = Path(__file__).resolve().parent
    apk_fp = download_apk()
    apk_folder = apk_fp.parent
    extract_apk(apk_fp, apk_folder)

    dump_folder = apk_folder / "dump"
    dump_cs_il2cppdumper(apk_folder, il2cppdumper, dump_folder)
    shutil.copy(dump_folder / "dump.cs", "00_dump.cs")

    stringliterals: dict = load_json(dump_folder / "stringliteral.json")
    stringliterals2 = {}
    for index, item in enumerate(stringliterals):
        stringliterals2[f"StringLiteral_{index+1}"] = item["value"]
    dum_json(stringliterals2, pwd / "00_stringliteral.json")
    shutil.copy(
        "ida_scripts/ida_with_struct_py3.py", dump_folder / "ida_with_struct_py3.py"
    )


if __name__ == "__main__":
    parser = argparse.ArgumentParser(description="Download apk and run il2cppdump")
    parser.add_argument(
        "--il2cppdumper", type=str, help="Path to Il2CppDumper executable"
    )
    args = parser.parse_args()

    main(args.il2cppdumper)
