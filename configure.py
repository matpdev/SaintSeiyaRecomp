#!/usr/bin/env python3
"""Split the executable with splat (unless --no-split) and write build.ninja.

    python3 configure.py && ninja

`ninja` assembles every file, links them with splat's linker script and checks that the
result is byte-identical to disc/SLES_541.62.
"""
import argparse
import glob
import os
import subprocess
import sys

import ninja_syntax

ROOT = os.path.dirname(os.path.abspath(__file__))
BINUTILS = "tools/binutils/bin/mips64r5900el-ps2-elf-"
YAML = "config/sles_541.62.yaml"
TARGET = "disc/SLES_541.62"
OUT = "build/SLES_541.62"

RC_FILES = 35          # number of rc_NNN.c files tools/recomp/recomp.py writes (13855 functions / 400)
AS_FLAGS = "-EL -march=r5900 -mabi=eabi -G0 -no-pad-sections -Iinclude"


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--no-split", action="store_true", help="reuse the existing asm/ and linker script")
    args = ap.parse_args()
    os.chdir(ROOT)

    if not os.path.exists(TARGET):
        sys.exit(f"{TARGET} is missing: copy SLES_541.62 from your own disc (see disc/README.md)")
    if not args.no_split:
        subprocess.run([sys.executable, "-m", "splat", "split", YAML], check=True)

    sources = sorted(glob.glob("asm/**/*.s", recursive=True))
    bins = sorted(b for b in glob.glob("assets/**/*.bin", recursive=True) if not b.endswith(".databin.bin"))

    with open("build.ninja", "w") as f:
        n = ninja_syntax.Writer(f, width=120)
        n.variable("ninja_required_version", "1.10")
        n.rule("as", f"{BINUTILS}as {AS_FLAGS} $in -o $out", description="as $in")
        incbin = r'printf ".section .data\n.incbin \"$in\"\n"'
        n.rule("bin", f"{incbin} | {BINUTILS}as {AS_FLAGS} -o $out -", description="bin $in")
        n.rule("ld", f"{BINUTILS}ld -EL -m elf32lr5900 --no-warn-mismatch -T {OUT}.ld -T config/undefined_funcs_auto.txt "
                     f"-T config/undefined_syms_auto.txt --no-check-sections -Map {OUT}.map -o $out",
               description="ld $out")
        n.rule("objcopy", f"{BINUTILS}objcopy -O binary $in $out", description="objcopy $out")
        n.rule("check", f"cmp $in {TARGET} && sha1sum -c config/SLES_541.62.sha1 --quiet "
                        f"&& echo 'OK: build matches the original' && touch $out", description="check")

        objs = []
        for s in sources:
            o = f"build/{s}.o"
            n.build(o, "as", s, implicit=["include/macro.inc"])
            objs.append(o)
        for b in bins:
            o = f"build/{b}.o"
            n.build(o, "bin", b)
            objs.append(o)

        n.build(f"{OUT}.elf", "ld", objs, implicit=[f"{OUT}.ld"])
        n.build(f"{OUT}.rom", "objcopy", f"{OUT}.elf")
        n.build(f"{OUT}.ok", "check", f"{OUT}.rom")
        n.default(f"{OUT}.ok")

        # ---- native port: recompiled code + runtime (see docs/roadmap.md)
        code = [s for s in sources if not s.startswith("asm/data/")]
        n.rule("recomp", f"{sys.executable} -I tools/recomp/recomp.py {TARGET} build/recomp $in",
               description="recomp", restat=True)
        n.rule("cc", "gcc -c -O1 -g -w -fno-strict-aliasing -Iport/runtime -Iport/kernel -Iport/iop -Iport/gs -Ibuild/recomp "
                     "-MMD -MF $out.d $in -o $out", depfile="$out.d", deps="gcc", description="cc $in")
        n.rule("link", "gcc -rdynamic $in -o $out -lm -lpthread -lSDL3 -ldl", description="link $out")
        rc_files = [f"build/recomp/rc_{k:03d}.c" for k in range(RC_FILES)] + ["build/recomp/functab.c"]
        n.build(rc_files, "recomp", code, implicit=["tools/recomp/recomp.py", "port/hle.txt"])
        port_srcs = sorted(glob.glob("port/**/*.c", recursive=True))
        port_objs = []
        for src in rc_files + port_srcs:
            o = "build/port/" + src.replace("/", "_")[:-2] + ".o"
            n.build(o, "cc", src, order_only=rc_files)
            port_objs.append(o)
        n.build("build/sstheh", "link", port_objs)
        n.build("port", "phony", "build/sstheh")
    print(f"build.ninja written: {len(sources)} asm files, {len(bins)} binary files")


main()
