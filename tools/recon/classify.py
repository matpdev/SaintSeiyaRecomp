"""Find function boundaries in SLES_541.62 and classify each function by compiler.

Metrowerks saves callee-saved registers with `sq` (128-bit); ee-gcc uses `sd`.
Functions that save none (leaf functions) inherit the label of their neighbours.
Usage: classify.py <elf> <out.tsv>
"""
import struct
import sys

ELF_OFF, BASE = 0x80, 0x100000
TEXT_END = 0x3C6F90          # last `jr ra` of the main code block (+ delay slot)
SREGS = {16, 17, 18, 19, 20, 21, 22, 23, 30}


def main():
    raw = open(sys.argv[1], "rb").read()
    n = (TEXT_END - BASE) // 4
    w = struct.unpack_from(f"<{n}I", raw, ELF_OFF)

    starts = {BASE + 8}   # entry point
    for i, x in enumerate(w):
        if x >> 26 == 3:                       # jal
            t = ((x & 0x3FFFFFF) << 2) | (BASE & 0xF0000000)
            if BASE <= t < TEXT_END:
                starts.add(t)
        if x == 0x03E00008 and i + 2 < n:      # jr ra; next function after delay slot + padding
            j = i + 2
            while j < n and w[j] == 0:
                j += 1
            if j < n:
                starts.add(BASE + j * 4)
    starts = sorted(starts)

    funcs = []
    for k, s in enumerate(starts):
        e = starts[k + 1] if k + 1 < len(starts) else TEXT_END
        body = w[(s - BASE) // 4:(e - BASE) // 4]
        sq = sum(1 for x in body if x >> 26 == 0x1F and (x >> 21) & 31 == 29 and (x >> 16) & 31 in SREGS)
        sd = sum(1 for x in body if x >> 26 == 0x3F and (x >> 21) & 31 == 29 and (x >> 16) & 31 in SREGS)
        lab = "mw" if sq > sd else "gcc" if sd > sq else "?"
        funcs.append([s, e, lab])

    # leaf functions take the label of the nearest labelled neighbour on both sides when they agree
    for k, f in enumerate(funcs):
        if f[2] != "?":
            continue
        prev = next((g[2] for g in reversed(funcs[:k]) if g[2] != "?"), None)
        nxt = next((g[2] for g in funcs[k + 1:] if g[2] != "?"), None)
        f[2] = prev if prev == nxt else "?" + (prev or "") + "/" + (nxt or "")

    with open(sys.argv[2], "w") as out:
        for s, e, lab in funcs:
            out.write(f"{s:08X}\t{e - s:#x}\t{lab}\n")

    # runs of equal label, merging runs shorter than 3 functions into the surrounding run
    runs = []
    for s, e, lab in funcs:
        base_lab = lab if lab in ("mw", "gcc") else "?"
        if runs and runs[-1][2] == base_lab:
            runs[-1][1] = e
            runs[-1][3] += 1
        else:
            runs.append([s, e, base_lab, 1])
    total = {"mw": [0, 0], "gcc": [0, 0], "?": [0, 0]}
    for s, e, lab in funcs:
        k = lab if lab in total else "?"
        total[k][0] += 1
        total[k][1] += e - s
    print(f"{len(funcs)} functions")
    for k, (c, b) in total.items():
        print(f"  {k:4} {c:6} functions {b / 1024:8.0f} KB")
    print("runs of >= 20 functions:")
    for s, e, lab, c in runs:
        if c >= 20:
            print(f"  {s:#08x}-{e:#08x} {lab:4} {c:5} funcs {(e - s) / 1024:6.0f} KB")


main()
