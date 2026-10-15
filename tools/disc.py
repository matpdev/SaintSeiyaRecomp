"""Check a disc image of Saint Seiya: The Hades (Europe, SLES-54162) and copy its executable out.

Usage: disc.py <image.iso> <output SLES_541.62>
Exit status: 0 ok, 1 not readable / not ISO 9660, 2 no SLES_541.62 (another game or region), 3 wrong
SHA-1 (another build, e.g. the Brazilian fan translation). Reads ISO 9660 itself: no 7z / bsdtar needed.
"""
import hashlib
import struct
import sys
from pathlib import Path

SECTOR = 2048
WANT = (Path(__file__).resolve().parent.parent / "config" / "SLES_541.62.sha1").read_text().split()[0]


def find(f, name):
    f.seek(16 * SECTOR)
    pvd = f.read(SECTOR)
    if pvd[1:6] != b"CD001":
        return None
    root = pvd[156:156 + 34]
    lsn, size = struct.unpack_from("<I", root, 2)[0], struct.unpack_from("<I", root, 10)[0]
    f.seek(lsn * SECTOR)
    d = f.read(size)
    off = 0
    while off < len(d):
        n = d[off]
        if n == 0:
            off = (off // SECTOR + 1) * SECTOR
            continue
        nl = d[off + 32]
        fname = d[off + 33:off + 33 + nl].split(b";")[0].decode("latin1").upper()
        if fname == name:
            return struct.unpack_from("<I", d, off + 2)[0], struct.unpack_from("<I", d, off + 10)[0]
        off += n
    return None


def main():
    iso, out = sys.argv[1], sys.argv[2]
    try:
        f = open(iso, "rb")
    except OSError as e:
        print(f"não consegui abrir {iso}: {e}")
        return 1
    with f:
        hit = find(f, "SLES_541.62")
        if hit is None:
            f.seek(16 * SECTOR)
            if f.read(6)[1:6] != b"CD001":
                print("isto não é uma imagem ISO 9660")
                return 1
            print("a imagem não tem SLES_541.62: precisa ser a versão europeia (SLES-54162)")
            return 2
        f.seek(hit[0] * SECTOR)
        data = f.read(hit[1])
    sha = hashlib.sha1(data).hexdigest()
    if sha != WANT:
        print(f"SLES_541.62 com SHA-1 {sha}, esperado {WANT}: é outro build (a tradução de fãs não serve)")
        return 3
    Path(out).write_bytes(data)
    print("disco conferido: Saint Seiya: The Hades (Europa, SLES-54162)")
    return 0


if __name__ == "__main__":
    sys.exit(main())
