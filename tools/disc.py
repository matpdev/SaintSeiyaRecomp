"""Check a disc image of Saint Seiya: The Hades and copy its executable out.

Usage: disc.py <image> <folder>    writes <folder>/SLES_541.62 (Europe, SLES-54162) or
                                   <folder>/SLPS_257.44 (Japan, SLPS-25744) and prints which
Exit status: 0 ok, 1 not readable / not ISO 9660, 2 neither executable (another game or region), 3 wrong
SHA-1 (another build, e.g. the Brazilian fan translation). Reads ISO 9660 itself, with 2048-byte sectors
or the 2448 / 2352-byte sectors of some dumps: no 7z / bsdtar needed.
"""
import hashlib
import struct
import sys
from pathlib import Path

SECTOR = 2048
ROOT = Path(__file__).resolve().parent.parent
RELEASES = [  # executable, its SHA-1, name
    ("SLES_541.62", (ROOT / "config" / "SLES_541.62.sha1").read_text().split()[0],
     "Saint Seiya: The Hades (Europe, SLES-54162)"),
    ("SLPS_257.44", (ROOT / "config" / "jp" / "SLPS_257.44.sha1").read_text().split()[0],
     "Saint Seiya: Meiou Hades Juunikyuu-hen (Japan, SLPS-25744)"),
]
LAYOUTS = [(2048, 0), (2448, 0), (2352, 16), (2352, 24)]   # sector size, where its 2048 bytes start


class Image:
    def __init__(self, f):
        self.f = f
        for stride, skip in LAYOUTS:
            f.seek(16 * stride + skip)
            if f.read(6) == b"\x01CD001":
                self.stride, self.skip = stride, skip
                return
        raise ValueError

    def read(self, lsn, size):
        out = bytearray()
        for i in range((size + SECTOR - 1) // SECTOR):
            self.f.seek((lsn + i) * self.stride + self.skip)
            out += self.f.read(SECTOR)
        return bytes(out[:size])

    def find(self, name):
        pvd = self.read(16, SECTOR)
        root = pvd[156:156 + 34]
        d = self.read(struct.unpack_from("<I", root, 2)[0], struct.unpack_from("<I", root, 10)[0])
        off = 0
        while off < len(d):
            n = d[off]
            if n == 0:
                off = (off // SECTOR + 1) * SECTOR
                continue
            nl = d[off + 32]
            if d[off + 33:off + 33 + nl].split(b";")[0].decode("latin1").upper() == name:
                return struct.unpack_from("<I", d, off + 2)[0], struct.unpack_from("<I", d, off + 10)[0]
            off += n
        return None


def main():
    iso, out = sys.argv[1], Path(sys.argv[2])
    try:
        f = open(iso, "rb")
    except OSError as e:
        print(f"can't open {iso}: {e}")
        return 1
    with f:
        try:
            img = Image(f)
        except ValueError:
            print("this is not a disc image (ISO 9660)")
            return 1
        for name, want, title in RELEASES:
            hit = img.find(name)
            if hit is None:
                continue
            data = img.read(*hit)
            sha = hashlib.sha1(data).hexdigest()
            if sha != want:
                print(f"{name} has SHA-1 {sha}, expected {want}: another build (the fan translation does not work)")
                return 3
            out.mkdir(parents=True, exist_ok=True)
            (out / name).write_bytes(data)
            print(f"disc verified: {title}")
            return 0
    print("the image has neither SLES_541.62 nor SLPS_257.44: it must be the European (SLES-54162) or the "
          "Japanese (SLPS-25744) release")
    return 2


if __name__ == "__main__":
    sys.exit(main())
