#!/bin/sh
# What building the Windows port needs, into tools/win/ (not kept in git):
#   SDL3 (MinGW development release), FFmpeg (BtbN's LGPL shared build), FreeType built here
#   with MinGW-w64 (static, no other libraries), and for the setup Qt 6's llvm-mingw build (qtbase,
#   tools/win/qt) with the libc++ and libunwind DLLs it needs (tools/win/qtrt), from Qt's online repository.
# Then: python3 configure.py --no-split --windows && ninja -f build-win.ninja; tools/release.sh windows
# Needs x86_64-w64-mingw32-gcc, cmake, curl, unzip, 7z.
set -eu
cd "$(dirname "$0")/win" 2>/dev/null || { mkdir -p "$(dirname "$0")/win"; cd "$(dirname "$0")/win"; }
SDL=3.4.20
FREETYPE=2.14.1
QTREPO=https://download.qt.io/online/qtsdkrepository/windows_x86/desktop
QTBASE=6.12.0-0-202609280346qtbase-Windows-Windows_11_24H2-Clang-Windows-Windows_11_24H2-X86_64.7z
LLVM_MINGW=22.1.7-202608200704llvm_mingw2217.7z
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
if [ ! -f qt/bin/Qt6Core.dll ]; then
    get "$QTBASE" "$QTREPO/qt6_6120/qt6_6120_llvm_mingw/qt.qt6.6120.win64_llvm_mingw/$QTBASE"
    rm -rf qt && mkdir qt && (cd qt && 7z x -y -bso0 -bsp0 "../dl/$QTBASE")
fi
if [ ! -f qtrt/libc++.dll ]; then
    get "$LLVM_MINGW" "$QTREPO/tools_llvm_mingw2217/qt.tools.win64_llvm_mingw2217/$LLVM_MINGW"
    7z e -y -bso0 -bsp0 -oqtrt "dl/$LLVM_MINGW" bin/libc++.dll bin/libunwind.dll
fi
echo "tools/win ready: SDL3 $SDL, FFmpeg 9.0, FreeType $FREETYPE, Qt 6.12 (llvm-mingw)"
