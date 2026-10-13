#!/usr/bin/env python3
"""Cross references in the splat output.

    xref.py str "<text>"      functions that load an address of a string containing <text>
    xref.py calls <func>      functions that call <func> (by name or func_XXXXXXXX)
    xref.py callees <func>    functions called by <func>
"""
import glob
import re
import struct
import sys

ELF = "disc/SLES_541.62"


def functions():
    out = {}
    for path in sorted(glob.glob("asm/*.s")):
        name = None
        for line in open(path):
            m = re.match(r"glabel (\S+)", line)
            if m:
                name = m.group(1)
                out[name] = []
            elif name:
                out[name].append(line)
    return out


def main():
    mode, arg = sys.argv[1], sys.argv[2]
    funcs = functions()
    if mode == "str":
        raw = open(ELF, "rb").read()
        hits = set()
        for m in re.finditer(re.escape(arg.encode()), raw):
            s = raw.rfind(b"\0", 0, m.start()) + 1
            hits.add(s - 0x80 + 0x100000)
        for name, lines in funcs.items():
            refs = {int(x, 16) for l in lines for x in re.findall(r"%lo\(D_([0-9A-F]{8})\)", l)}
            for h in hits & refs:
                end = raw.find(b"\0", h - 0x100000 + 0x80)
                print(f"{name}: {raw[h - 0x100000 + 0x80:end].decode(errors='replace')!r}")
    elif mode == "calls":
        for name, lines in funcs.items():
            if any(re.search(rf"\bjal\s+{re.escape(arg)}\b|\bj\s+{re.escape(arg)}\b", l) for l in lines):
                print(name)
    elif mode == "callees":
        seen = []
        for l in funcs[arg]:
            m = re.search(r"\bjal\s+(\S+)", l)
            if m and m.group(1) not in seen:
                seen.append(m.group(1))
        print("\n".join(seen))


main()
