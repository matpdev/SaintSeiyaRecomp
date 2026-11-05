#!/bin/sh
# HD texture pack from the game's own textures, upscaled with Real-ESRGAN (anime model).
#
#   1. SSTHEH_TEX_DUMP=1 ./play.sh        play through the scenes you want: each texture seen is
#                                          saved in ~/.local/share/sstheh/textures/dump/
#   2. tools/upscale_textures.sh [scale]   upscales the dumped ones not done yet (default 4x) into
#                                          ~/.local/share/sstheh/textures/, which the game then uses
#
# Needs realesrgan-ncnn-vulkan (https://github.com/xinntao/Real-ESRGAN, "ncnn-vulkan" release; on
# Arch: the AUR package realesrgan-ncnn-vulkan-bin) in the PATH, or REALESRGAN=/path/to/it.
set -e
scale=${1:-4}
base=${XDG_DATA_HOME:-$HOME/.local/share}/sstheh/textures
bin=${REALESRGAN:-realesrgan-ncnn-vulkan}
command -v "$bin" >/dev/null || { echo "realesrgan-ncnn-vulkan not found (see the top of $0)"; exit 1; }
[ -d "$base/dump" ] || { echo "no dumped textures in $base/dump: run the game with SSTHEH_TEX_DUMP=1 first"; exit 1; }

# only the textures without a replacement yet
todo=$(mktemp -d)
trap 'rm -rf "$todo"' EXIT
n=0
for f in "$base"/dump/*.png; do
    [ -e "$base/$(basename "$f")" ] && continue
    ln -s "$f" "$todo/"
    n=$((n + 1))
done
[ "$n" -gt 0 ] || { echo "nothing new to upscale"; exit 0; }
echo "upscaling $n textures ${scale}x into $base"
"$bin" -i "$todo" -o "$base" -n realesrgan-x4plus-anime -s "$scale" -f png
