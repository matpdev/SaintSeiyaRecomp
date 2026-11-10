# How the port works

A map of the port for someone who wants to read it, debug it or change it. Each source file starts with a
comment explaining its part in detail; this page says how the parts fit together. Portuguese:
[arquitetura.pt-BR.md](arquitetura.pt-BR.md). Debugging options and tools: [debugging.md](debugging.md).

## The idea in one paragraph

The PS2 game's executable (`SLES_541.62`, MIPS code for the PS2's main CPU, the EE) is **translated to C
once, at build time**, and compiled for the PC: that is a *static recompilation*. The translated code
still thinks it runs on a PS2: it reads and writes the PS2's memory and hardware registers. So the port
also provides what the PS2 had around the CPU: its operating system (the kernel), the second processor
(the IOP: disc, sound, memory card, controllers), the vector units (VU), and the graphics chip (the GS),
whose drawing is redone with Vulkan. Some of the game's functions are **replaced or hooked** by native C
code (`port/hle/`): the memory card, the disc, and the port's own features (widescreen, training, fonts).

## From the ISO to the program

```
your ISO ──tools/disc.py──► disc/SLES_541.62 (checked by its SHA-1)
                            │
                splat (config/sles_541.62.yaml) ──► asm/*.s (one function per glabel)
                            │
             tools/recomp/recomp.py ──► generated/recomp/rc_*.c + functab.c   (every function as C)
                            │
        sstheh --gen-vu ──► generated/vu/*.c   (the 189 VU1 microprograms as C, see port/gs/vu_jit.c)
                            │
                  gcc + port/**/*.c ──► build/sstheh
```

`build.sh` runs all of it (`configure.py` writes the ninja file). The game's data (models, textures,
sounds) is never extracted: the program reads the ISO (`disc/game.iso`) while it runs.

The translated C is kept in git (`generated/`): it is code only, the executable's data is loaded from the
player's own `SLES_541.62` when the game starts. So the port builds without a disc (the GitHub CI makes the
release packages that way, `tools/release.sh`); with one, `configure.py` makes `generated/` again whenever the
translator changes, and the change is committed like any other. The output is the same on every machine.

**Two releases, one executable.** The Japanese release (SLPS_257.44, 2007) goes through the same pipeline
(`config/jp/slps_257.44.yaml`, `config/jp/hle.txt`, into `generated-jp/` with its functions named
`JP_F_XXXXXXXX`). The disc picks: `main.c` loads the executable its `SYSTEM.CNF` boots, and
`game_select` (`port/hle/game.c`) recognises it by its content, points the CPU's dispatch (`cpu.c`) at that
release's translated code and fills `game_addr`, the column of `port/hle/game.h` the native code reads its
addresses from. The Japanese column was found with `tools/version_map.py`: 98% of the European functions are
in the Japanese executable, shifted; its variables come from the addresses the matching code builds. The SDK
and CRI libraries are identical; about 180 of the game's functions changed (the damage and the battle step
among them).

Every guest function becomes `void F_XXXXXXXX(Ctx *c)`. `Ctx` holds the EE's registers; `RW(n)` is
register n's low 32 bits, `SET32(n, v)` sets it, `F(n)` is a float register, `rd32(c, addr)` /
`wr32(c, addr, v)` read and write the PS2's memory (`port/runtime/r5900.h`). A call to an address
not known at translation time goes through `rt_call(c, address)`, which finds the function in
`functab.c`.

## Replacing and hooking the game's functions

`port/hle.txt` lists addresses with a native function:

```
0x00123930 hle_sceCdRead                   # replaced: the game's code at that address never runs
0x002F9140 hle_training_battle before      # hooked: runs on entry, then the game's own code
```

The recompiler reads this list. A native function sees the guest registers: arguments in `RW(4)`..
`RW(11)` (a0..a7) and `F(12)`.. for floats, the caller's return address in `RW(31)` (hooks use it to act
for one caller only), and it returns a result with `SET64(2, value)`.

`port/hle/hle.h` has the helpers these functions share (`game_call` to call the game's code from a
hook while keeping its registers, `rd_float` / `wr_float`), and **`port/hle/game.h` names every address
and structure offset of the game the native code uses**. Together with `port/hle.txt`, it is the list of
what must be found again for another build of the game (the Japanese release, a modded executable).

## Threads at run time

| Thread | What runs there | Where |
|---|---|---|
| `ee-N` | The game's own threads (the EE had several, one running at a time; here each is a host thread and a lock lets only one run) | `port/kernel/kernel.c` |
| `vblank` | A timer raising the vertical blank interrupt 60 times a second (50 in PAL); the game's interrupt handlers run at the next safe point of the running EE thread | `port/kernel/kernel.c` |
| `iop-*` | The IOP side: disc reads, sound (CRI ADX streams, the SPU2 and the game's sound driver running as it is), memory card, pads | `port/iop/` |
| `gs` | The graphics pipeline the EE feeds by DMA: VIF1 unpacking, VU1 programs (natively compiled), GIF, GS register writes. It records what to draw | `port/gs/dmac.c`, `vif.c`, `vu*.c`, `gs.c` |
| main (`sstheh`) | The window: input, and the Vulkan renderer drawing the recorded frames | `port/gs/display.c`, `gpu_vk.c` |
| `vu-compiler` | (development builds) compiles VU1 programs not built in | `port/gs/vu_jit.c` |

## A frame, from the game to the screen

1. **The game (EE)** computes the frame and builds DMA chains: geometry and VU1 programs for the VIF1,
   2D and textures for the GIF.
2. **DMAC** (`dmac.c`) hands the chains to the `gs` thread.
3. **VIF1 / VU1** (`vif.c`, `vu.c`, `vu_exec.c`, `vu_jit.c`): the VIF unpacks vertices into VU1 memory
   and starts VU1 programs, which transform and light them and send GS packets (XGKICK).
4. **GS** (`gs.c`): the GS packets set registers and draw primitives. Nothing is drawn here: each
   primitive is recorded into a `GpuFrame` (draws, vertices, texture uploads; `gpu.h`). Textures are
   decoded from the GS memory (4 MB, kept up to date with the game's uploads), with replacements
   (`texpack.c`: HD packs; `port/hle/textfont.c`: texts with a TTF font). Each draw is classified for
   widescreen (3D, 2D to keep 4:3, HUD...).
5. **The renderer** (`gpu_vk.c`, on the window's thread) replays the recorded frame with Vulkan at a
   higher resolution, moves the 2D for widescreen, and shows it; between two game frames it shows
   frames interpolated from them (`display.c`).

## Where to find things

| Folder | Contents |
|---|---|
| `port/main.c` | Command line, start-up |
| `port/runtime/` | Guest CPU helpers (`r5900.h`: registers, memory access, FPU rules), memory map and ELF loading, logging, crash reports, profiler, platform layer (Linux / Windows / macOS), `simd.h` (SSE on x86-64, sse2neon on arm64) |
| `port/kernel/` | The EE kernel: threads, semaphores, interrupts, alarms, syscalls |
| `port/iop/` | IOP services (SIF, RPC), pads, CRI ADX audio; `lle/`: the IOP modules that run as they are (MIPS I interpreter, SPU2) |
| `port/gs/` | DMAC, VIF, VU0/VU1, GS, Vulkan renderer, window, texture packs, recordings |
| `port/gs/shaders/` | GLSL shaders (compiled to SPIR-V at build time) |
| `port/hle/` | Native replacements and hooks: disc, memory card, video, frame pacing, widescreen, character select, training, Big Bang options, fonts. `game.h`: the game's addresses |
| `port/hle.txt` | Which game functions are replaced or hooked |
| `tools/recomp/` | The recompiler |
| `tools/setup/` | The release's installer (Qt) |
| `config/` | splat configuration and known symbol names |

## Adding a feature that touches the game

1. Find the game function (logs, `SSTHEH_RAM_DUMP`, `SSTHEH_WATCH`, the disassembly in `asm/`, a
   debugger on the recompiled code: see [debugging.md](debugging.md)).
2. Name its address and the offsets you use in `port/hle/game.h`.
3. Write the native function in `port/hle/` (include `hle.h`); say what the game's function does in a
   comment above it.
4. Add the address to `port/hle.txt` (`before` for a hook) and rebuild (`./build.sh`).
5. Check the game still reaches a fight, and compare pictures before and after (`--shot`).
