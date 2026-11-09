#!/bin/sh
# Inside the AppImage's build container (tools/appimage/Dockerfile), with the repository at /src (or in
# the current folder, as the GitHub release job runs it, already on Debian 13): compiles the port from
# generated/ and build/shaders, and the setup, and lays out the AppDir with the libraries the two need (not the system's core ones: glibc,
# the graphics drivers, X11/Wayland, the Vulkan loader). tools/release.sh linux runs it.
set -eu
cd "${SRC:-/src}"
B=build-rel
A=dist/AppDir
mkdir -p $B/obj

# ---- the port: build-rel.ninja
python3 - <<'PY'
import glob, os, subprocess
def pc(*a): return subprocess.run(["pkg-config", *a], capture_output=True, text=True, check=True).stdout.strip()
inc = "-Iport/runtime -Iport/kernel -Iport/iop -Iport/gs -Igenerated/recomp -Ibuild/shaders " + pc("--cflags", "sdl3")
flags = "-g -w -fno-strict-aliasing -ffp-contract=off -march=x86-64-v2"
ff = pc("--cflags", "libavformat", "libavcodec", "libavutil", "libswscale", "libswresample")
ft = pc("--cflags", "freetype2")
libs = pc("--libs", "sdl3", "libavformat", "libavcodec", "libavutil", "libswscale", "libswresample", "freetype2")
srcs = sorted(glob.glob("generated/recomp/rc_*.c")) + ["generated/recomp/functab.c"]
srcs += sorted(glob.glob("generated-jp/recomp/rc_*.c")) + ["generated-jp/recomp/functab.c"]
srcs += sorted(glob.glob("port/**/*.c", recursive=True)) + sorted(glob.glob("generated/vu/*.c"))
with open("build-rel.ninja", "w") as f:
    f.write(f"rule cc\n  command = gcc -c -O1 {flags} {inc} -MMD -MF $out.d $in -o $out\n  depfile = $out.d\n  deps = gcc\n")
    f.write(f"rule cc_fast\n  command = gcc -c -O2 {flags} {inc} $extra -MMD -MF $out.d $in -o $out\n  depfile = $out.d\n  deps = gcc\n")
    f.write(f"rule link\n  command = gcc $in -o $out -lm -lpthread -ldl {libs}\n")
    objs = []
    for s in srcs:
        o = "build-rel/obj/" + s.replace("/", "_")[:-2] + ".o"
        if s.startswith(("generated/recomp/", "generated-jp/recomp/")):
            f.write(f"build {o}: cc {s}\n")
        else:
            extra = "-DSSTHEH_FFMPEG " + ff if s == "port/hle/movie.c" else "-DSSTHEH_FREETYPE " + ft if s == "port/hle/textfont.c" else ""
            f.write(f"build {o}: cc_fast {s}\n  extra = {extra}\n")
        objs.append(o)
    f.write("build build-rel/sstheh: link " + " ".join(objs) + "\n")
PY
ninja -f build-rel.ninja --quiet
echo "port built"

# ---- the setup
cmake -S tools/setup -B $B/setup -G Ninja -DCMAKE_BUILD_TYPE=Release -DSETUP_VERSION="${SSTHEH_VERSION:-dev}" >/dev/null
cmake --build $B/setup >/dev/null
echo "setup built"

# ---- the AppDir
rm -rf $A
mkdir -p $A/usr/bin $A/usr/lib $A/usr/plugins $A/usr/bin/licenses
strip -o $A/usr/bin/sstheh $B/sstheh
strip -o $A/usr/bin/SaintSeiyaDecomp-setup $B/setup/SaintSeiyaDecomp-setup
QTP=$(pkg-config --variable=libdir Qt6Core 2>/dev/null || echo /usr/lib/x86_64-linux-gnu)/qt6/plugins
for d in platforms platformthemes platforminputcontexts wayland-shell-integration wayland-decoration-client \
         wayland-graphics-integration-client xcbglintegrations tls iconengines; do
    [ -d "$QTP/$d" ] && cp -r "$QTP/$d" $A/usr/plugins/
done
# the libraries the programs and the plugins need, but the system's own
skip='^(ld-linux|libc\.|libm\.|libdl\.|librt\.|libpthread\.|libresolv\.|libutil\.|libGL|libEGL|libGLX|libGLdispatch|libOpenGL|libdrm|libgbm|libvulkan|libX11|libX11-xcb|libxcb\.|libxcb-dri|libxcb-glx|libxcb-present|libxcb-sync|libxshmfence|libwayland-client|libwayland-server|libwayland-egl|libwayland-cursor|libasound|libpulse|libpipewire|libdbus|libsystemd|libudev|libfontconfig|libfreetype|libexpat|libz\.|libstdc\+\+|libgcc_s)'
need() { ldd "$1" 2>/dev/null | awk '/=> \//{print $3}'; }
{ need $B/sstheh; need $B/setup/SaintSeiyaDecomp-setup; find $A/usr/plugins -name '*.so' | while read p; do need "$p"; done; } |
    sort -u | while read lib; do
        base=$(basename "$lib")
        echo "$base" | grep -Eq "$skip" && continue
        cp -L "$lib" $A/usr/lib/
    done
# libfreetype and libstdc++ stay the system's (always there); the port's FreeType is the system's too
for f in $A/usr/bin/sstheh $A/usr/bin/SaintSeiyaDecomp-setup; do patchelf --set-rpath '$ORIGIN/../lib' "$f"; done
# each library and plugin finds the others there too (a RUNPATH doesn't carry over to what a library loads)
for f in $A/usr/lib/*.so*; do patchelf --set-rpath '$ORIGIN' "$f"; done
find $A/usr/plugins -name '*.so' -exec patchelf --set-rpath '$ORIGIN/../../lib' {} \;
cp LICENSE $A/usr/bin/licenses/SaintSeiyaDecomp-MIT.txt
cp licenses/*.txt $A/usr/bin/licenses/
cp tools/appimage/AppRun tools/appimage/saintseiyadecomp.desktop tools/appimage/saintseiyadecomp.png $A/
chmod +x $A/AppRun
mksquashfs $A dist/app.squashfs -root-owned -noappend -comp gzip -quiet
echo "AppDir: $(du -sh $A | cut -f1), squashfs: $(du -h dist/app.squashfs | cut -f1)"
