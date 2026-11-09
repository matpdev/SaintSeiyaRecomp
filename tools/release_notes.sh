#!/bin/sh
# The text of a GitHub release: what to download, what is needed, and the commits since the release
# before it. The CI writes it into each release it makes (.github/workflows/ci.yml).
#   tools/release_notes.sh vX.Y.Z
set -eu
TAG=$1
LAST=$(git describe --tags --abbrev=0 --match 'v[0-9]*' "$TAG^" 2>/dev/null || true)
echo "## Downloads"
echo
echo "- **Windows 10/11 (64-bit):** \`SaintSeiyaDecomp-windows-x64.zip\`: unzip, run \`SaintSeiyaDecomp-setup.exe\`."
echo "- **Linux (x86-64, glibc 2.41+):** \`SaintSeiyaDecomp-x86_64.AppImage\`: make it executable and run it."
echo
echo "You need your own copy of the game as an ISO, the European (SLES-54162) or the Japanese (SLPS-25744) release: the setup checks it and"
echo "copies it next to the game. No game data (disc image, models, textures, sounds) is in these packages."
echo "A GPU with Vulkan is needed."
echo
echo "## Changes${LAST:+ since $LAST}"
echo
git log --format='- %s' ${LAST:+"$LAST"..}"$TAG"
