#!/usr/bin/env python3
"""Convert binary PPM (P6) files to PNG: ppm2png.py a.ppm [b.ppm ...] (writes a.png next to each)."""
import struct
import sys
import zlib


def convert(path):
    data = open(path, "rb").read()
    parts = data.split(b"\n", 3)
    w, h = map(int, parts[1].split())
    pix = parts[3]
    raw = b"".join(b"\0" + pix[y * w * 3:(y + 1) * w * 3] for y in range(h))

    def chunk(kind, body):
        return struct.pack(">I", len(body)) + kind + body + struct.pack(">I", zlib.crc32(kind + body) & 0xFFFFFFFF)

    png = b"\x89PNG\r\n\x1a\n" + chunk(b"IHDR", struct.pack(">IIBBBBB", w, h, 8, 2, 0, 0, 0))
    png += chunk(b"IDAT", zlib.compress(raw, 6)) + chunk(b"IEND", b"")
    out = path[:-4] + ".png"
    open(out, "wb").write(png)
    return out


for p in sys.argv[1:]:
    print(convert(p))
