#!/bin/sh
# Builds the port from your own disc image (Saint Seiya: The Hades, Europe, SLES-54162).
#
#   ./build.sh                    asks for the ISO (a file picker if there is one, or in the terminal)
#   ./build.sh game.iso           uses that ISO
#   ./build.sh --clean            removes what was generated (build/, asm/) and builds again
#
# Checks the dependencies, verifies the disc, prepares disc/, creates the Python environment (.venv)
# and builds build/sstheh. Then just run ./play.sh.
set -eu
cd "$(dirname "$0")"

ok()   { printf '\033[32m✓\033[0m %s\n' "$*"; }
info() { printf '\033[36m→\033[0m %s\n' "$*"; }
fail() { printf '\033[31m✗ %s\033[0m\n' "$*" >&2; exit 1; }

ISO=""
for a in "$@"; do
    case $a in
        --clean|--limpar) rm -rf build asm assets build.ninja .ninja_log .ninja_deps; info "generated files removed" ;;
        -h|--help) sed -n '2,9p' "$0" | sed 's/^# \{0,1\}//'; exit 0 ;;
        *) ISO=$a ;;
    esac
done

# ---------------------------------------------------------------------------------- dependencies
missing=""
command -v gcc >/dev/null || missing="$missing gcc"
command -v python3 >/dev/null || missing="$missing python3"
command -v glslc >/dev/null || missing="$missing glslc"
if ! { pkg-config --exists sdl3 2>/dev/null || [ -e /usr/include/SDL3/SDL.h ] || [ -e /usr/local/include/SDL3/SDL.h ]; }; then
    missing="$missing SDL3"
fi
python3 -c 'import venv, ensurepip' 2>/dev/null || missing="$missing python3-venv"
if [ -n "$missing" ]; then
    printf '\033[31m✗ missing:%s\033[0m\n' "$missing" >&2
    if command -v pacman >/dev/null; then echo "  sudo pacman -S gcc python shaderc sdl3 vulkan-icd-loader"
    elif command -v apt >/dev/null; then echo "  sudo apt install gcc python3-venv glslc libsdl3-dev libvulkan1"
    elif command -v dnf >/dev/null; then echo "  sudo dnf install gcc python3 glslc SDL3-devel vulkan-loader"
    fi
    exit 1
fi
ok "dependencies: gcc, python3, glslc, SDL3"
pkg-config --exists freetype2 2>/dev/null ||
    info "optional: FreeType (freetype2 / libfreetype-dev) not found, the texts keep the disc's font"
pkg-config --exists libavformat libavcodec libswscale libswresample 2>/dev/null ||
    info "optional: FFmpeg's libraries not found, the opening video is skipped"
# the font the game's texts are drawn with (not in the repository: downloaded once, OFL)
if pkg-config --exists freetype2 2>/dev/null && [ ! -s fonts/MPLUSRounded1c-Bold.ttf ]; then
    tools/fetch_font.sh >/dev/null 2>&1 && ok "font downloaded into fonts/" ||
        info "optional: could not download the font (tools/fetch_font.sh), the texts keep the disc's font"
fi

# ---------------------------------------------------------------------------------- the disc
mkdir -p disc
if [ -z "$ISO" ] && [ -e disc/game.iso ] && [ -f disc/SLES_541.62 ]; then
    ok "disc already prepared (disc/game.iso)"
else
    if [ -z "$ISO" ]; then
        if [ -n "${DISPLAY:-}${WAYLAND_DISPLAY:-}" ] && command -v zenity >/dev/null; then
            ISO=$(zenity --file-selection --title="Pick the Saint Seiya: The Hades ISO (Europe)" \
                  --file-filter="Disc images | *.iso *.ISO" 2>/dev/null) || fail "no ISO picked"
        elif [ -n "${DISPLAY:-}${WAYLAND_DISPLAY:-}" ] && command -v kdialog >/dev/null; then
            ISO=$(kdialog --getopenfilename "$HOME" "*.iso *.ISO|Disc images" 2>/dev/null) || fail "no ISO picked"
        else
            printf 'Path to the ISO (Saint Seiya: The Hades, Europe, SLES-54162): '
            read -r ISO
        fi
    fi
    [ -f "$ISO" ] || fail "file not found: $ISO"
    ISO=$(realpath "$ISO")
    info "checking $ISO"
    python3 tools/disc.py "$ISO" disc/SLES_541.62.new || { rm -f disc/SLES_541.62.new; fail "this ISO can't be used"; }
    mv disc/SLES_541.62.new disc/SLES_541.62
    ln -sfn "$ISO" disc/game.iso
    ok "disc/game.iso → $ISO"
fi

# ---------------------------------------------------------------------------------- Python
if [ ! -x .venv/bin/python ] || ! .venv/bin/python -c 'import splat, spimdisasm, rabbitizer, ninja_syntax, yaml, elftools' 2>/dev/null \
   || [ ! -x .venv/bin/ninja ]; then
    info "setting up the Python environment (.venv), first time only"
    python3 -m venv .venv
    .venv/bin/pip install -q --upgrade pip
    .venv/bin/pip install -q 'splat64[mips]' spimdisasm rabbitizer ninja-syntax pyyaml pyelftools ninja
fi
ok "Python environment"

# ---------------------------------------------------------------------------------- build
info "building (the first time takes a few minutes)"
.venv/bin/python configure.py >/dev/null
PATH="$PWD/.venv/bin:$PATH" ninja -j"$(nproc)" port
ok "done: build/sstheh. To play: ./play.sh"
