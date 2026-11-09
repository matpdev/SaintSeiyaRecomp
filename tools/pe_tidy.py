#!/usr/bin/env python3
"""A MinGW-built Windows executable made tidy, as other compilers leave theirs:

    tools/pe_tidy.py file.exe [...]

strip keeps a COFF string table after the last section (an "overlay" to scanners) while a section has
a name longer than 8 characters (.eh_frame: tools/release.sh strips it, 4 bytes of terminator, unused on
x64 Windows, which unwinds with .pdata/.xdata); the header's checksum stays 0. Here a string table no
section name needs is dropped, and the checksum is computed. Antivirus heuristics weigh such oddities (a player's
Windows Defender took sstheh.exe for a trojan by its machine-learning rule).
"""
import struct
import sys


def tidy(path):
    d = bytearray(open(path, "rb").read())
    pe = struct.unpack_from("<I", d, 0x3C)[0]
    if d[pe:pe + 4] != b"PE\0\0":
        sys.exit(f"{path}: not a PE file")
    nsec, = struct.unpack_from("<H", d, pe + 6)
    opt_size, = struct.unpack_from("<H", d, pe + 20)
    sec = pe + 24 + opt_size
    end = max(struct.unpack_from("<I", d, sec + 40 * i + 20)[0] + struct.unpack_from("<I", d, sec + 40 * i + 16)[0]
              for i in range(nsec))
    symtab, nsyms = struct.unpack_from("<II", d, pe + 12)
    long_names = any(d[sec + 40 * i] == ord("/") for i in range(nsec))
    cut = 0
    if nsyms == 0 and symtab >= end and not long_names:      # a string table nothing uses: dropped
        struct.pack_into("<II", d, pe + 12, 0, 0)
        cut = len(d) - end
        del d[end:]
    csum_at = pe + 24 + 64                         # OptionalHeader.CheckSum (PE32+ and PE32 alike)
    struct.pack_into("<I", d, csum_at, 0)
    s = 0
    for i in range(0, len(d) - len(d) % 2, 2):
        s += d[i] | d[i + 1] << 8
        s = (s & 0xFFFF) + (s >> 16)
    if len(d) % 2:
        s += d[-1]
        s = (s & 0xFFFF) + (s >> 16)
    s = (s & 0xFFFF) + (s >> 16)
    struct.pack_into("<I", d, csum_at, (s + len(d)) & 0xFFFFFFFF)
    open(path, "wb").write(d)
    print(f"{path}: {cut} trailing bytes cut, checksum set" + (" (overlay kept: a long section name)" if long_names else ""))


for p in sys.argv[1:]:
    tidy(p)
