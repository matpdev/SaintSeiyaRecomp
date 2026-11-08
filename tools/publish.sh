#!/bin/sh
# Finishes a GitHub release on a machine with the game (the packages hold the port built from it).
# The CI tags every push to master that builds (tools/auto_tag.sh) and opens a draft release for it;
# this builds the packages for that commit, uploads them and publishes the release:
#   tools/publish.sh                  the version the CI tagged on this commit
#   tools/publish.sh --draft          the same, left as a draft to look over on GitHub
#   tools/publish.sh v0.3.0 [--draft] tags this commit yourself (e.g. a version the CI didn't make)
# Needs a clean tree on a pushed commit, the GitHub CLI logged in (gh auth login), and what
# tools/release.sh needs (docker, MinGW-w64, tools/win from tools/win_deps.sh).
set -eu
cd "$(dirname "$0")/.."
TAG="" DRAFT=""
for a in "$@"; do
    case $a in
    --draft) DRAFT=1 ;;
    v*) TAG=$a ;;
    *) TAG=bad ;;
    esac
done
ok()   { printf '\033[32m✓\033[0m %s\n' "$*"; }
fail() { printf '\033[31m✗ %s\033[0m\n' "$*" >&2; exit 1; }

[ -z "$TAG" ] || echo "$TAG" | grep -Eq '^v[0-9]+\.[0-9]+\.[0-9]+$' || fail "usage: tools/publish.sh [vX.Y.Z] [--draft]"
command -v gh >/dev/null || fail "the GitHub CLI (gh) is needed: install it, then gh auth login"
gh auth status >/dev/null 2>&1 || fail "gh is not logged in: gh auth login"
[ -z "$(git status --porcelain)" ] || fail "uncommitted changes: commit or stash them first"
git fetch -q --tags origin
[ "$(git rev-parse HEAD)" = "$(git rev-parse '@{u}')" ] || fail "this commit is not the one pushed: push first"
[ -f tools/win/freetype/lib/libfreetype.a ] || fail "no FreeType for Windows (the texts would keep the disc's font): run tools/win_deps.sh"

MINE=""
if [ -z "$TAG" ]; then
    TAG=$(git describe --exact-match --tags --match 'v[0-9]*' HEAD 2>/dev/null) ||
        fail "no version tagged on this commit yet: wait for the CI to finish (or pass one: tools/publish.sh vX.Y.Z)"
    ok "version $TAG (tagged by the CI)"
elif git rev-parse -q --verify "refs/tags/$TAG" >/dev/null; then
    [ "$(git rev-parse "$TAG^{commit}")" = "$(git rev-parse HEAD)" ] || fail "tag $TAG is on another commit"
else
    git tag -a "$TAG" -m "$TAG"               # first: the packages are named after it (git describe)
    trap 'git tag -d "$TAG" >/dev/null 2>&1; fail "stopped: tag $TAG removed"' EXIT
    MINE=1
fi

./build.sh >/dev/null                         # the Linux build the packages reuse, up to date
ok "port built"
tools/release.sh windows
tools/release.sh linux
(cd dist && sha256sum SaintSeiyaDecomp-windows-x64.zip SaintSeiyaDecomp-x86_64.AppImage > SHA256SUMS.txt)
ok "checksums"
tools/release_notes.sh "$TAG" > dist/notes.md

if [ -n "$MINE" ]; then
    git push -q origin "$TAG"
    trap - EXIT
    ok "tag $TAG pushed"
fi
FILES="dist/SaintSeiyaDecomp-windows-x64.zip dist/SaintSeiyaDecomp-x86_64.AppImage dist/SHA256SUMS.txt"
if gh release view "$TAG" >/dev/null 2>&1; then
    # shellcheck disable=SC2086
    gh release upload "$TAG" --clobber $FILES
    gh release edit "$TAG" --notes-file dist/notes.md --draft="$([ -n "$DRAFT" ] && echo true || echo false)" >/dev/null
else
    # shellcheck disable=SC2086
    gh release create "$TAG" ${DRAFT:+--draft} --title "Saint Seiya: The Hades PC port $TAG" \
        --notes-file dist/notes.md $FILES
fi
[ -n "$DRAFT" ] && ok "release $TAG left as a draft" || ok "release $TAG published"
