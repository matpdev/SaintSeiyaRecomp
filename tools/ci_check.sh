#!/bin/sh
# What can be checked without the game (the CI runs it; it works the same on your machine):
#   tools/ci_check.sh linux     the port's own code compiled with gcc, warnings as errors; the setup (Qt) built
#   tools/ci_check.sh windows   the port's own code compiled with MinGW-w64 (tools/win_deps.sh first)
#   tools/ci_check.sh macos     the port's own code compiled with clang for Apple Silicon (shaders also as MSL)
#   tools/ci_check.sh python    the Python tools byte-compiled
# The game's translated code (generated/) is left to the release jobs, which build everything
# (tools/release.sh): this is the fast check, with the port's own warnings as errors.
set -eu
cd "$(dirname "$0")/.."
OUT=build-ci
WARN="-Wall -Wextra -Wno-unused-parameter -Werror"
INC="-Iport/runtime -Iport/kernel -Iport/iop -Iport/gs -I$OUT/shaders"
ok()   { printf '\033[32m✓\033[0m %s\n' "$*"; }
fail() { printf '\033[31m✗ %s\033[0m\n' "$*" >&2; exit 1; }

shaders() {     # port/gs/shaders -> $OUT/shaders/shaders.h, as configure.py does
    mkdir -p $OUT/shaders
    spvs=""
    for sh in port/gs/shaders/*.vert port/gs/shaders/*.frag; do
        glslc -O "$sh" -o "$OUT/shaders/$(basename "$sh").spv" || fail "glslc $sh"
        spvs="$spvs $OUT/shaders/$(basename "$sh").spv"
    done
    if [ "${1:-}" = msl ]; then     # Metal: the same shaders as MSL
        for spv in $spvs; do
            spirv-cross --msl --msl-version 20100 "$spv" --output "${spv%.spv}.msl" || fail "spirv-cross $spv"
            spvs="$spvs ${spv%.spv}.msl"
        done
    fi
    python3 -I tools/spv2h.py $OUT/shaders/shaders.h $spvs
}

compile_all() {     # $1: compiler, $2: flags, $3: object folder, $4: extra flags for movie.c, $5: for textfont.c
    mkdir -p "$3"
    n=0 bad=""
    for src in $(find port -name '*.c' | sort); do
        extra=""
        [ "$src" = port/hle/movie.c ] && extra="$4"
        [ "$src" = port/hle/textfont.c ] && extra="$5"
        # shellcheck disable=SC2086
        $1 -c $2 $extra "$src" -o "$3/$(echo "$src" | tr / _).o" || bad="$bad $src"
        n=$((n + 1))
    done
    [ -z "$bad" ] || fail "did not compile:$bad"
    ok "$n files compiled"
}

case ${1:-} in
linux)
    shaders
    ff=$(pkg-config --cflags libavformat libavcodec libavutil libswscale libswresample)
    ft=$(pkg-config --cflags freetype2)
    compile_all gcc "-O2 -g -fno-strict-aliasing -ffp-contract=off -march=x86-64-v2 $WARN $INC $(pkg-config --cflags sdl3)" \
        $OUT/linux "-DSSTHEH_FFMPEG $ff" "-DSSTHEH_FREETYPE $ft"
    cmake -S tools/setup -B $OUT/setup -G Ninja -DCMAKE_BUILD_TYPE=Release -DCMAKE_CXX_FLAGS="-Wall -Wextra -Werror" >/dev/null
    cmake --build $OUT/setup >/dev/null || fail "setup"
    ok "setup built"
    ;;
windows)
    shaders
    sdl=$(ls -d tools/win/SDL3-*/x86_64-w64-mingw32 2>/dev/null | head -1)
    ff=$(ls -d tools/win/ffmpeg-*-win64-lgpl-shared-* 2>/dev/null | head -1)
    [ -n "$sdl" ] && [ -n "$ff" ] || fail "tools/win: run tools/win_deps.sh first"
    ftflags="-DSSTHEH_FREETYPE -Itools/win/freetype/include/freetype2"
    [ -f tools/win/freetype/lib/libfreetype.a ] || ftflags=""
    compile_all x86_64-w64-mingw32-gcc "-O2 -g -fno-strict-aliasing -ffp-contract=off -march=x86-64-v2 -D_FILE_OFFSET_BITS=64 $WARN $INC -I$sdl/include" \
        $OUT/windows "-DSSTHEH_FFMPEG -I$ff/include" "$ftflags"
    ;;
macos)
    shaders msl
    ff=$(pkg-config --cflags libavformat libavcodec libavutil libswscale libswresample)
    ft=$(pkg-config --cflags freetype2)
    compile_all cc "-O2 -g -fno-strict-aliasing -ffp-contract=off -mcpu=apple-m1 $WARN $INC $(pkg-config --cflags sdl3)" \
        $OUT/macos "-DSSTHEH_FFMPEG $ff" "-DSSTHEH_FREETYPE $ft"
    ;;
python)
    python3 -m py_compile configure.py tools/*.py tools/recomp/*.py || fail "python"
    ok "Python tools compile"
    ;;
*) echo "usage: tools/ci_check.sh linux|windows|macos|python"; exit 1 ;;
esac
