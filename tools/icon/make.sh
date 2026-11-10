#!/bin/sh
# The game's icon everywhere it is used, made from tools/icon/sstheh.svg:
#   port/win/sstheh.ico                     the Windows executable (16 to 256 px)
#   tools/appimage/saintseiyadecomp.png     the AppImage (256 px)
#   tools/setup/icon.png                    the setup's window (256 px)
# Needs rsvg-convert (librsvg) and Python 3 with Pillow. The results are kept in git: building needs none of this.
set -eu
cd "$(dirname "$0")/../.."
SVG=tools/icon/sstheh.svg
TMP=$(mktemp -d)
trap 'rm -rf "$TMP"' EXIT
for n in 16 24 32 48 64 128 256; do
    rsvg-convert -w $n -h $n "$SVG" -o "$TMP/$n.png"
done
cp "$TMP/256.png" tools/appimage/saintseiyadecomp.png
cp "$TMP/256.png" tools/setup/icon.png
python3 - "$TMP" <<'PY'
import sys
from PIL import Image
d = sys.argv[1]
sizes = [16, 24, 32, 48, 64, 128, 256]
imgs = [Image.open(f"{d}/{n}.png").convert("RGBA") for n in sizes]
# each size drawn on its own (not scaled down by Pillow), PNG inside the .ico
imgs[-1].save("port/win/sstheh.ico", format="ICO", sizes=[(n, n) for n in sizes], append_images=imgs[:-1], bitmap_format="png")
PY
echo "icons made from $SVG"
