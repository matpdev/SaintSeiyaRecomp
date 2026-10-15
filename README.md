# Saint Seiya: The Hades — native port and decompilation

**English** · [Português](README.pt-BR.md)

A native PC (Linux) port of **Saint Seiya: The Hades** (PS2, Europe, SLES-54162), made by static
recompilation, with a matching decompilation moving forward alongside it. Modelled on
[Tenkaichi3Decomp](https://github.com/z3xox/Tenkaichi3Decomp).

This repository contains nothing from the game. You need your own copy of the disc.

## Status

The game **runs natively**: title screen, menus, story mode and fights, with music, voices, sound effects,
controller and memory card.

| Part | Status |
|---|---|
| Matching build | `SLES_541.62` rebuilt **byte for byte** from the assembly splat generates |
| Recompiler | all 13,855 functions of the executable translated from MIPS R5900 to C (`tools/recomp/`) |
| CPU / kernel | 128-bit registers, the PS2's FPU, VU0 macro mode; threads, semaphores, interrupts, timers |
| IOP | SIF/RPC, disc reads from the ISO, controller (PADMAN), CRI ADXI (sound); the game's sound driver (SSD/RSSD) runs as it is, on an IOP MIPS interpreter with an emulated SPU2; memory card (libmc2) on a folder |
| Graphics | DMAC → VIF → GIF → GS on its own thread; Vulkan renderer (SDL3 GPU) and a software GS; VU1 programs translated to native code |
| Image | internal resolution from the screen's, supersampling, anisotropic filtering |
| Frame rate | 60 Hz (the game's own NTSC mode, keeping the European region); frames interpolated between the game's, unlimited (or vsync, F4) |
| Sound | music and voices (CRI ADX) and **sound effects** (hits, footsteps, menus: the disc's SSD/RSSD driver, interpreted, playing on an emulated SPU2) |
| Decompilation | compiler identified (Metrowerks CodeWarrior PS2 3.0.1, `-O3`, C++), 327 library functions named; no game function decompiled yet |
| Memory card | slot 1 is a folder (`~/.local/share/sstheh/memcard1`): the game saves and loads normally |
| Missing | SPU2 reverb (the game mostly leaves it off), videos (Sofdec/MPEG-2 through the IPU), full playthrough testing, Windows/macOS |

Details in [`docs/roadmap.md`](docs/roadmap.md) and [`docs/recon.md`](docs/recon.md).

## Playing (the port only)

You need **your own copy** of the game: Saint Seiya: The Hades, **European release (SLES-54162)**. Nothing from
the game is in this repository. The Brazilian fan translation is a different build (SjCRUNCH-compressed) and
does not work.

### 1. Requirements (Linux x86-64)

- GCC, Python 3, `glslc` (the `shaderc` package), SDL3 (3.2 or newer) and a Vulkan driver
  - Arch: `sudo pacman -S gcc python shaderc sdl3 vulkan-icd-loader` (plus your GPU's driver)
  - Debian/Ubuntu: `sudo apt install gcc python3-venv glslc libsdl3-dev libvulkan1`
- GCC is also used **while the game runs**: VU1 programs are compiled to native code the first time they
  appear and cached in `~/.cache/sstheh/vu` (the first seconds of each new effect may stutter)

### 2. Build and play

Make an ISO image of your disc (for instance with `dd if=/dev/sr0 of=game.iso`, or any tool you like), then:

```sh
git clone https://github.com/matpdev/SaintSeiyaRecomp.git && cd SaintSeiyaRecomp
./compilar.sh /path/to/game.iso   # build; with no argument, a window opens to pick the ISO
./jogar.sh                        # play (rebuilds by itself when the code changed)
./jogar.sh --atalho               # optional: an icon in the applications menu
```

`compilar.sh` ("build") checks the dependencies (and prints the command to install what is missing), verifies
the ISO by the executable's SHA-1, prepares `disc/`, creates the Python environment in `.venv` and builds
`build/sstheh`. The first build takes a few minutes. `./compilar.sh --limpar` rebuilds from scratch.
`jogar.sh` ("play") runs the game.

<details><summary>Manual steps (what the scripts do)</summary>

```sh
cp /path/to/game.iso disc/game.iso               # or: ln -s /path/to/game.iso disc/game.iso
7z e disc/game.iso SLES_541.62 -odisc/           # or: bsdtar -xf disc/game.iso -C disc SLES_541.62
sha1sum disc/SLES_541.62                         # must be 7ba6b0a1c05a94f28452840fcb73c204e46e79e6
python3 -m venv .venv
.venv/bin/pip install 'splat64[mips]' spimdisasm rabbitizer ninja-syntax pyyaml pyelftools ninja
.venv/bin/python configure.py                    # runs splat and writes build.ninja
PATH=$PWD/.venv/bin:$PATH ninja port             # builds build/sstheh
./build/sstheh                                   # run it from the repository folder
```

</details>

On the first run the game asks for the language and warns that there is no save on the memory card. To save:
Options → Save/Load (answer "Yes" to create the save). The memory card in slot 1 is the folder
`~/.local/share/sstheh/memcard1`: the save goes to `BESLES-54162GX/` and is loaded by itself when the game starts.

### Controls

| Key | PS2 button |
|---|---|
| Arrows | D-pad |
| Z / X / A / S | ✕ / ○ / □ / △ |
| Q / W / E / R | L1 / R1 / L2 / R2 |
| Enter / Backspace | Start / Select |
| F3 | performance panel (logic and display fps, CPU use) |
| F4 | toggles vsync |

Gamepads are picked up when they are connected.

### Options

`--iso <file>` (default `disc/game.iso`), `-q` / `-v` / `-vv` (log), `--shot N,M` (saves screenshots at those
vertical blanks, no window). Environment variables:

| Variable | Effect |
|---|---|
| `SSTHEH_VSYNC=1` | start with vsync (default: no fps limit) |
| `SSTHEH_SCALE=n` | fixed render scale (1 to 8; default: from the screen resolution, up to 4) |
| `SSTHEH_INTERP=0` | no interpolated frames (only the game's own) |
| `SSTHEH_50HZ=1` | original PAL mode (50 Hz) |
| `SSTHEH_30FPS_SCENES=1` | menus and 2D screens at 30 fps, as on the disc |
| `SSTHEH_PAD2=1` | second controller (two-player modes) |
| `SSTHEH_UNLOCK_ALL=1` | cheat: unlocks everything (modes, characters, stages, extras); kept in the save once saved |
| `SSTHEH_MEMCARD=folder` | where the memory card lives (default `~/.local/share/sstheh/memcard1`) |
| `SSTHEH_AUDIO=0` | no sound |
| `SSTHEH_RSSD_HLE=1` | don't run the sound effects driver (music and voices only, as before) |
| `SSTHEH_AUDIO_DUMP=a.wav`, `SSTHEH_SPU_DUMP=b.raw` | record the sound (the mix as WAV; the SPU2 alone as 16-bit stereo 48 kHz PCM) |
| `SSTHEH_GS=sw` | software GS instead of Vulkan (slow) |
| `SSTHEH_VUJIT=0`, `SSTHEH_GSTHREAD=0`, `SSTHEH_UPLOAD_DEDUP=0` | turn optimizations off (to compare when something looks wrong) |
| `SSTHEH_PERF_LOG=1` | print what the F3 panel shows to the terminal |

### Known issues

- videos don't play
- the first use of each visual effect may stutter while its VU1 code compiles
- if something breaks, run with `-v` and attach the log to the report, with what you were doing at the time

## Decompilation (matching build)

To work on the decompilation, install the full toolchain (Metrowerks compilers, ee-gcc 2.96 and R5900
binutils):

```sh
tools/setup.sh                       # wibo, compilers, R5900 binutils, Python venv
.venv/bin/python configure.py
PATH=$PWD/.venv/bin:$PATH ninja      # matching build: "OK: build matches the original"
```

ee-gcc 2.96 is an i386 binary: 32-bit program support is needed.

## Layout

| Path | |
|---|---|
| `config/sles_541.62.yaml` | splat configuration (segments, `$gp`) |
| `config/symbol_addrs.txt` | known names (`name = 0xADDRESS; // type:func`) |
| `asm/`, `assets/` | generated by splat (ignored by git) |
| `src/`, `include/` | decompiled code (C++) |
| `tools/recomp/` | static MIPS → C recompiler |
| `port/runtime/`, `port/kernel/` | CPU, memory, timers, kernel syscalls |
| `port/iop/`, `port/hle/` | IOP services and SDK functions replaced by native ones (listed in `port/hle.txt`) |
| `port/iop/lle/` | IOP modules running as they are: MIPS I interpreter, IRX loader, native system modules, SPU2 |
| `port/gs/` | DMA, VIF, VU, GS and the Vulkan renderer |
| `compilar.sh`, `jogar.sh`, `tools/disc.py` | build from your ISO, play; disc check |
| `tools/fdiff.py` | compiles a `.cpp` and compares each function with the original |
| `tools/recon/` | reconnaissance scripts (compiler classification, cross references) |

## Contributing

See [`CONTRIBUTING.md`](CONTRIBUTING.md). You can help by decompiling functions, improving the port, or just
playing and reporting what breaks.

## Licenses

Parts of the renderer come from Tenkaichi3Decomp (MIT, in `licenses/`). The Metrowerks compilers are
proprietary software archived by decomp.me; use them only if you are entitled to.
