#!/bin/sh
# Compila o port a partir da sua imagem do disco (Saint Seiya: The Hades, Europa, SLES-54162).
#
#   ./compilar.sh                 pede a ISO (janela de seleção, se houver, ou no terminal)
#   ./compilar.sh jogo.iso        usa essa ISO
#   ./compilar.sh --limpar        apaga o que foi gerado (build/, asm/) e compila de novo
#
# Confere as dependências, valida o disco, prepara disc/, cria o ambiente Python (.venv) e gera
# build/sstheh. Depois é só rodar ./jogar.sh.
set -eu
cd "$(dirname "$0")"

ok()   { printf '\033[32m✓\033[0m %s\n' "$*"; }
info() { printf '\033[36m→\033[0m %s\n' "$*"; }
fail() { printf '\033[31m✗ %s\033[0m\n' "$*" >&2; exit 1; }

ISO=""
for a in "$@"; do
    case $a in
        --limpar) rm -rf build asm assets build.ninja .ninja_log .ninja_deps; info "arquivos gerados apagados" ;;
        -h|--help) sed -n '2,9p' "$0" | sed 's/^# \{0,1\}//'; exit 0 ;;
        *) ISO=$a ;;
    esac
done

# ---------------------------------------------------------------------------------- dependências
missing=""
command -v gcc >/dev/null || missing="$missing gcc"
command -v python3 >/dev/null || missing="$missing python3"
command -v glslc >/dev/null || missing="$missing glslc"
if ! { pkg-config --exists sdl3 2>/dev/null || [ -e /usr/include/SDL3/SDL.h ] || [ -e /usr/local/include/SDL3/SDL.h ]; }; then
    missing="$missing SDL3"
fi
python3 -c 'import venv, ensurepip' 2>/dev/null || missing="$missing python3-venv"
if [ -n "$missing" ]; then
    printf '\033[31m✗ faltam:%s\033[0m\n' "$missing" >&2
    if command -v pacman >/dev/null; then echo "  sudo pacman -S gcc python shaderc sdl3 vulkan-icd-loader"
    elif command -v apt >/dev/null; then echo "  sudo apt install gcc python3-venv glslc libsdl3-dev libvulkan1"
    elif command -v dnf >/dev/null; then echo "  sudo dnf install gcc python3 glslc SDL3-devel vulkan-loader"
    fi
    exit 1
fi
ok "dependências: gcc, python3, glslc, SDL3"

# ---------------------------------------------------------------------------------- o disco
mkdir -p disc
if [ -z "$ISO" ] && [ -e disc/game.iso ] && [ -f disc/SLES_541.62 ]; then
    ok "disco já preparado (disc/game.iso)"
else
    if [ -z "$ISO" ]; then
        if [ -n "${DISPLAY:-}${WAYLAND_DISPLAY:-}" ] && command -v zenity >/dev/null; then
            ISO=$(zenity --file-selection --title="Escolha a ISO de Saint Seiya: The Hades (Europa)" \
                  --file-filter="Imagens de disco | *.iso *.ISO" 2>/dev/null) || fail "nenhuma ISO escolhida"
        elif [ -n "${DISPLAY:-}${WAYLAND_DISPLAY:-}" ] && command -v kdialog >/dev/null; then
            ISO=$(kdialog --getopenfilename "$HOME" "*.iso *.ISO|Imagens de disco" 2>/dev/null) || fail "nenhuma ISO escolhida"
        else
            printf 'Caminho da ISO (Saint Seiya: The Hades, Europa, SLES-54162): '
            read -r ISO
        fi
    fi
    [ -f "$ISO" ] || fail "não achei o arquivo: $ISO"
    ISO=$(realpath "$ISO")
    info "conferindo $ISO"
    python3 tools/disc.py "$ISO" disc/SLES_541.62.new || { rm -f disc/SLES_541.62.new; fail "essa ISO não serve"; }
    mv disc/SLES_541.62.new disc/SLES_541.62
    ln -sfn "$ISO" disc/game.iso
    ok "disc/game.iso → $ISO"
fi

# ---------------------------------------------------------------------------------- Python
if [ ! -x .venv/bin/python ] || ! .venv/bin/python -c 'import splat, spimdisasm, rabbitizer, ninja_syntax, yaml, elftools' 2>/dev/null \
   || [ ! -x .venv/bin/ninja ]; then
    info "preparando o ambiente Python (.venv), só na primeira vez"
    python3 -m venv .venv
    .venv/bin/pip install -q --upgrade pip
    .venv/bin/pip install -q 'splat64[mips]' spimdisasm rabbitizer ninja-syntax pyyaml pyelftools ninja
fi
ok "ambiente Python"

# ---------------------------------------------------------------------------------- compilar
info "compilando (a primeira vez leva alguns minutos)"
.venv/bin/python configure.py >/dev/null
PATH="$PWD/.venv/bin:$PATH" ninja -j"$(nproc)" port
ok "pronto: build/sstheh. Para jogar: ./jogar.sh"
