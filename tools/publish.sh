#!/bin/sh
# A GitHub release, made on a machine with the game (the packages hold the port built from it):
#   tools/publish.sh v0.2.0           builds dist/ (tools/release.sh windows and linux), tags the commit,
#                                     pushes the tag and creates the release with the packages
#   tools/publish.sh v0.2.0 --draft   the same, as a draft to look over on GitHub before publishing
# Needs a clean tree on a pushed commit, the GitHub CLI logged in (gh auth login), and what
# tools/release.sh needs (docker, MinGW-w64, tools/win from tools/win_deps.sh).
set -eu
cd "$(dirname "$0")/.."
TAG=${1:-}
DRAFT=${2:-}
ok()   { printf '\033[32m✓\033[0m %s\n' "$*"; }
fail() { printf '\033[31m✗ %s\033[0m\n' "$*" >&2; exit 1; }

echo "$TAG" | grep -Eq '^v[0-9]+\.[0-9]+\.[0-9]+$' || fail "usage: tools/publish.sh vX.Y.Z [--draft]"
command -v gh >/dev/null || fail "the GitHub CLI (gh) is needed: install it, then gh auth login"
gh auth status >/dev/null 2>&1 || fail "gh is not logged in: gh auth login"
[ -z "$(git status --porcelain)" ] || fail "uncommitted changes: commit or stash them first"
git fetch -q origin
[ "$(git rev-parse HEAD)" = "$(git rev-parse '@{u}')" ] || fail "this commit is not the one pushed: push first"
git rev-parse -q --verify "refs/tags/$TAG" >/dev/null && fail "tag $TAG exists already"
[ -f tools/win/freetype/lib/libfreetype.a ] || fail "no FreeType for Windows (the texts would keep the disc's font): run tools/win_deps.sh"

git tag -a "$TAG" -m "$TAG"                   # first: the packages are named after it (git describe)
trap 'git tag -d "$TAG" >/dev/null 2>&1; fail "stopped: tag $TAG removed"' EXIT
./build.sh >/dev/null                         # the Linux build the packages reuse, up to date
ok "port built"
tools/release.sh windows
tools/release.sh linux
cd dist
sha256sum SaintSeiyaDecomp-windows-x64.zip SaintSeiyaDecomp-x86_64.AppImage > SHA256SUMS.txt
cd ..
ok "checksums"

# the notes: the commits since the last release
LAST=$(git describe --tags --abbrev=0 "$TAG^" 2>/dev/null || true)
{
    echo "## Downloads"
    echo
    echo "- **Windows 10/11 (64-bit):** \`SaintSeiyaDecomp-windows-x64.zip\`: unzip, run \`SaintSeiyaDecomp-setup.exe\`."
    echo "- **Linux (x86-64, glibc 2.41+):** \`SaintSeiyaDecomp-x86_64.AppImage\`: make it executable and run it."
    echo
    echo "You need your own copy of the game (European release, SLES-54162) as an ISO: the setup checks it and"
    echo "copies it next to the game. No game data (disc image, models, textures, sounds) is in these packages."
    echo "A GPU with Vulkan is needed."
    echo
    echo "## Changes${LAST:+ since $LAST}"
    echo
    git log --format='- %s' ${LAST:+"$LAST"..HEAD}
} > dist/notes.md

git push -q origin "$TAG"
trap - EXIT
ok "tag $TAG pushed"
gh release create "$TAG" ${DRAFT:+--draft} --title "Saint Seiya: The Hades PC port $TAG" --notes-file dist/notes.md \
    dist/SaintSeiyaDecomp-windows-x64.zip dist/SaintSeiyaDecomp-x86_64.AppImage dist/SHA256SUMS.txt
ok "release $TAG created${DRAFT:+ (draft)}"
