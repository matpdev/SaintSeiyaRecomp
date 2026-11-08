#!/bin/sh
# The version the CI gives a push to master (.github/workflows/ci.yml): prints the next tag, or nothing
# when this commit has one already. The patch number goes up (v0.1.0 -> v0.1.1); #minor or #major in a
# commit message since the last tag bumps that number instead. The first one is v0.1.0.
set -eu
cd "$(dirname "$0")/.."
git describe --exact-match --tags --match 'v[0-9]*' HEAD >/dev/null 2>&1 && exit 0
LAST=$(git describe --tags --abbrev=0 --match 'v[0-9]*' HEAD 2>/dev/null || true)
[ -n "$LAST" ] || { echo v0.1.0; exit 0; }
IFS=. read -r MA MI PA <<V
${LAST#v}
V
MSGS=$(git log --format=%B "$LAST..HEAD")
if echo "$MSGS" | grep -q '#major'; then echo "v$((MA + 1)).0.0"
elif echo "$MSGS" | grep -q '#minor'; then echo "v$MA.$((MI + 1)).0"
else echo "v$MA.$MI.$((PA + 1))"; fi
