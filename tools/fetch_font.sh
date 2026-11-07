#!/bin/sh
# Downloads the font the game's texts are drawn with (port/hle/textfont.c) into fonts/:
# M PLUS Rounded 1c Bold, from Google Fonts' repository, under the SIL Open Font License 1.1
# (fonts/OFL.txt). Not kept in the repository; build.sh and the release's setup run this.
# Usage: tools/fetch_font.sh [folder]   (default: fonts/ next to this repository's build/)
set -eu
cd "$(dirname "$0")/.."
DIR=${1:-fonts}
FILE=MPLUSRounded1c-Bold.ttf
URL=https://raw.githubusercontent.com/google/fonts/main/ofl/mplusrounded1c/$FILE
mkdir -p "$DIR"
if [ -s "$DIR/$FILE" ]; then echo "font already in $DIR/$FILE"; exit 0; fi
if command -v curl >/dev/null; then curl -fsSL -o "$DIR/$FILE.part" "$URL"
elif command -v wget >/dev/null; then wget -q -O "$DIR/$FILE.part" "$URL"
else echo "neither curl nor wget: download $URL into $DIR/ by hand" >&2; exit 1
fi
mv "$DIR/$FILE.part" "$DIR/$FILE"
cat > "$DIR/OFL.txt" <<'LICENSE'
M PLUS Rounded 1c (MPLUSRounded1c-Bold.ttf), from https://github.com/google/fonts/tree/main/ofl/mplusrounded1c
Copyright 2016 The Rounded M+ Project Authors.
LICENSE
sed -n '1,200p' licenses/OFL-1.1.txt >> "$DIR/OFL.txt"
echo "font downloaded: $DIR/$FILE"
