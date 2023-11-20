from datetime import datetime
from pathlib import Path

import idaapi
import idautils
import idc

proj_home = Path(__file__).resolve().parent

WHITELIST_STARTS = [
    line.strip()
    for line in (proj_home / "02_class_names_dump.txt").read_text("utf8").splitlines()
    if line.strip()
]


def bad_method(method: str) -> bool:
    for x in WHITELIST_STARTS:
        if (
            method == "x"
            or method.startswith(x + ".")
            or method.startswith(x + "$")
            or method.startswith(x + "<")
        ):
            return False
    return True


def get_time() -> str:
    return datetime.now().strftime("%Y/%M/%D %H:%M:%S")


def get_top_class(method: str) -> str:
    return method.split(".")[0].split("$")[0].split("<")[0]


def generate_pseudocode(save_folder: Path):
    print("Saving codes to", save_folder)
    save_folder.mkdir(exist_ok=True, parents=True)
    functions = list(idautils.Functions())
    length = len(functions)
    saved_methods = []
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
            f"[{index+1}/{length}] Decompiling function at 0x{func_ea:X} ({func_name})"
        )
        cfunc = idaapi.decompile(func_ea)
        lines = cfunc.get_pseudocode()
        lines = [idaapi.tag_remove(line.line) for line in lines]
        cls_name = get_top_class(func_name)
        all_codes.setdefault(cls_name, {})[func_name] = "\n".join(lines)
        saved_methods.append(func_name)

    for cls_name, method_codes in all_codes.items():
        methods = sorted(method_codes.keys())
        combined_code = "\n\n\n".join([method_codes[method] for method in methods])
        save_folder.joinpath(cls_name + ".cpp").write_text(combined_code, "utf8")

    proj_home.joinpath("03_methods.txt").write_text("\n".join(saved_methods), "utf8")
    print(
        f"[{get_time()}] Batch decompilation complete, {len(all_codes)} classes, {len(saved_methods)} methods."
    )


generate_pseudocode(proj_home / "codes")
