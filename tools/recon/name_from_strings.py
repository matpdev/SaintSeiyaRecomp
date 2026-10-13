#!/usr/bin/env python3
"""Name library functions after the function name their own messages quote.

CRI and Sony code print errors such as "E202232: mwPlyGetNumDropFrm: handle is invalid." or
"cvFsClose #2:vtbl error". For every function in the given asm files, the strings it loads are read
from the executable; an identifier at the start of a message (after an optional error code) is taken
as the function's name when that function is the only one quoting it and the identifier looks like a
library name (see PREFIXES).

    name_from_strings.py <elf> asm/cri.s asm/sdk_ipu.s ... > names.txt

Output lines are in symbol_addrs.txt format, marked `// guess` where more than one name was quoted.
"""
import collections
import re
import sys

ELF_OFF, BASE = 0x80, 0x100000
PREFIXES = ("adx", "ADX", "cvFs", "mwPly", "mwSfd", "mwsfd", "MWSFD", "sfd", "SFD", "sj", "SJ", "dtx", "DTX",
            "dtr", "DTR", "lsc", "LSC", "htci", "HTCI", "dvci", "DVCI", "mfci", "MFCI", "ps2rna", "PS2RNA",
            "sfh", "SFH", "m2v", "M2V", "mpv", "MPV", "mps", "MPS", "sud", "SUD", "cft", "CFT", "sce", "sif",
            "Sif", "Rssd", "rssd", "afs", "AFS", "mfs", "pl2", "PL2", "crimw", "cri", "CRI", "mw")
MSG = re.compile(r"^\s*(?:E\d+\s*:?\s*)?([A-Za-z_][A-Za-z0-9_]{3,})\s*(?::|#|\(|\s-)")
FUNC = re.compile(r"^glabel (\w+)")
REF = re.compile(r"%lo\((D_[0-9A-F]{8})\)")


def cstring(raw, addr):
    off = ELF_OFF + addr - BASE
    if not 0 <= off < len(raw):
        return None
    end = raw.find(b"\0", off, off + 200)
    if end < 0:
        return None
    s = raw[off:end]
    return s.decode("ascii") if s and all(32 <= c < 127 for c in s) else None


def main():
    raw = open(sys.argv[1], "rb").read()
    quoted = collections.defaultdict(collections.Counter)   # function -> names it quotes
    for path in sys.argv[2:]:
        func = None
        for line in open(path):
            m = FUNC.match(line)
            if m:
                func = m.group(1)
                continue
            if func is None:
                continue
            for ref in REF.findall(line):
                s = cstring(raw, int(ref[2:], 16))
                m = MSG.match(s) if s else None
                if m and m.group(1).startswith(PREFIXES):
                    quoted[func][m.group(1)] += 1

    owners = collections.defaultdict(set)                    # name -> functions quoting it
    for func, names in quoted.items():
        for name in names:
            owners[name].add(func)

    used = set()
    for func in sorted(quoted):
        names = quoted[func]
        own = [n for n in names if len(owners[n]) == 1]      # names quoted by this function only
        if not own:
            continue
        best = max(own, key=lambda n: names[n])
        if best in used:
            continue
        used.add(best)
        guess = " // guess" if len(names) > 1 else ""
        print(f"{best} = 0x{func[5:]}; // type:func{guess}")


main()
