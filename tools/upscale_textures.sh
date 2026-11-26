#!/bin/sh
# HD texture pack from the game's disc pictures (tools/tex_extract.py) and/or dumped pictures,
# upscaled with Real-ESRGAN (anime model).
#
#   1. python3 tools/tex_extract.py disc/game.iso ~/.local/share/sstheh/textures
#      (extracts TIM2/TIM3/CMPS pictures into orig/ and writes index.txt)
#   2. Optional: SSTHEH_TEX_DUMP=1 ./play.sh   (captures unindexed pictures into dump/index.txt)
#   3. tools/upscale_textures.sh [scale]       upscales orig/ + dump/index.txt not done yet
#                                              (default 4x) into hd/ (or SSTHEH_TEXTURES/hd/)
#
# Needs realesrgan-ncnn-vulkan (https://github.com/xinntao/Real-ESRGAN, "ncnn-vulkan" release; on
# Arch: the AUR package realesrgan-ncnn-vulkan-bin) in the PATH, or REALESRGAN=/path/to/it.
set -e
scale=${1:-4}
base=${SSTHEH_TEXTURES:-${XDG_DATA_HOME:-$HOME/.local/share}/sstheh/textures}
bin=${REALESRGAN:-realesrgan-ncnn-vulkan}
command -v "$bin" >/dev/null || { echo "error: realesrgan-ncnn-vulkan not found (see the top of $0)" >&2; exit 1; }

fmt_time() {
    s=$1
    if [ "$s" -ge 3600 ]; then
        printf "%dh%02dm%02ds" $((s / 3600)) $(((s % 3600) / 60)) $((s % 60))
    elif [ "$s" -ge 60 ]; then
        printf "%dm%02ds" $((s / 60)) $((s % 60))
    else
        printf "%ds" "$s"
    fi
}

todo=$(mktemp -d)
bdir=$(mktemp -d)
log=$(mktemp)
trap 'rm -rf "$todo" "$bdir" "$log"' EXIT

n=0
skipped=0
n_orig=0
n_dump=0

if [ -d "$base/orig" ] || [ -f "$base/dump/index.txt" ]; then
    out="$base/hd"
    mkdir -p "$out"
    if [ -d "$base/orig" ]; then
        for f in "$base"/orig/*.png; do
            [ -e "$f" ] || continue
            name=$(basename "$f")
            if [ -e "$out/$name" ]; then
                skipped=$((skipped + 1))
                continue
            fi
            cp "$f" "$todo/$name"
            n=$((n + 1))
            n_orig=$((n_orig + 1))
        done
    fi
    if [ -f "$base/dump/index.txt" ]; then
        while read -r name _; do
            [ -n "$name" ] || continue
            f="$base/dump/$name.png"
            [ -e "$f" ] || continue
            if [ -e "$out/$name.png" ]; then
                skipped=$((skipped + 1))
                continue
            fi
            [ -e "$todo/$name.png" ] && continue
            cp "$f" "$todo/$name.png"
            n=$((n + 1))
            n_dump=$((n_dump + 1))
        done < "$base/dump/index.txt"
    fi
elif [ -d "$base/dump" ]; then
    out="$base"
    for f in "$base"/dump/*.png; do
        [ -e "$f" ] || continue
        if [ -e "$out/$(basename "$f")" ]; then
            skipped=$((skipped + 1))
            continue
        fi
        cp "$f" "$todo/"
        n=$((n + 1))
        n_dump=$((n_dump + 1))
    done
else
    echo "error: no orig/ or dump/ in $base: run tools/tex_extract.py or SSTHEH_TEX_DUMP=1 first" >&2
    exit 1
fi

if [ "$n" -eq 0 ]; then
    echo "nothing new to upscale ($skipped already in $out)"
    exit 0
fi

# realesrgan-ncnn-vulkan hits vkWaitForFences -4 / deadlocks on tiny (<16px) textures
tiny=0
if command -v python3 >/dev/null; then
    tiny=$(python3 -c '
import os, struct, sys
d = sys.argv[1]
rm = 0
for f in os.listdir(d):
    p = os.path.join(d, f)
    with open(p, "rb") as fp:
        if fp.read(8) != b"\x89PNG\r\n\x1a\n": continue
        fp.seek(16)
        w, h = struct.unpack(">II", fp.read(8))
    if w < 16 or h < 16:
        os.remove(p)
        rm += 1
print(rm)
' "$todo")
    n=$((n - tiny))
fi

if [ "$n" -eq 0 ]; then
    echo "nothing new to upscale ($skipped already in $out, $tiny <16px skipped)"
    exit 0
fi

tile=${REALESRGAN_TILE:-32}
threads=${REALESRGAN_THREADS:-1:1:1}
batch=${REALESRGAN_BATCH:-15}
btimeout=${REALESRGAN_TIMEOUT:-300}
total_batches=$(((n + batch - 1) / batch))

echo "pack:   $base -> $out"
echo "queue:  $n to upscale ($n_orig orig, $n_dump dump), $skipped already done, $tiny <16px skipped"
echo "config: ${scale}x, model=realesrgan-x4plus-anime, tile=$tile, threads=$threads, batch=$batch ($total_batches batches), timeout=${btimeout}s"

start_ts=$(date +%s)
i=0
bnum=0
bcount=0
failed_imgs=0
for f in "$todo"/*.png; do
    mv "$f" "$bdir/"
    i=$((i + 1))
    bcount=$((bcount + 1))
    if [ "$bcount" -eq "$batch" ] || [ "$i" -eq "$n" ]; then
        bnum=$((bnum + 1))
        bstart=$(date +%s)
        printf "[batch %d/%d] upscaling %d imgs..." "$bnum" "$total_batches" "$bcount"
        status=0
        timeout "$btimeout" "$bin" -i "$bdir" -o "$out" -n realesrgan-x4plus-anime -s "$scale" -t "$tile" -j "$threads" -f png >"$log" 2>&1 || status=$?
        if [ "$bnum" -eq 1 ]; then
            gpu=$(grep -m1 '^\[' "$log" || true)
            [ -n "$gpu" ] && printf "\ngpu:    $gpu\n"
        fi
        if [ "$status" -ne 0 ] || grep -qE "vkQueueSubmit|vkWaitForFences" "$log"; then
            for bf in "$bdir"/*.png; do rm -f "$out/$(basename "$bf")"; done
            printf " failed (exit=%d), retrying %d imgs individually...\n" "$status" "$bcount"
            for bf in "$bdir"/*.png; do
                bname=$(basename "$bf")
                rstat=0
                timeout 60 "$bin" -i "$bf" -o "$out/$bname" -n realesrgan-x4plus-anime -s "$scale" -t 32 -j "$threads" -f png >"$log" 2>&1 || rstat=$?
                if [ "$rstat" -ne 0 ] || grep -qE "vkQueueSubmit|vkWaitForFences" "$log"; then
                    rm -f "$out/$bname"
                    failed_imgs=$((failed_imgs + 1))
                    echo "  failed: $bname (exit=$rstat, skipped)" >&2
                fi
            done
        fi
        rm -f "$bdir"/*.png
        now=$(date +%s)
        bsec=$((now - bstart))
        elapsed=$((now - start_ts))
        pct=$((i * 100 / n))
        if [ "$i" -lt "$n" ]; then
            eta=$((elapsed * (n - i) / i))
            printf " done in %s | %d/%d (%d%%) | elapsed %s | eta %s\n" \
                "$(fmt_time "$bsec")" "$i" "$n" "$pct" "$(fmt_time "$elapsed")" "$(fmt_time "$eta")"
        else
            printf " done in %s | %d/%d (100%%) | total %s\n" \
                "$(fmt_time "$bsec")" "$i" "$n" "$(fmt_time "$elapsed")"
        fi
        bcount=0
    fi
done

if [ "$failed_imgs" -gt 0 ]; then
    echo "done: $((n - failed_imgs)) textures upscaled into $out ($failed_imgs failed and skipped)"
else
    echo "done: $n textures upscaled into $out"
fi
