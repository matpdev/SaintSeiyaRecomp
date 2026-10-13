#!/usr/bin/env python3
"""Disassemble VU microcode: vudis.py <code.bin> <start pair> <count>"""
import struct
import sys

DEST = lambda d: "".join(c for i, c in enumerate("xyzw") if d & (8 >> i))
BC = "xyzw"
U1 = {0x1C: "mulq", 0x1D: "maxi", 0x1E: "muli", 0x1F: "minii", 0x20: "addq", 0x21: "maddq", 0x22: "addi",
      0x23: "maddi", 0x24: "subq", 0x25: "msubq", 0x26: "subi", 0x27: "msubi", 0x28: "add", 0x29: "madd",
      0x2A: "mul", 0x2B: "max", 0x2C: "sub", 0x2D: "msub", 0x2E: "opmsub", 0x2F: "mini"}
U1BC = ["add", "sub", "madd", "msub", "max", "mini", "mul"]
U2 = {0x10: "itof0", 0x11: "itof4", 0x12: "itof12", 0x13: "itof15", 0x14: "ftoi0", 0x15: "ftoi4", 0x16: "ftoi12",
      0x17: "ftoi15", 0x1C: "mulaq", 0x1D: "abs", 0x1E: "mulai", 0x1F: "clip", 0x20: "addaq", 0x21: "maddaq",
      0x22: "addai", 0x23: "maddai", 0x24: "subaq", 0x25: "msubaq", 0x26: "subai", 0x27: "msubai", 0x28: "adda",
      0x29: "madda", 0x2A: "mula", 0x2C: "suba", 0x2D: "msuba", 0x2E: "opmula", 0x2F: "nop"}
L = {0x00: "lq", 0x01: "sq", 0x04: "ilw", 0x05: "isw", 0x08: "iaddiu", 0x09: "isubiu", 0x10: "fceq", 0x11: "fcset",
     0x12: "fcand", 0x13: "fcor", 0x14: "fseq", 0x15: "fsset", 0x16: "fsand", 0x17: "fsor", 0x18: "fmeq",
     0x1A: "fmand", 0x1B: "fmor", 0x1C: "fcget", 0x20: "b", 0x21: "bal", 0x24: "jr", 0x25: "jalr", 0x28: "ibeq",
     0x29: "ibne", 0x2C: "ibltz", 0x2D: "ibgtz", 0x2E: "iblez", 0x2F: "ibgez"}
L40 = {0x30: "iadd", 0x31: "isub", 0x32: "iaddi", 0x34: "iand", 0x35: "ior"}
L2 = {0x30: "move", 0x31: "mr32", 0x34: "lqi", 0x35: "sqi", 0x36: "lqd", 0x37: "sqd", 0x38: "div", 0x39: "sqrt",
      0x3A: "rsqrt", 0x3B: "waitq", 0x3C: "mtir", 0x3D: "mfir", 0x3E: "ilwr", 0x3F: "iswr", 0x40: "rnext",
      0x41: "rget", 0x42: "rinit", 0x43: "rxor", 0x64: "mfp", 0x68: "xtop", 0x69: "xitop", 0x6C: "xgkick",
      0x70: "esadd", 0x71: "ersadd", 0x72: "eleng", 0x73: "erleng", 0x76: "esum", 0x78: "esqrt", 0x79: "ersqrt",
      0x7A: "ercpr", 0x7B: "waitp", 0x7C: "esin", 0x7D: "eatan", 0x7E: "eexp"}


def upper(w):
    d, ft, fs, fd, low = (w >> 21) & 15, (w >> 16) & 31, (w >> 11) & 31, (w >> 6) & 31, w & 0x3F
    if low < 0x3C:
        if low < 0x1C:
            return f"{U1BC[low >> 2]}{BC[low & 3]}.{DEST(d)} vf{fd}, vf{fs}, vf{ft}{BC[low & 3]}"
        n = U1.get(low, f"?{low:02x}")
        return f"{n}.{DEST(d)} vf{fd}, vf{fs}, vf{ft}"
    s2 = ((w >> 6) & 0x1F) << 2 | (w & 3)
    if s2 < 0x10:
        return f"{['adda','suba','madda','msuba'][s2 >> 2]}{BC[s2 & 3]}.{DEST(d)} acc, vf{fs}, vf{ft}{BC[s2 & 3]}"
    if 0x18 <= s2 < 0x1C:
        return f"mula{BC[s2 & 3]}.{DEST(d)} acc, vf{fs}, vf{ft}{BC[s2 & 3]}"
    n = U2.get(s2, f"?u2_{s2:02x}")
    if n == "nop":
        return "nop"
    return f"{n}.{DEST(d)} vf{ft}, vf{fs}"


def lower(w, pc):
    op = w >> 25
    it, is_, id_, d = (w >> 16) & 31, (w >> 11) & 31, (w >> 6) & 31, (w >> 21) & 15
    imm11 = ((w & 0x7FF) ^ 0x400) - 0x400
    if op == 0x40:
        low = w & 0x3F
        if low in L40:
            return f"{L40[low]} vi{id_}, vi{is_}, vi{it}"
        if low >= 0x3C:
            s2 = ((w >> 6) & 0x1F) << 2 | (w & 3)
            n = L2.get(s2, f"?l2_{s2:02x}")
            if n == "xgkick":
                return f"xgkick vi{is_}"
            if n in ("div", "rsqrt"):
                return f"{n} q, vf{is_}{BC[(w >> 21) & 3]}, vf{it}{BC[(w >> 23) & 3]}"
            return f"{n}.{DEST(d)} vf/vi{it}, vf/vi{is_}"
        return f"?40_{low:02x}"
    if w == 0x8000033C:
        return "nop"
    n = L.get(op, f"?op{op:02x}")
    if n in ("b", "bal", "ibeq", "ibne", "ibltz", "ibgtz", "iblez", "ibgez"):
        return f"{n} vi{it}, vi{is_}, -> {(pc + 8 + imm11 * 8) // 8:03X}"
    if n in ("lq", "sq", "ilw", "isw"):
        return f"{n}.{DEST(d)} vf/vi{it}, {imm11}(vi{is_})"
    if n in ("iaddiu", "isubiu"):
        return f"{n} vi{it}, vi{is_}, {((w >> 10) & 0x7800) | (w & 0x7FF)}"
    return f"{n} it{it} is{is_} imm{w & 0xFFFFFF:x}"


code = open(sys.argv[1], "rb").read()
start, count = int(sys.argv[2], 16), int(sys.argv[3])
for k in range(start, start + count):
    lo, hi = struct.unpack_from("<II", code, k * 8)
    flags = "".join(c for b, c in ((31, "I"), (30, "E"), (29, "M"), (28, "D"), (27, "T")) if hi >> b & 1)
    lw = f"loi {struct.unpack('<f', struct.pack('<I', lo))[0]:g}" if hi >> 31 & 1 else lower(lo, k * 8)
    print(f"{k:03X} {flags:3} {upper(hi):40} | {lw}")
