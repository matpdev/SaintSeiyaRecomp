#!/bin/sh
# Abre o jogo (compila antes, se ainda não foi compilado ou se o código mudou).
#
#   ./jogar.sh                    joga
#   ./jogar.sh -v                 joga mostrando o log (para relatar problemas)
#   ./jogar.sh --atalho           cria um ícone no menu de aplicativos
#
# Opções do jogo vão por variáveis de ambiente (veja o README), por exemplo:
#   SSTHEH_UNLOCK_ALL=1 ./jogar.sh
set -eu
cd "$(dirname "$0")"
DIR=$PWD

if [ "${1:-}" = "--atalho" ]; then
    APPS="${XDG_DATA_HOME:-$HOME/.local/share}/applications"
    mkdir -p "$APPS"
    cat > "$APPS/sstheh.desktop" <<EOF
[Desktop Entry]
Type=Application
Name=Saint Seiya: The Hades
Comment=Port para PC (do seu próprio disco)
Exec="$DIR/jogar.sh"
Path=$DIR
Icon=applications-games
Terminal=false
Categories=Game;
EOF
    echo "✓ atalho criado: $APPS/sstheh.desktop"
    exit 0
fi
case "${1:-}" in -h|--help) sed -n '2,9p' "$0" | sed 's/^# \{0,1\}//'; exit 0 ;; esac

# compila quando falta o executável, o disco, ou quando o código é mais novo que ele
if [ ! -x build/sstheh ] || [ ! -e disc/game.iso ] || [ ! -f disc/SLES_541.62 ]; then
    ./compilar.sh
elif [ -n "$(find port tools/recomp configure.py -newer build/sstheh -type f 2>/dev/null | head -1)" ]; then
    echo "→ o código mudou: recompilando"
    ./compilar.sh
fi

exec ./build/sstheh "$@"
