#!/usr/bin/env python3
"""The game's pictures (TIM2/TIM3, including CMPS-compressed blocks) out of a disc image, for the
texture pack keyed by picture.

Usage: tex_extract.py <image.iso> <pack folder>
  writes <pack>/orig/<name>.png (the picture as the game shows it: GS alpha 0..0x80 scaled to 0..255)
  and <pack>/index.txt, one line per name: "<name> <width> <height> <row 0 hash> <file>" (a picture with several
  palettes, or whose 8-bit palette may be read in either order, has a name per variant; <file> is the
  PNG of the variant shown).

<name> is texpack.c's picture hash (pic_hash below; the two must agree): each row's texels hashed
as a polynomial, the rows folded in order, the size mixed in. The game finds a picture inside a
texture it decodes (the texture is often larger: the rest of GS memory is garbage) by hashing the
texture's first rows at the sizes the index lists.

Reads ISO 9660 images with 2048-byte sectors (tools/disc.py's layouts with other sector sizes: not yet).
"""
import mmap
import struct
import sys
import zlib
from pathlib import Path

import numpy as np

M64 = (1 << 64) - 1
K = 0x9E3779B97F4A7C15          # row polynomial base
KPOW = np.empty(1024, dtype=np.uint64)
_k = 1
for _i in range(1024):
    KPOW[_i] = _k
    _k = (_k * K) & M64


def fmix(h):
    h ^= h >> 33
    h = (h * 0xFF51AFD7ED558CCD) & M64
    h ^= h >> 33
    h = (h * 0xC4CEB9FE1A85EC53) & M64
    return h ^ (h >> 33)


def row_hashes(px):
    """px: h x w uint32 (RGBA, R in the low byte, GS alpha). One 64-bit hash per row."""
    w = px.shape[1]
    with np.errstate(over="ignore"):
        s = (px.astype(np.uint64) * KPOW[:w]).sum(axis=1, dtype=np.uint64)
    return [fmix(int(v)) for v in s]


def pic_hash(px):
    h, w = px.shape
    a = fmix(0x5EED ^ w)
    for r in row_hashes(px):
        a = fmix((a ^ r) * 0x100000001B3 & M64)
    return fmix(a ^ (h << 32))


def swizzle8(i):
    """CSM1: the GS reads palette entry i from stored entry swizzle8(i) (bits 3 and 4 swapped)."""
    return (i & 0xE7) | ((i & 8) << 1) | ((i & 0x10) >> 1)


def colours(raw, kind, n):
    """CLUT / direct colours as RGBA uint32 with GS alpha; kind 1 = 16-bit, 2 = 24, 3 = 32."""
    if kind == 3:
        return np.frombuffer(raw, dtype="<u4", count=n).copy()
    if kind == 2:
        b = np.frombuffer(raw, dtype=np.uint8, count=n * 3).reshape(n, 3).astype(np.uint32)
        return b[:, 0] | b[:, 1] << 8 | b[:, 2] << 16 | np.uint32(0x80) << 24
    c = np.frombuffer(raw, dtype="<u2", count=n).astype(np.uint32)
    r, g, b = (c & 31) << 3, ((c >> 5) & 31) << 3, ((c >> 10) & 31) << 3
    a = np.where(c & 0x8000, 0x80, 0x80).astype(np.uint32)   # TEXA as the game sets it (TA0 = TA1 = 0x80): check
    return r | g << 8 | b << 16 | a << 24


def pictures(buf, off):
    """The pictures of the TIM2 file at off: (width, height, [RGBA arrays, one per variant])."""
    ver, fmt, count = buf[off + 4], buf[off + 5], struct.unpack_from("<H", buf, off + 6)[0]
    if ver not in (3, 4) or fmt > 1 or not 0 < count < 256:
        return
    p = off + (128 if fmt else 16)
    for _ in range(count):
        if p + 48 > len(buf):
            return
        total, clut_size, img_size, hdr_size, clut_n, pfmt, mips, clut_type, img_type, w, h = \
            struct.unpack_from("<IIIHHBBBBHH", buf, p)
        if not (0 < w <= 1024 and 0 < h <= 1024 and img_type in (1, 2, 3, 4, 5) and hdr_size >= 48
                and total >= hdr_size + img_size + clut_size and p + total <= len(buf)):
            return
        img = buf[p + hdr_size:p + hdr_size + img_size]
        clut = buf[p + hdr_size + img_size:p + hdr_size + img_size + clut_size]
        variants = []
        if img_type in (4, 5):
            bits = 4 if img_type == 4 else 8
            if bits == 8:
                ix = np.frombuffer(img, dtype=np.uint8, count=w * h).reshape(h, w)
            else:
                b = np.frombuffer(img, dtype=np.uint8, count=(w * h + 1) // 2)
                ix = np.stack([b & 15, b >> 4], axis=1).reshape(-1)[:w * h].reshape(h, w)
            ckind = clut_type & 0x3F
            if ckind not in (1, 2, 3):
                p += total
                continue
            per = 1 << bits
            pal_all = colours(clut, ckind, min(clut_n, clut_size * 8 // {1: 16, 2: 24, 3: 32}[ckind]))
            for k in range(max(1, len(pal_all) // per)):
                pal = pal_all[k * per:(k + 1) * per]
                if len(pal) < per:
                    break
                orders = [pal]
                if bits == 8:      # stored swizzled or linear: the right one is the one the game shows
                    orders.append(pal[[swizzle8(i) for i in range(256)]])
                for o in orders:
                    variants.append(o[ix])
        else:
            kind = {1: 1, 2: 2, 3: 3}[img_type]
            variants.append(colours(img, kind, w * h).reshape(h, w))
        yield w, h, variants
        p += total


def png(path, px):
    h, w = px.shape
    rgba = px.copy()
    a = (rgba >> 24).astype(np.uint32)
    a = np.where(a >= 0x80, 255, a * 255 // 128).astype(np.uint32)
    rgba = (rgba & 0xFFFFFF) | (a << 24)
    raw = b"".join(b"\0" + rgba[y].astype("<u4").tobytes() for y in range(h))
    chunk = lambda t, d: struct.pack(">I", len(d)) + t + d + struct.pack(">I", zlib.crc32(t + d))
    path.write_bytes(b"\x89PNG\r\n\x1a\n" + chunk(b"IHDR", struct.pack(">IIBBBBB", w, h, 8, 6, 0, 0, 0))
                     + chunk(b"IDAT", zlib.compress(raw, 6)) + chunk(b"IEND", b""))


def decmps(buf, pos):
    """Decompress a CMPS (4 KB LZSS) block at pos, or return b'' if the header is invalid."""
    if pos + 16 > len(buf):
        return b""
    ver, usize, z = struct.unpack_from("<III", buf, pos + 4)
    if ver != 1 or z != 0 or not (0 < usize <= 32 * 1024 * 1024):
        return b""
    src, end = pos + 16, len(buf)
    ring = bytearray(4096)
    r = 0xFEE
    out = bytearray()
    flags, nbits = 0, 0
    while len(out) < usize and src < end:
        if nbits == 0:
            flags = buf[src]
            src += 1
            nbits = 8
        if flags & 1:
            c = buf[src]
            src += 1
            out.append(c)
            ring[r] = c
            r = (r + 1) & 4095
        else:
            if src + 1 >= end:
                break
            b1, b2 = buf[src], buf[src + 1]
            src += 2
            off = b1 | ((b2 & 0xF0) << 4)
            length = (b2 & 0x0F) + 3
            for _ in range(length):
                c = ring[off]
                off = (off + 1) & 4095
                out.append(c)
                ring[r] = c
                r = (r + 1) & 4095
                if len(out) == usize:
                    break
        flags >>= 1
        nbits -= 1
    return bytes(out) if len(out) == usize else b""


def main():
    iso, pack = Path(sys.argv[1]), Path(sys.argv[2])
    out = pack / "orig"
    out.mkdir(parents=True, exist_ok=True)
    f = open(iso, "rb")
    buf = mmap.mmap(f.fileno(), 0, access=mmap.ACCESS_READ)
    index, nfiles = {}, 0

    def scan(data):
        nonlocal nfiles
        for sig in (b"TIM2", b"TIM3"):
            pos = 0
            while (i := data.find(sig, pos)) >= 0:
                pos = i + 4
                for w, h, variants in pictures(data, i):
                    nfiles += 1
                    for v in variants:
                        name = f"{pic_hash(v):016x}"
                        if name in index:
                            continue
                        index[name] = (w, h, row_hashes(v[:1])[0], name + ".png")
                        if not (out / (name + ".png")).exists():
                            png(out / (name + ".png"), v)

    scan(buf)
    pos = 0
    while (i := buf.find(b"CMPS", pos)) >= 0:
        pos = i + 4
        if d := decmps(buf, i):
            scan(d)

    with open(pack / "index.txt", "w") as o:
        for name, (w, h, r0, fn) in sorted(index.items()):
            o.write(f"{name} {w} {h} {r0:016x} orig/{fn}\n")
    sizes = {(w, h) for w, h, _, _ in index.values()}
    print(f"{nfiles} pictures, {len(index)} names, {len(sizes)} sizes -> {pack}")


if __name__ == "__main__":
    main()
