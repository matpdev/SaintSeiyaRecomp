#!/bin/sh
# Install the toolchain into tools/ and the Python packages into .venv/.
#   - wibo (runs the Windows compiler on Linux)
#   - Metrowerks CodeWarrior PS2 compilers, from the decomp.me archive (proprietary: use only if entitled)
#   - ee-gcc 2.96 (reference for the Sony SDK / CRI code)
#   - GNU binutils for mips64r5900el-ps2-elf, built from source
set -eu
cd "$(dirname "$0")/.."
ROOT=$PWD

python3 -m venv .venv
.venv/bin/pip install -q 'splat64[mips]' spimdisasm rabbitizer ninja-syntax pyyaml pyelftools

if [ ! -x tools/wibo ]; then
    curl -sL -o tools/wibo https://github.com/decompals/wibo/releases/download/1.2.0/wibo-x86_64
    chmod +x tools/wibo
fi

mkdir -p tools/dl tools/compilers
for c in mwcps2-3.0.1b198-051011 mwcps2-3.0.1b205-051227 mwcps2-3.0.1b210-060308 ee-gcc2.96; do
    [ -d "tools/compilers/$c" ] && continue
    case $c in ee-gcc*) f=$c.tar.xz ;; *) f=$c.tar.gz ;; esac
    curl -sL -o "tools/dl/$f" "https://github.com/decompme/compilers/releases/download/compilers/$f"
    mkdir -p "tools/compilers/$c" && tar -xf "tools/dl/$f" -C "tools/compilers/$c"
done

if [ ! -x tools/binutils/bin/mips64r5900el-ps2-elf-as ]; then
    mkdir -p tools/build-binutils && cd tools/build-binutils
    curl -sLO https://ftp.gnu.org/gnu/binutils/binutils-2.43.1.tar.xz
    tar -xf binutils-2.43.1.tar.xz && mkdir -p obj && cd obj
    # binutils 2.43 does not build as C23 (the default of GCC 15+)
    CFLAGS="-O2 -std=gnu17" ../binutils-2.43.1/configure --target=mips64r5900el-ps2-elf \
        --prefix="$ROOT/tools/binutils" --disable-nls --disable-werror --disable-gdb --disable-sim --disable-gprofng
    make -j"$(nproc)" && make install
    cd "$ROOT" && rm -rf tools/build-binutils
fi

echo "Toolchain ready. Next: copy SLES_541.62 into disc/, then: .venv/bin/python configure.py && ninja"
