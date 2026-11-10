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
        if [ "$(uname -s)" = Darwin ]; then         # macOS: a small app in ~/Applications that runs this script
            APP="$HOME/Applications/Saint Seiya The Hades.app"
            mkdir -p "$APP/Contents/MacOS"
            cat > "$APP/Contents/MacOS/sstheh" <<LAUNCHER
#!/bin/sh
exec "$DIR/play.sh" "\$@"
LAUNCHER
            chmod +x "$APP/Contents/MacOS/sstheh"
            cat > "$APP/Contents/Info.plist" <<PLIST
<?xml version="1.0" encoding="UTF-8"?>
<!DOCTYPE plist PUBLIC "-//Apple//DTD PLIST 1.0//EN" "http://www.apple.com/DTDs/PropertyList-1.0.dtd">
<plist version="1.0"><dict>
    <key>CFBundleName</key><string>Saint Seiya: The Hades</string>
    <key>CFBundleExecutable</key><string>sstheh</string>
    <key>CFBundleIdentifier</key><string>io.github.saintseiyarecomp.sstheh</string>
    <key>CFBundlePackageType</key><string>APPL</string>
    <key>LSApplicationCategoryType</key><string>public.app-category.games</string>
    <key>NSHighResolutionCapable</key><true/>
</dict></plist>
PLIST
            echo "✓ shortcut created: $APP"
            exit 0
        fi
        APPS="${XDG_DATA_HOME:-$HOME/.local/share}/applications"
        mkdir -p "$APPS"
        cat > "$APPS/sstheh.desktop" <<DESKTOP
[Desktop Entry]
Type=Application
Name=Saint Seiya: The Hades
Comment=Native PC port (from your own disc)
Exec="$DIR/play.sh"
Path=$DIR
Icon=applications-games
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
