#!/usr/bin/env python3
"""version.h for port/win/version.rc: the version from git (the last vX.Y.Z tag, the full describe as text).

    tools/win_version.py <out version.h> <file description> <file name>
"""
import re
import subprocess
import sys

out, desc, name = sys.argv[1:4]
def git(*a):
    try:
        return subprocess.run(["git", *a], capture_output=True, text=True, check=True).stdout.strip()
    except (OSError, subprocess.CalledProcessError):
        return ""
full = git("describe", "--tags", "--always") or "dev"
m = re.match(r"v(\d+)\.(\d+)\.(\d+)", git("describe", "--tags", "--abbrev=0", "--match", "v[0-9]*"))
a, b, c = m.groups() if m else ("0", "0", "0")
text = (f'#define FILE_DESC "{desc}"\n#define FILE_NAME "{name}"\n'
        f"#define VER_A {a}\n#define VER_B {b}\n#define VER_C {c}\n#define VER_STR \"{full}\"\n")
try:
    if open(out).read() == text:
        sys.exit(0)                     # unchanged: ninja doesn't rebuild the resources
except OSError:
    pass
open(out, "w").write(text)
