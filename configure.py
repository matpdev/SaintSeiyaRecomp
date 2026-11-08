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
    ap.add_argument("--march", default="x86-64-v2",
                    help="CPU the port is built for (default x86-64-v2: SSE4.2, any x86-64 PC of the last ~12 years; "
                         "native: this one only)")
    ap.add_argument("--windows", action="store_true",
                    help="also write build-win.ninja: the port for Windows with MinGW-w64 (ninja -f build-win.ninja; "
                         "needs the Linux build first, and tools/win/ from tools/win_deps.sh)")
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
        inc = "-Iport/runtime -Iport/kernel -Iport/iop -Iport/gs -Ibuild/recomp -Ibuild/shaders"
        # the translated code builds fast at -O1, without warnings (it is generated); the runtime and the
        # renderer get -O2 and the compiler's warnings (unused parameters aside: hooks take Ctx *c as given)
        warn = "-Wall -Wextra -Wno-unused-parameter"
        n.variable("opt", "-O1")
        n.rule("cc", f"gcc -c $opt -g -w -fno-strict-aliasing -ffp-contract=off -march={args.march} {inc} -MMD -MF $out.d $in -o $out",
               depfile="$out.d", deps="gcc", description="cc $in")
        n.rule("cc_fast", f"gcc -c -O2 -g {warn} -fno-strict-aliasing -ffp-contract=off -march={args.march} {inc} -MMD -MF $out.d $in -o $out",
               depfile="$out.d", deps="gcc", description="cc $in")
        # FFmpeg plays the opening video (port/hle/movie.c); without it the video is skipped
        def pkg(*args):
            try:
                return subprocess.run(["pkg-config", *args, "libavformat", "libavcodec", "libavutil", "libswscale", "libswresample"],
                                      capture_output=True, text=True, check=True).stdout.strip()
            except (OSError, subprocess.CalledProcessError):
                return None
        ff_libs = pkg("--libs")
        ff_cflags = "-DSSTHEH_FFMPEG " + pkg("--cflags") if ff_libs is not None else ""
        if ff_libs is None:
            print("FFmpeg (libavformat, libavcodec, libavutil, libswscale, libswresample) not found: the opening video is skipped")
        n.rule("cc_ffmpeg", f"gcc -c -O2 -g {warn} -fno-strict-aliasing -ffp-contract=off -march={args.march} {inc} {ff_cflags} -MMD -MF $out.d $in -o $out",
               depfile="$out.d", deps="gcc", description="cc $in")
        # FreeType draws the game's texts with a font file (port/hle/textfont.c); without it they stay as on the disc
        def ft(arg):
            try:
                return subprocess.run(["pkg-config", arg, "freetype2"], capture_output=True, text=True, check=True).stdout.strip()
            except (OSError, subprocess.CalledProcessError):
                return None
        ft_libs = ft("--libs")
        ft_cflags = "-DSSTHEH_FREETYPE " + ft("--cflags") if ft_libs is not None else ""
        if ft_libs is None:
            print("FreeType (freetype2) not found: the game's texts keep the disc's font")
        n.rule("cc_freetype", f"gcc -c -O2 -g {warn} -fno-strict-aliasing -ffp-contract=off -march={args.march} {inc} {ft_cflags} -MMD -MF $out.d $in -o $out",
               depfile="$out.d", deps="gcc", description="cc $in")
        n.rule("link", f"gcc -rdynamic $in -o $out -lm -lpthread -lSDL3 -ldl {ff_libs or ''} {ft_libs or ''}", description="link $out")
        rc_files = [f"build/recomp/rc_{k:03d}.c" for k in range(RC_FILES)] + ["build/recomp/functab.c"]
        n.build(rc_files, "recomp", code, implicit=["tools/recomp/recomp.py", "port/hle.txt"])
        port_srcs = sorted(glob.glob("port/**/*.c", recursive=True))
        port_objs = []
        for src in rc_files + port_srcs:
            o = "build/port/" + src.replace("/", "_")[:-2] + ".o"
            rule = ("cc" if src.startswith("build/recomp/") else "cc_ffmpeg" if src == "port/hle/movie.c"
                    else "cc_freetype" if src == "port/hle/textfont.c" else "cc_fast")
            n.build(o, rule, src,
                    order_only=rc_files + ["build/shaders/shaders.h"])
            port_objs.append(o)
        # shaders: GLSL -> SPIR-V -> a header of byte arrays
        n.rule("glslc", "glslc -O $in -o $out", description="glslc $in")
        n.rule("spvhdr", f"{sys.executable} -I tools/spv2h.py $out $in", description="shaders.h")
        spvs = []
        for sh in sorted(glob.glob("port/gs/shaders/*.vert") + glob.glob("port/gs/shaders/*.frag")):
            out = "build/shaders/" + os.path.basename(sh) + ".spv"
            n.build(out, "glslc", sh)
            spvs.append(out)
        n.build("build/shaders/shaders.h", "spvhdr", spvs, implicit=["tools/spv2h.py"])
        # the game's VU1 programs built in (port/gs/vu_jit.c): a first executable writes them as C from
        # the game's executable, the second has them linked in (no compiler needed to play)
        n.build("build/sstheh-stage1", "link", port_objs)
        n.rule("gen_vu", "build/sstheh-stage1 -q --gen-vu build/vu > /dev/null", description="VU1 programs as C")
        vu_c = [f"build/vu/vu_{k:02d}.c" for k in range(16)] + ["build/vu/vu_builtin.c"]
        n.build(vu_c, "gen_vu", implicit=["build/sstheh-stage1", "disc/SLES_541.62"])
        vu_objs = []
        for src in vu_c:
            o = "build/port/" + src.replace("/", "_")[:-2] + ".o"
            n.build(o, "cc", src, variables={"opt": "-O2"})      # generated: no warnings
            vu_objs.append(o)
        n.build("build/sstheh", "link", port_objs + vu_objs)
        n.build("port", "phony", "build/sstheh")
    print(f"build.ninja written: {len(sources)} asm files, {len(bins)} binary files")
    if args.windows:
        windows(args)


def windows(args):
    """build-win.ninja: build-win/sstheh.exe with MinGW-w64, from the C the Linux build generated (build/recomp,
    build/vu, build/shaders) and port/; SDL3 and FFmpeg from tools/win/ (DLLs copied next to the exe)."""
    sdl = glob.glob("tools/win/SDL3-*/x86_64-w64-mingw32")
    ff = glob.glob("tools/win/ffmpeg-*-win64-lgpl-shared-*")
    ft = "tools/win/freetype"
    if not sdl:
        sys.exit("tools/win/SDL3-*: run tools/win_deps.sh first")
    sdl = sdl[0]
    ff = ff[0] if ff else None
    has_ft = os.path.exists(f"{ft}/lib/libfreetype.a")
    inc = (f"-Iport/runtime -Iport/kernel -Iport/iop -Iport/gs -Ibuild/recomp -Ibuild/shaders -I{sdl}/include"
           + (f" -I{ff}/include" if ff else "") + (f" -I{ft}/include/freetype2" if has_ft else ""))
    cc = "x86_64-w64-mingw32-gcc"
    flags = f"-g -w -fno-strict-aliasing -ffp-contract=off -march={args.march} -D_FILE_OFFSET_BITS=64"   # off_t: 64 bits (the 4 GB image)
    with open("build-win.ninja", "w") as f:
        n = ninja_syntax.Writer(f, width=120)
        n.variable("ninja_required_version", "1.10")
        n.rule("cc", f"{cc} -c -O1 {flags} {inc} -MMD -MF $out.d $in -o $out", depfile="$out.d", deps="gcc", description="cc $in")
        n.rule("cc_fast", f"{cc} -c -O2 {flags} {inc} $extra -MMD -MF $out.d $in -o $out", depfile="$out.d", deps="gcc",
               description="cc $in")
        libs = f"-L{sdl}/lib -lSDL3"
        if ff:
            libs += " " + " ".join(f"{ff}/bin/{os.path.basename(d)}" for d in sorted(glob.glob(f"{ff}/bin/*.dll"))
                                  if not os.path.basename(d).startswith(("avdevice", "avfilter")))
        if has_ft:
            libs += f" {ft}/lib/libfreetype.a"
        n.rule("link", f"{cc} -mwindows -static-libgcc $in -o $out {libs} -Wl,-Bstatic -lwinpthread -Wl,-Bdynamic -lm",
               description="link $out")
        n.rule("copy", "cp $in $out", description="copy $out")
        objs = []
        srcs = sorted(glob.glob("build/recomp/rc_*.c")) + ["build/recomp/functab.c"]
        srcs += sorted(glob.glob("port/**/*.c", recursive=True)) + sorted(glob.glob("build/vu/*.c"))
        for src in srcs:
            o = "build-win/obj/" + src.replace("/", "_")[:-2] + ".o"
            extra = ""
            if src == "port/hle/movie.c" and ff:
                extra = "-DSSTHEH_FFMPEG"
            if src == "port/hle/textfont.c" and has_ft:
                extra = "-DSSTHEH_FREETYPE"
            if src.startswith("build/recomp/"):
                n.build(o, "cc", src)
            else:
                n.build(o, "cc_fast", src, variables={"extra": extra})
            objs.append(o)
        n.build("build-win/sstheh.exe", "link", objs)
        dlls = [f"{sdl}/bin/SDL3.dll"]
        if ff:
            dlls += [d for d in sorted(glob.glob(f"{ff}/bin/*.dll")) if not os.path.basename(d).startswith(("avdevice", "avfilter"))]
        outs = []
        for d in dlls:
            out = "build-win/" + os.path.basename(d)
            n.build(out, "copy", d)
            outs.append(out)
        n.build("all", "phony", ["build-win/sstheh.exe"] + outs)
        n.default("all")
    print("build-win.ninja written" + ("" if has_ft else " (no FreeType for Windows in tools/win/freetype: the texts keep the disc's font)")
          + ("" if ff else " (no FFmpeg for Windows: the opening video is skipped)"))


main()
