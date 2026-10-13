#!/bin/sh
# Wall-clock seconds for the game to reach vertical blank N (default 2900: the title screen),
# with the input that gets there. The picture is kept as build/bench.ppm for comparison.
cd "$(dirname "$0")/.."
n=${1:-2900}
start=$(date +%s%N)
timeout 600 ./build/sstheh -q --press 600:CROSS,1000:CROSS,1150:UP,1300:CROSS --shot "$n" >/dev/null 2>&1
end=$(date +%s%N)
cp "build/shot_$(printf %04d "$n").ppm" build/bench.ppm 2>/dev/null
echo "vblank $n reached in $(( (end - start) / 1000000 )) ms"
