#!/bin/sh
# Starts the game (builds it first if it was not built yet or the code changed).
#
#   ./play.sh                     play
#   ./play.sh -v                  play with the log on screen (for bug reports)
#   ./play.sh --shortcut          adds an icon to the applications menu
#
# Game options go in environment variables (see the README), for example:
#   SSTHEH_UNLOCK_ALL=1 ./play.sh
set -eu
cd "$(dirname "$0")"
DIR=$PWD

case "${1:-}" in
    --shortcut|--atalho)
        APPS="${XDG_DATA_HOME:-$HOME/.local/share}/applications"
        mkdir -p "$APPS"
        cat > "$APPS/sstheh.desktop" <<DESKTOP
[Desktop Entry]
Type=Application
Name=Saint Seiya: The Hades
Comment=Native PC port (from your own disc)
Exec="$DIR/play.sh"
Path=$DIR
Icon=$DIR/tools/appimage/saintseiyadecomp.png
Terminal=false
Categories=Game;
DESKTOP
        echo "✓ shortcut created: $APPS/sstheh.desktop"
        exit 0 ;;
    -h|--help) sed -n '2,9p' "$0" | sed 's/^# \{0,1\}//'; exit 0 ;;
esac

# build when the executable or the disc is missing, or when the code is newer than the executable
if [ ! -x build/sstheh ] || [ ! -e disc/game.iso ] || [ ! -f disc/SLES_541.62 ]; then
    ./build.sh
elif [ -n "$(find port tools/recomp configure.py -newer build/sstheh -type f 2>/dev/null | head -1)" ]; then
    echo "→ the code changed: rebuilding"
    ./build.sh
fi

exec ./build/sstheh "$@"
