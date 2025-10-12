import json
import re
import time
from datetime import datetime
from pathlib import Path

import idaapi  # pyright: ignore[reportMissingModuleSource]
import idautils  # pyright: ignore[reportMissingModuleSource]
import idc  # pyright: ignore[reportMissingModuleSource]

proj_home = Path(__file__).resolve().parent


BAD_METHOD_STARTS = {
    "sub_",
    "_",
    ".",
    "il2",
    "DataIO",
    "nullsub_",
    "Newtonsoft",
    "MS",
    "Unity",
    "System",
    "<>",
    "Firebase",
    "PlayMaker",
    "HutongGames",
    "CriStructMemory",
    "CriMana",
    "FingerEventDetector",
    "GestureRecognizerTS",
    "PlatformSupport",
    "JsonManager",
    "Org.BouncyCastle",
    "LitJson",
    "TweenFOV",
    "XWeaponTrail",
    "Xft",
    "WellFired",
    "UniWebView",
    "ContinuousGestureRecognizer",
    "CriAtom",
    "SimpleAnimation",
    "Mono",
    "Microsoft",
    "DiscreteGestureRecognizer",
    "FingerGestures",
    "TBQuickSetup",
    "CStateManager",
    "GameObjectExtensions",
    "BetterList",
    "NGUITools",
    "UITweener",
    "CFSM",
}

BAD_METHOD_STARTS.update(
    x
    for x in proj_home.joinpath("00_bad_class_names.txt").read_text().splitlines()
    if x
)


def bad_method(method: str) -> bool:
    # if method.startswith("DelightWorks"):
    # return False
    # return True

    for x in BAD_METHOD_STARTS:
        if method.startswith(x):
            return True
    return False


def get_time() -> str:
    return datetime.now().strftime("%Y/%M/%D %H:%M:%S")


def get_top_class(method: str) -> str:
    return method.split(".")[0].split("$")[0].split("<")[0]


def generate_pseudocode(codes_folder: Path):
    print("Saving codes to", codes_folder)
    codes_folder.mkdir(exist_ok=True, parents=True)
    functions = list(idautils.Functions())
    length = len(functions)
    saved_methods = []
    saved_classes = set()
    # <top_class, <method, code>>
    all_codes: dict[str, dict[str, str]] = {}

    for index, func_ea in enumerate(functions):
        flags = idc.get_func_flags(func_ea)

        if flags & idc.FUNC_LIB or flags & idc.FUNC_THUNK:
            continue  # Skip library functions and thunks
        func_name = idaapi.get_func_name(func_ea)
        if bad_method(func_name):
            continue
        print(
            f"[{index+1}/{length}] {(index+1)/length:.1%} Decompiling function at 0x{func_ea:X} ({func_name})"
        )
        try:
            cfunc: idaapi.cfuncptr_t = idaapi.decompile(func_ea)
            lines = cfunc.get_pseudocode()
        except Exception as e:
            print(f"failed decompiling: {e}")
            continue
        lines = [idaapi.tag_remove(line.line) for line in lines]
        cls_name = get_top_class(func_name)
        all_codes.setdefault(cls_name, {})[func_name] = "\n".join(lines)
        saved_methods.append(func_name)
        saved_classes.add(cls_name)

    pwd = Path(__file__).resolve().parent
    string_literals = json.loads(
        pwd.joinpath("00_stringliteral.json").read_text("utf-8")
    )
    string_literals = {
        k: json.dumps(v, ensure_ascii=False) for k, v in string_literals.items()
    }

    def _repl_match(match: re.Match) -> str:
        key = match.group(0)
        value = string_literals.get(key)
        if value is None:
            print(f"{key} not found")
            return key
        return f"{key}/*{value}*/"

    for cs_file in codes_folder.glob("*.cs"):
        if cs_file.is_file():
            cs_file.unlink()

    for cls_name, method_codes in all_codes.items():
        methods = sorted(method_codes.keys())
        combined_code = "\n\n\n".join([method_codes[method] for method in methods])
        combined_code = re.sub(r"StringLiteral_\d+", _repl_match, combined_code)
        codes_folder.joinpath(cls_name + ".cpp").write_text(combined_code, "utf-8")

    proj_home.joinpath("00_methods.txt").write_text("\n".join(saved_methods), "utf-8")
    proj_home.joinpath("00_class_names.txt").write_text(
        "\n".join(sorted(saved_classes)), "utf-8"
    )
    print(
        f"[{get_time()}] Batch decompilation complete, {len(all_codes)} classes, {len(saved_methods)} methods."
    )


start_time = time.time()
generate_pseudocode(proj_home / "codes")
duration = int(time.time() - start_time)
print(f"pseudo: {duration // 60}m{duration % 60}s")
