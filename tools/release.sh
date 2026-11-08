#!/bin/sh
# Builds a release package: the port and its setup, without any data of the game. The GitHub CI runs it
# on every version (.github/workflows/ci.yml); it works the same here.
#   tools/release.sh windows    -> dist/SaintSeiyaDecomp-windows-x64.zip
#   tools/release.sh linux      -> dist/SaintSeiyaDecomp-x86_64.AppImage (built on Debian 13: runs on glibc
#                                  2.41 and newer; in a docker container, or right here with SSTHEH_RELEASE_HERE=1
#                                  on a Debian 13 system, as the CI does)
# The port is compiled from generated/ (the game's code translated to C, kept in git) and port/: no disc is
# needed. Needs the Python environment (.venv with ninja and ninja-syntax), glslc, and for Windows MinGW-w64,
# 7z and tools/win/ (tools/win_deps.sh).
set -eu
cd "$(dirname "$0")/.."
TARGET=${1:-}
VERSION=$(git describe --tags --always 2>/dev/null || echo dev)
ok()   { printf '\033[32m✓\033[0m %s\n' "$*"; }
fail() { printf '\033[31m✗ %s\033[0m\n' "$*" >&2; exit 1; }

shaders() {     # build/shaders/shaders.h, which both builds include
    .venv/bin/python configure.py --no-split "$@" >/dev/null
    .venv/bin/ninja build/shaders/shaders.h >/dev/null
}

windows() {
    W=tools/win
    QT=$W/qt
    [ -d "$QT/bin" ] && [ -f "$W/qtrt/libc++.dll" ] || fail "tools/win/qt and tools/win/qtrt are missing: run tools/win_deps.sh"
    [ -f "$W/freetype/lib/libfreetype.a" ] || fail "no FreeType for Windows (the texts would keep the disc's font): run tools/win_deps.sh"
    shaders --windows
    .venv/bin/ninja -f build-win.ninja >/dev/null
    ok "game built for Windows"
    mkdir -p build-win/setup
    x86_64-w64-mingw32-g++ -std=c++17 -O2 -DUNICODE -D_UNICODE -DQT_NO_DEBUG \
        -I$QT/include -I$QT/include/QtCore -I$QT/include/QtGui -I$QT/include/QtWidgets -I$QT/include/QtNetwork \
        -I$QT/mkspecs/win32-clang-g++ tools/setup/main.cpp -o build-win/setup/SaintSeiyaDecomp-setup.exe \
        -mwindows -static-libstdc++ -static-libgcc -L$QT/lib -lQt6EntryPoint -lQt6Widgets -lQt6Gui -lQt6Network \
        -lQt6Core -lshell32
    ok "setup built for Windows"

    D=dist/SaintSeiyaDecomp
    rm -rf dist/SaintSeiyaDecomp dist/SaintSeiyaDecomp-windows-x64.zip
    mkdir -p "$D/platforms" "$D/styles" "$D/tls" "$D/licenses"
    x86_64-w64-mingw32-strip -o "$D/sstheh.exe" build-win/sstheh.exe
    cp build-win/*.dll "$D/"
    x86_64-w64-mingw32-strip -o "$D/SaintSeiyaDecomp-setup.exe" build-win/setup/SaintSeiyaDecomp-setup.exe
    for m in Core Gui Widgets Network; do cp "$QT/bin/Qt6$m.dll" "$D/"; done
    cp "$QT/plugins/platforms/qwindows.dll" "$D/platforms/"
    cp "$QT/plugins/styles/qmodernwindowsstyle.dll" "$D/styles/"
    cp "$QT/plugins/tls/qschannelbackend.dll" "$D/tls/"
    cp "$W/qtrt/libc++.dll" "$W/qtrt/libunwind.dll" "$D/"
    for p in /usr/x86_64-w64-mingw32/bin /usr/x86_64-w64-mingw32/lib; do     # Arch, Debian
        [ -f $p/libwinpthread-1.dll ] && cp $p/libwinpthread-1.dll "$D/" && break
    done
    [ -f "$D/libwinpthread-1.dll" ] || fail "libwinpthread-1.dll (MinGW-w64) not found"

    L=$D/licenses
    cp LICENSE "$L/SaintSeiyaDecomp-MIT.txt"
    cp licenses/Tenkaichi3Decomp-MIT.txt licenses/OFL-1.1.txt "$L/"
    cp "$W"/SDL3-*/LICENSE.txt "$L/SDL3-zlib.txt"
    cp "$W"/ffmpeg-*-win64-lgpl-shared-*/LICENSE.txt "$L/FFmpeg-LGPL-3.0.txt"
    cp licenses/windows/*.txt "$L/"
    cat > "$L/THIRD-PARTY.txt" <<'EOF'
This release contains, unmodified and dynamically linked:
- SDL 3 (zlib license): https://libsdl.org — SDL3.dll
- FFmpeg 9.0, LGPL build by BtbN (LGPL 3.0): https://github.com/BtbN/FFmpeg-Builds — sources: https://ffmpeg.org
  (avcodec, avformat, avutil, swresample, swscale DLLs). You may replace these DLLs with your own builds.
- Qt 6.12 (LGPL 3.0): https://www.qt.io — sources: https://download.qt.io/official_releases/qt/
  (Qt6Core/Gui/Widgets/Network DLLs and the plugins in platforms/, styles/, tls/). You may replace them.
- libc++ and libunwind from LLVM (Apache 2.0 with LLVM exception), as Qt's llvm-mingw build needs them.
- winpthreads from MinGW-w64 (MIT-style, see MinGW-w64-runtime.txt).
The font the setup downloads, M PLUS Rounded 1c, is under the SIL Open Font License 1.1 (OFL-1.1.txt).
No data of the game Saint Seiya: The Hades is included (disc image, models, textures, sounds): the setup uses
your own disc image.
EOF
    sed 's/$/\r/' > "$D/LEIAME - README.txt" <<EOF
Saint Seiya: The Hades - PC Port ($VERSION)
https://github.com/matpdev/SaintSeiyaRecomp

PORTUGUES
1. Abra SaintSeiyaDecomp-setup.exe.
2. Escolha a imagem (ISO) da sua copia do jogo, versao europeia (SLES-54162). Ela e conferida e copiada para a
   pasta disc\ (cerca de 4 GB livres sao necessarios).
3. Aperte Instalar e depois Jogar. Da proxima vez, abra sstheh.exe ou o atalho.
Precisa de Windows 10/11 de 64 bits e de uma placa de video com Vulkan.
Teclas: setas, Z/X/A/S = X/O/Quadrado/Triangulo, Q/W/E/R = L1/R1/L2/R2, Enter = Start, Backspace = Select,
F1 tamanho da janela, F2 16:9/4:3, F3 desempenho, F4 vsync, F5 treino e opcoes. Controles sao reconhecidos.
As configuracoes e o memory card ficam em %APPDATA%\sstheh.

ENGLISH
1. Run SaintSeiyaDecomp-setup.exe.
2. Choose the disc image (ISO) of your own copy of the game, European release (SLES-54162). It is checked and
   copied into the disc\ folder (about 4 GB free are needed).
3. Press Install, then Play. Next time, run sstheh.exe or the shortcut.
Needs 64-bit Windows 10/11 and a graphics card with Vulkan.
Keys: arrows, Z/X/A/S = Cross/Circle/Square/Triangle, Q/W/E/R = L1/R1/L2/R2, Enter = Start, Backspace = Select,
F1 window size, F2 16:9/4:3, F3 performance, F4 vsync, F5 training and options. Gamepads are picked up.
Settings and the memory card are kept in %APPDATA%\sstheh.

Licenses: licenses\ (this port: MIT; the libraries: see THIRD-PARTY.txt).
EOF
    (cd dist && 7z a -tzip -mx=7 -bso0 -bsp0 SaintSeiyaDecomp-windows-x64.zip SaintSeiyaDecomp)
    ok "dist/SaintSeiyaDecomp-windows-x64.zip ($(du -h dist/SaintSeiyaDecomp-windows-x64.zip | cut -f1))"
}

linux() {
    shaders
    if [ -n "${SSTHEH_RELEASE_HERE:-}" ]; then
        SRC=$PWD sh tools/appimage/build.sh
    else
        command -v docker >/dev/null || fail "docker is needed (the AppImage is built in a Debian 13 container)"
        IMG=saintseiyadecomp-appimage
        if ! docker image inspect $IMG >/dev/null 2>&1 && ! docker build -q -t $IMG tools/appimage >/dev/null 2>&1; then
            # docker build can't be given a DNS server (a host resolving through 127.0.0.53 leaves the build
            # without one): the same image made by hand, with the Dockerfile's commands
            RUN=$(sed -n '/^RUN /,/[^\\]$/p' tools/appimage/Dockerfile | sed 's/^RUN //; s/\\$//' | tr '\n' ' ')
            docker rm -f ${IMG}-make >/dev/null 2>&1 || true
            docker run --dns "${SSTHEH_DOCKER_DNS:-1.1.1.1}" --name ${IMG}-make debian:trixie sh -c "$RUN" >/dev/null
            docker commit ${IMG}-make $IMG >/dev/null
            docker rm ${IMG}-make >/dev/null
        fi
        ok "build container ready (Debian 13)"
        docker run --rm --user "$(id -u):$(id -g)" -v "$PWD:/src" -e HOME=/tmp saintseiyadecomp-appimage sh /src/tools/appimage/build.sh
    fi
    RT=tools/appimage/runtime-x86_64
    [ -s $RT ] || curl -fsSL -o $RT https://github.com/AppImage/type2-runtime/releases/download/continuous/runtime-x86_64
    cat $RT dist/app.squashfs > dist/SaintSeiyaDecomp-x86_64.AppImage
    chmod +x dist/SaintSeiyaDecomp-x86_64.AppImage
    rm -f dist/app.squashfs
    ok "dist/SaintSeiyaDecomp-x86_64.AppImage ($(du -h dist/SaintSeiyaDecomp-x86_64.AppImage | cut -f1))"
}

case $TARGET in
    windows) windows ;;
    linux) linux ;;
    *) echo "usage: tools/release.sh windows|linux"; exit 1 ;;
esac
