#!/bin/sh
# What building the Windows port needs, into tools/win/ (not kept in git):
#   SDL3 (MinGW development release), FFmpeg (BtbN's LGPL shared build), and FreeType built here
#   with MinGW-w64 (static, no other libraries).
# Then: python3 configure.py --no-split --windows && ninja -f build-win.ninja
# Needs x86_64-w64-mingw32-gcc, cmake, curl, unzip.
set -eu
cd "$(dirname "$0")/win" 2>/dev/null || { mkdir -p "$(dirname "$0")/win"; cd "$(dirname "$0")/win"; }
SDL=3.4.20
FREETYPE=2.14.1
mkdir -p dl
get() { [ -s "dl/$1" ] || curl -fsSL -o "dl/$1" "$2"; }
get "SDL3-devel-$SDL-mingw.tar.gz" "https://github.com/libsdl-org/SDL/releases/download/release-$SDL/SDL3-devel-$SDL-mingw.tar.gz"
get ffmpeg-win64.zip "https://github.com/FFmpeg-Builds/FFmpeg-Builds/releases/download/latest/ffmpeg-n9.0-latest-win64-lgpl-shared-9.0.zip"
get freetype.tar.xz "https://download.savannah.gnu.org/releases/freetype/freetype-$FREETYPE.tar.xz"
[ -d "SDL3-$SDL" ] || tar xzf "dl/SDL3-devel-$SDL-mingw.tar.gz"
ls -d ffmpeg-*-win64-lgpl-shared-* >/dev/null 2>&1 || unzip -q dl/ffmpeg-win64.zip
if [ ! -f freetype/lib/libfreetype.a ]; then
    [ -d "freetype-$FREETYPE" ] || tar xJf dl/freetype.tar.xz
    cat > mingw.cmake <<'EOF'
set(CMAKE_SYSTEM_NAME Windows)
set(CMAKE_C_COMPILER x86_64-w64-mingw32-gcc)
set(CMAKE_CXX_COMPILER x86_64-w64-mingw32-g++)
set(CMAKE_RC_COMPILER x86_64-w64-mingw32-windres)
set(CMAKE_FIND_ROOT_PATH /usr/x86_64-w64-mingw32)
set(CMAKE_FIND_ROOT_PATH_MODE_PROGRAM NEVER)
set(CMAKE_FIND_ROOT_PATH_MODE_LIBRARY ONLY)
set(CMAKE_FIND_ROOT_PATH_MODE_INCLUDE ONLY)
EOF
    cmake -S "freetype-$FREETYPE" -B ft-build -DCMAKE_TOOLCHAIN_FILE="$PWD/mingw.cmake" -DCMAKE_BUILD_TYPE=Release \
        -DCMAKE_INSTALL_PREFIX="$PWD/freetype" -DBUILD_SHARED_LIBS=OFF -DFT_DISABLE_ZLIB=ON -DFT_DISABLE_BZIP2=ON \
        -DFT_DISABLE_PNG=ON -DFT_DISABLE_HARFBUZZ=ON -DFT_DISABLE_BROTLI=ON >/dev/null
    cmake --build ft-build -j >/dev/null
    cmake --install ft-build >/dev/null
fi
echo "tools/win ready: SDL3 $SDL, FFmpeg 9.0, FreeType $FREETYPE"
