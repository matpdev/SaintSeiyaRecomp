#!/usr/bin/env python3
"""Carry function names over from the Tenkaichi3Decomp project by comparing code.

Both games link CRI middleware and the Sony SDK as precompiled libraries (different versions), so many
library functions are the same code at another address. A function is compared with addresses masked
out: the target of j/jal, the immediate of lui, and the immediate of any instruction whose base or
source register was just loaded by lui or is $gp. A name is carried over when the masked code is
unique on both sides.

    names_from_bt3.py <bt3 SLUS_216.78> <bt3 repo>/config <SLES_541.62> asm/*.s > names.txt
"""
import collections
import glob
import hashlib
import os
import re
import struct
import sys

from elftools.elf.elffile import ELFFile


def masked(words):
    out = []
    hi = set()                      # registers holding a %hi value
    for w in words:
        op = w >> 26
        rs, rt = (w >> 21) & 31, (w >> 16) & 31
        if op in (2, 3):
            out.append(w & 0xFC000000)
            continue
        if op == 0x0F:              # lui
            hi.add(rt)
            out.append(w & 0xFFFF0000)
            continue
        if op >= 8 and (rs in hi or rs == 28):
            out.append(w & 0xFFFF0000)
            continue
        if op >= 8 and rt in hi and op not in (0x2B, 0x29, 0x28, 0x3F, 0x1F, 0x39):
            hi.discard(rt)          # register overwritten by a load / ALU result
        out.append(w)
    return hashlib.sha1(struct.pack(f"<{len(out)}I", *out)).hexdigest()


def bt3_functions(elf_path, config):
    names = {}
    for path in [os.path.join(config, "symbol_addrs.txt"), *glob.glob(os.path.join(config, "symbols", "*.txt"))]:
        for line in open(path):
            m = re.match(r"\s*(\w+)\s*=\s*0x([0-9A-Fa-f]+);.*type:func", line)
            if m:
                names[int(m.group(2), 16)] = m.group(1)
    with open(elf_path, "rb") as f:
        elf = ELFFile(f)
        text = elf.get_section_by_name(".text")
        base, data = text["sh_addr"], text.data()
    words = struct.unpack(f"<{len(data) // 4}I", data)
    starts = sorted(a for a in names if base <= a < base + len(data))
    out = {}
    for i, a in enumerate(starts):
        end = starts[i + 1] if i + 1 < len(starts) else base + len(data)
        body = list(words[(a - base) // 4:(end - base) // 4])
        while body and body[-1] == 0:   # alignment padding
            body.pop()
        if len(body) >= 4:
            out[a] = (names[a], masked(body))
    return out


def ss_functions(elf_path, asm_files):
    raw = open(elf_path, "rb").read()
    out = {}
    for path in asm_files:
        start = None
        for line in open(path):
            m = re.match(r"nonmatching (\w+), 0x([0-9A-Fa-f]+)", line)
            if m and m.group(1).startswith("func_"):
                a, size = int(m.group(1)[5:], 16), int(m.group(2), 16)
                body = list(struct.unpack_from(f"<{size // 4}I", raw, 0x80 + a - 0x100000))
                while body and body[-1] == 0:
                    body.pop()
                if len(body) >= 4:
                    out[a] = masked(body)
    return out


def main():
    bt3 = bt3_functions(sys.argv[1], sys.argv[2])
    ss = ss_functions(sys.argv[3], sys.argv[4:])
    by_hash_bt3 = collections.defaultdict(list)
    for a, (name, h) in bt3.items():
        by_hash_bt3[h].append(name)
    by_hash_ss = collections.defaultdict(list)
    for a, h in ss.items():
        by_hash_ss[h].append(a)
    n = 0
    for h, addrs in sorted(by_hash_ss.items(), key=lambda kv: kv[1][0]):
        names = by_hash_bt3.get(h)
        if len(addrs) == 1 and names and len(names) == 1 and not names[0].startswith(("func_", "D_")):
            print(f"{names[0]} = 0x{addrs[0]:08X}; // type:func")
            n += 1
    print(f"{n} names from {len(bt3)} named BT3 functions, {len(ss)} functions here", file=sys.stderr)


main()
