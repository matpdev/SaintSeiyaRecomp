#!/bin/sh
# Run by the CI after a push to master builds: tags the commit with the next version and opens a draft
# release for it. The packages hold the port built from the game, so they can't be made here: the draft
# waits for tools/publish.sh, run on a machine with the game, which uploads them and publishes it.
# The next version bumps the patch number (v0.1.0 -> v0.1.1); a commit message with #minor or #major
# since the last tag bumps that instead. The first one is v0.1.0.
# Needs: a clone with the history and tags (fetch-depth: 0), gh with GH_TOKEN (contents: write).
set -eu
cd "$(dirname "$0")/.."
if t=$(git describe --exact-match --tags --match 'v[0-9]*' HEAD 2>/dev/null); then
    echo "already tagged: $t"; exit 0
fi
LAST=$(git describe --tags --abbrev=0 --match 'v[0-9]*' HEAD 2>/dev/null || true)
if [ -z "$LAST" ]; then
    NEXT=v0.1.0
else
    IFS=. read -r MA MI PA <<V
${LAST#v}
V
    MSGS=$(git log --format=%B "$LAST..HEAD")
    if echo "$MSGS" | grep -q '#major'; then NEXT=v$((MA + 1)).0.0
    elif echo "$MSGS" | grep -q '#minor'; then NEXT=v$MA.$((MI + 1)).0
    else NEXT=v$MA.$MI.$((PA + 1)); fi
fi

git config user.name "github-actions[bot]"
git config user.email "41898282+github-actions[bot]@users.noreply.github.com"
git tag -a "$NEXT" -m "$NEXT"
git push -q origin "$NEXT"
echo "tagged $NEXT"

# only the newest version waits as a draft: older drafts never got their packages
gh release list --limit 100 --json tagName,isDraft --jq '.[] | select(.isDraft) | .tagName' |
while read -r old; do
    gh release delete "$old" --yes && echo "draft $old replaced"
done
tools/release_notes.sh "$NEXT" > "${RUNNER_TEMP:-/tmp}/notes.md"
gh release create "$NEXT" --draft --verify-tag --title "Saint Seiya: The Hades PC port $NEXT" \
    --notes-file "${RUNNER_TEMP:-/tmp}/notes.md"
echo "draft release $NEXT: run tools/publish.sh on a machine with the game to add the packages"
