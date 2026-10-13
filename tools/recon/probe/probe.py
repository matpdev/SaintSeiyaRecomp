"""Compile probe.c with every candidate compiler and flag set; report which reproduce the original bytes.

A function matches when every instruction is identical, except the target field of `jal`.
Usage: probe.py <elf> <probe.c> [compiler-glob]
"""
import glob
import itertools
import os
import struct
import subprocess
import sys
import tempfile

from elftools.elf.elffile import ELFFile

ROOT = os.path.abspath(os.path.join(os.path.dirname(__file__), "..", "..", ".."))
WIBO = os.path.join(ROOT, "tools", "wibo")
ELF_OFF, BASE = 0x80, 0x100000

OPTS = ["-O2", "-O3", "-O4", "-O3,p", "-O4,p", "-O3,s", "-O4,s"]
EXTRA = [[]]


def original(raw, addr, size):
    return struct.unpack_from(f"<{size // 4}I", raw, ELF_OFF + addr - BASE)


def same(a, b):
    if a >> 26 == 3 and b >> 26 == 3:
        return True
    return a == b


def funcs_of(obj):
    out = {}
    with open(obj, "rb") as f:
        elf = ELFFile(f)
        symtab = elf.get_section_by_name(".symtab")
        for sym in symtab.iter_symbols():
            if sym["st_info"]["type"] != "STT_FUNC" or not sym.name.startswith("func_"):
                continue
            sec = elf.get_section(sym["st_shndx"])
            data = sec.data()[sym["st_value"]:sym["st_value"] + sym["st_size"]]
            out[sym.name] = struct.unpack(f"<{len(data) // 4}I", data)
    return out


def diff(raw, obj):
    import rabbitizer as R
    for name, words in funcs_of(obj).items():
        addr = int(name[5:13], 16)
        orig = original(raw, addr, max(len(words) * 4, 4))
        if all(same(a, b) for a, b in zip(words, orig)) and len(words):
            continue
        print(f"--- {name}: compiled (left) vs original (right)")
        n = max(len(words), len(orig))
        orig = original(raw, addr, n * 4)
        for i in range(n):
            a = R.Instruction(words[i], category=R.InstrCategory.R5900).disassemble() if i < len(words) else ""
            b = R.Instruction(orig[i], category=R.InstrCategory.R5900).disassemble()
            mark = " " if i < len(words) and same(words[i], orig[i]) else "*"
            print(f"  {mark} {a:40} {b}")


def main():
    if sys.argv[1] == "--diff":
        raw = open(sys.argv[2], "rb").read()
        cc, opt = sys.argv[4], sys.argv[5]
        obj = os.path.join(tempfile.mkdtemp(), "p.o")
        subprocess.run([WIBO, os.path.join(ROOT, "tools", "compilers", cc, "mwccps2.exe"), "-c", opt,
                        "-sdatathreshold", "8", os.path.abspath(sys.argv[3]), "-o", obj], capture_output=True)
        diff(raw, obj)
        return
    raw = open(sys.argv[1], "rb").read()
    src = os.path.abspath(sys.argv[2])
    pattern = sys.argv[3] if len(sys.argv) > 3 else "mwcps2-*"
    compilers = sorted(glob.glob(os.path.join(ROOT, "tools", "compilers", pattern)))
    tmp = tempfile.mkdtemp()
    results = []
    for cc, opt, extra in itertools.product(compilers, OPTS, EXTRA):
        obj = os.path.join(tmp, "p.o")
        cmd = [WIBO, os.path.join(cc, "mwccps2.exe"), "-c", opt, *extra, "-sdatathreshold", "8", src, "-o", obj]
        r = subprocess.run(cmd, capture_output=True, text=True)
        if r.returncode or not os.path.exists(obj):
            print("compile failed:", os.path.basename(cc), opt, extra, r.stdout[-300:], r.stderr[-300:])
            continue
        ok = []
        for name, words in funcs_of(obj).items():
            addr = int(name[5:13], 16)
            orig = original(raw, addr, len(words) * 4)
            if all(same(a, b) for a, b in zip(words, orig)):
                ok.append(name[5:])
        os.remove(obj)
        results.append((len(ok), os.path.basename(cc), opt, " ".join(extra), ok))
    best = {}
    for n, cc, opt, extra, ok in results:
        if n > best.get(cc, (-1,))[0]:
            best[cc] = (n, opt, extra, ok)
    print("best per compiler:")
    for cc, (n, opt, extra, ok) in sorted(best.items(), key=lambda kv: -kv[1][0]):
        print(f"{n:2}  {cc:26} {opt:6} {extra:12} {' '.join(ok)}")


main()
