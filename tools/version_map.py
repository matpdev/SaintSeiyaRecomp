#!/usr/bin/env python3
"""Where the European release's functions and variables are in another build of the game.

    tools/version_map.py <other ELF> [--out folder]

Used for the Japanese release (SLPS_257.44); works the same for a modded executable. Writes into the
folder (default build/version_map):
  functions.csv   each European function (generated/recomp/functab.c) found in the other executable by
                  its instructions, with the fields that hold addresses masked (J/JAL targets, the
                  immediates of LUI, ADDIU, ORI, loads and stores): exact, masked, or none
  data.csv        European variable -> other address, read off the matched functions: the address
                  each builds with LUI + a low half (or $gp-relative) at the same instruction
  hle.txt         port/hle.txt with the other executable's addresses (what couldn't be placed is
                  commented out, to find by hand)
and prints the game.h column (port/hle/game.h GAME_ADDRESSES) for the other executable.
Needs disc/SLES_541.62 and numpy.
"""
import argparse
import bisect
import collections
import os
import re
import struct
import sys

import numpy as np

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
EU = os.path.join(ROOT, "disc", "SLES_541.62")
EU_GP = 0x507770


def load(path):
    """The executable's loaded words and their address; its $gp (from its crt0)."""
    d = open(path, "rb").read()
    ph = struct.unpack_from("<I", d, 0x1C)[0]
    off, va = struct.unpack_from("<II", d, ph + 4)
    size = struct.unpack_from("<I", d, ph + 16)[0]
    return np.frombuffer(d[off:off + size - size % 4], "<u4"), va


def masked(w):
    op = w >> 26
    m = w.copy()
    m[(op == 2) | (op == 3)] &= np.uint32(0xFC000000)
    imm_ops = [8, 9, 10, 11, 12, 13, 14, 15, 0x14, 0x15, 0x16, 0x17, 0x18, 0x19, 0x1A, 0x1B, 0x1E, 0x1F,
               0x20, 0x21, 0x22, 0x23, 0x24, 0x25, 0x26, 0x27, 0x28, 0x29, 0x2A, 0x2B, 0x2C, 0x2D, 0x2E, 0x2F,
               0x31, 0x33, 0x36, 0x37, 0x39, 0x3E, 0x3F]
    m[np.isin(op, imm_ops)] &= np.uint32(0xFFFF0000)
    return m


def match_functions(eu, other, va):
    funcs = [(int(a, 16), int(s, 16)) for a, s in
             re.findall(r"\{0x([0-9a-fA-F]+), 0x([0-9a-fA-F]+),", open(os.path.join(ROOT, "generated/recomp/functab.c")).read())]
    me, mo = masked(eu), masked(other)
    K = 6
    index = collections.defaultdict(list)
    for i in range(len(mo) - K):
        index[mo[i:i + K].tobytes()].append(i)
    res, last = [], None
    for a, s in funcs:
        if s == 0:
            continue
        i, n = (a - va) // 4, s // 4
        if n < K:
            res.append((a, s, None, "short"))
            continue
        seq = me[i:i + n]
        cands = [c for c in index.get(seq[:K].tobytes(), []) if np.array_equal(mo[c:c + n], seq)]
        if not cands:
            res.append((a, s, None, "none"))
            continue
        if len(cands) > 1 and last is not None:
            cands.sort(key=lambda c: abs((va + 4 * c - a) - last))
        j = va + 4 * cands[0]
        last = j - a
        res.append((a, s, j, "exact" if np.array_equal(other[cands[0]:cands[0] + n], eu[i:i + n]) else "masked"))
    return res


def built_addresses(words, gp):
    """instruction index -> the absolute address it completes"""
    hi, res = {}, {}
    for i, w in enumerate(words):
        w = int(w)
        op, rs, rt, imm = w >> 26, (w >> 21) & 31, (w >> 16) & 31, w & 0xFFFF
        simm = imm - 0x10000 if imm & 0x8000 else imm
        if op == 0x0F:
            hi[rt] = imm << 16
            continue
        if op in (9, 13) or 0x20 <= op <= 0x3F:
            if rs in hi:
                res[i] = (hi[rs] + (imm if op == 13 else simm)) & 0xFFFFFFFF
            elif rs == 28:
                res[i] = (gp + simm) & 0xFFFFFFFF
            if op in (9, 13) and rt != rs:
                hi.pop(rt, None)
        if op in (2, 3):
            hi.clear()
    return res


def gp_of(words):
    """$gp as the crt0 sets it: a register built with lui + addiu/ori, then moved into $gp (or gp, rX, zero)"""
    reg = {}
    for w in words[:400]:
        w = int(w)
        op, rs, rt, rd, imm = w >> 26, (w >> 21) & 31, (w >> 16) & 31, (w >> 11) & 31, w & 0xFFFF
        if op == 0x0F:
            reg[rt] = imm << 16
        elif op == 9 and rs in reg:
            reg[rt] = (reg[rs] + (imm - 0x10000 if imm & 0x8000 else imm)) & 0xFFFFFFFF
        elif op == 13 and rs in reg:
            reg[rt] = reg[rs] | imm
        elif op == 0 and w & 0x3F == 0x25 and rd == 28 and rt == 0 and rs in reg:
            return reg[rs]
        elif rt == 28 and op == 0x0F:
            reg[28] = imm << 16
    return None


def main():
    ap = argparse.ArgumentParser(description=__doc__.split("\n")[0])
    ap.add_argument("elf")
    ap.add_argument("--out", default=os.path.join(ROOT, "build", "version_map"))
    ap.add_argument("--gp", type=lambda x: int(x, 16), help="the other executable's $gp (hex) when its crt0 hides it")
    args = ap.parse_args()
    eu, va = load(EU)
    other, va2 = load(args.elf)
    if va != va2:
        sys.exit("the other executable is not loaded at the same address")
    gp = args.gp or gp_of(other)
    if gp is None:
        sys.exit("$gp not found in the other executable's crt0: give it with --gp")
    os.makedirs(args.out, exist_ok=True)

    funcs = match_functions(eu, other, va)
    with open(os.path.join(args.out, "functions.csv"), "w") as f:
        f.write("eu,size,other,kind\n")
        for a, s, j, k in funcs:
            f.write(f"{a:08x},{s:x},{'' if j is None else format(j, '08x')},{k}\n")
    kinds = collections.Counter(k for *_, k in funcs)
    print(f"functions: {dict(kinds)}", file=sys.stderr)

    votes = collections.defaultdict(collections.Counter)
    for a, s, j, _ in funcs:
        if j is None:
            continue
        n = s // 4
        x = built_addresses(eu[(a - va) // 4:(a - va) // 4 + n], EU_GP)
        y = built_addresses(other[(j - va) // 4:(j - va) // 4 + n], gp)
        for i, ea in x.items():
            if i in y and 0x100000 <= ea < 0x2000000:
                votes[ea][y[i]] += 1
    data = {ea: c.most_common(1)[0][0] for ea, c in votes.items()}
    with open(os.path.join(args.out, "data.csv"), "w") as f:
        f.write("eu,other,votes,agree\n")
        for ea in sorted(votes):
            (oa, n), = votes[ea].most_common(1)
            f.write(f"{ea:08x},{oa:08x},{n},{n / sum(votes[ea].values()):.2f}\n")
    print(f"variables: {len(data)}", file=sys.stderr)

    exact = {a: j for a, s, j, _ in funcs if j is not None}
    fn = sorted((a, s, j) for a, s, j, _ in funcs if j is not None)
    starts = [a for a, _, _ in fn]
    dkeys = sorted(data)

    def code(a):
        if a in exact:
            return exact[a], "function matched"
        k = bisect.bisect_right(starts, a) - 1
        if k < 0 or k + 1 >= len(fn):
            return None, "outside"
        e, s, j = fn[k]
        if a < e + s:
            return j + a - e, f"inside matched {e:#x}"
        e2, _, j2 = fn[k + 1]
        if j - e == j2 - e2:
            return a + j - e, "between matched functions, same shift"
        return None, f"between functions shifted {j - e:#x} / {j2 - e2:#x}: changed, find by hand"

    def var(a):
        if a in data:
            return data[a], "used by matched code"
        k = bisect.bisect_right(dkeys, a) - 1
        if k < 0 or k + 1 >= len(dkeys):
            return None, "outside"
        lo, hi = dkeys[k], dkeys[k + 1]
        if data[lo] - lo == data[hi] - hi:
            return a + data[lo] - lo, "between used addresses, same shift"
        if a - lo < 0x400:
            return a + data[lo] - lo, f"near used {lo:#x}"
        return None, "shift changes here: find by hand"

    out = []
    for line in open(os.path.join(ROOT, "port", "hle.txt")):
        body = line.split("#", 1)[0].split()
        if not body:
            out.append(line)
            continue
        j, how = code(int(body[0], 16))
        out.append(f"# NOT PLACED ({how}): {line}" if j is None else
                   f"0x{j:08X} {' '.join(body[1:])}   # EU {body[0]} ({how})\n")
    open(os.path.join(args.out, "hle.txt"), "w").writelines(out)

    print("/* the other executable's column of port/hle/game.h GAME_ADDRESSES */")
    for m in re.finditer(r"X\((\w+),\s*0x([0-9A-Fa-f]+)u", open(os.path.join(ROOT, "port", "hle", "game.h")).read()):
        name, a = m.group(1), int(m.group(2), 16)
        j, how = (code if name.startswith(("FN_", "RA_")) else var)(a)
        print(f"{name:22s} {'0' if j is None else f'0x{j:08X}u':12s} /* EU {a:#010x}: {how} */")


if __name__ == "__main__":
    main()
