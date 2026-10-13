#!/usr/bin/env python3
"""Compile a C++ file with the game's compiler and compare each function with the original.

    tools/fdiff.py src/foo.cpp [function ...]

A function is found in the original by its name: `func_XXXXXXXX` (the address), or a name listed in
config/symbol_addrs.txt. C++ names are looked up without their mangled suffix (`Foo__FPv` -> `Foo`).
Every instruction must be identical, except the target of `jal`/`j` and the immediates of `lui`/`addiu`
that carry relocations (both still have to be the same instruction and registers).

Prints OK per matching function, and a side-by-side listing for the others (compiled left, original right).
"""
import argparse
import os
import re
import struct
import subprocess
import sys
import tempfile

import rabbitizer
from elftools.elf.elffile import ELFFile
from elftools.elf.relocation import RelocationSection

ROOT = os.path.abspath(os.path.join(os.path.dirname(__file__), ".."))
TARGET = os.path.join(ROOT, "disc", "SLES_541.62")
ELF_OFF, BASE = 0x80, 0x100000

# Compiler identified in docs/recon.md: 3.0.1 b198/b205/b210 at -O3 produce the same code so far.
COMPILER = os.path.join(ROOT, "tools", "compilers", "mwcps2-3.0.1b210-060308", "mwccps2.exe")
CFLAGS = ["-O3", "-sdatathreshold", "8", "-lang", "c++", "-Iinclude", "-Isrc"]


def load_symbols():
    syms = {}
    path = os.path.join(ROOT, "config", "symbol_addrs.txt")
    for line in open(path):
        m = re.match(r"\s*(\w+)\s*=\s*0x([0-9A-Fa-f]+)", line)
        if m:
            syms[m.group(1)] = int(m.group(2), 16)
    return syms


def address_of(name, syms):
    base = name.split("__", 1)[0] if not name.startswith("__") else name
    m = re.match(r"func_([0-9A-Fa-f]{8})", base)
    if m:
        return int(m.group(1), 16)
    return syms.get(base, syms.get(name))


def compiled_functions(obj):
    out = {}
    with open(obj, "rb") as f:
        elf = ELFFile(f)
        relocated = {}
        for sec in elf.iter_sections():
            if isinstance(sec, RelocationSection):
                target = sec["sh_info"]
                for r in sec.iter_relocations():
                    relocated.setdefault(target, set()).add(r["r_offset"])
        for sym in elf.get_section_by_name(".symtab").iter_symbols():
            if sym["st_info"]["type"] != "STT_FUNC" or sym["st_size"] == 0:
                continue
            idx = sym["st_shndx"]
            data = elf.get_section(idx).data()[sym["st_value"]:sym["st_value"] + sym["st_size"]]
            words = struct.unpack(f"<{len(data) // 4}I", data)
            relocs = {(o - sym["st_value"]) // 4 for o in relocated.get(idx, ())}
            out[sym.name] = (words, relocs)
    return out


def same(a, b, relocated):
    if a == b:
        return True
    if not relocated:
        return False
    if a >> 26 in (2, 3):                      # j / jal: target differs
        return a >> 26 == b >> 26
    return a & 0xFFFF0000 == b & 0xFFFF0000    # %hi/%lo immediates


def dis(word):
    return rabbitizer.Instruction(word, category=rabbitizer.InstrCategory.R5900).disassemble()


def main():
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("source")
    ap.add_argument("functions", nargs="*", help="only these functions")
    ap.add_argument("--compiler", default=COMPILER)
    args = ap.parse_args()

    raw = open(TARGET, "rb").read()
    syms = load_symbols()
    obj = os.path.join(tempfile.mkdtemp(), "fdiff.o")
    cmd = [os.path.join(ROOT, "tools", "wibo"), args.compiler, "-c", *CFLAGS, args.source, "-o", obj]
    r = subprocess.run(cmd, capture_output=True, text=True, cwd=ROOT)
    msgs = [l for l in (r.stdout + r.stderr).splitlines() if "MWCIncludes" not in l and "Usage Warning" not in l]
    if r.returncode or not os.path.exists(obj):
        sys.exit("\n".join(msgs) or "compile failed")

    status = 0
    for name, (words, relocs) in compiled_functions(obj).items():
        if args.functions and name.split("__", 1)[0] not in args.functions and name not in args.functions:
            continue
        addr = address_of(name, syms)
        if addr is None:
            print(f"?? {name}: no address (name it func_XXXXXXXX or add it to config/symbol_addrs.txt)")
            continue
        orig = struct.unpack_from(f"<{len(words)}I", raw, ELF_OFF + addr - BASE)
        bad = [i for i, (a, b) in enumerate(zip(words, orig)) if not same(a, b, i in relocs)]
        if not bad:
            print(f"OK {name} ({addr:#x}, {len(words) * 4:#x} bytes)")
            continue
        status = 1
        print(f"-- {name} ({addr:#x}): {len(bad)} differing instructions; compiled (left) vs original (right)")
        for i, (a, b) in enumerate(zip(words, orig)):
            mark = "*" if i in bad else " "
            print(f"  {mark} {addr + i * 4:08X}  {dis(a):38} {dis(b)}")
    sys.exit(status)


main()
