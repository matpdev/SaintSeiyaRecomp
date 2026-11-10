# Roadmap: from the executable to the game running on PC

Portuguese: [roadmap.pt-BR.md](roadmap.pt-BR.md).

Decided on 2026-10-13: **the hybrid path**. Every function not decompiled yet is translated automatically from
MIPS (R5900) to C by the recompiler. The result is linked with a platform layer that plays the part of the
PS2's hardware. The matching decomp goes on in parallel, and each decompiled function replaces the translated
one.

## Pieces

| Piece | What it does | Where |
|---|---|---|
| Recompiler | Reads the ELF and splat's function boundaries and writes C (one file per block of functions) | `tools/recomp/` |
| CPU runtime | 128-bit registers, the PS2's FPU (not IEEE), VU0 macro mode, memory (32 MB + scratchpad) | `port/runtime/` |
| Kernel HLE | PS2 kernel syscalls: threads, semaphores, interrupts (VBlank, DMA), alarms | `port/kernel/` |
| IOP HLE | SIF RPC to the IOP's services: files (cdvd/fileio), controller, memory card, CRI ADXI sound | `port/iop/`, `port/hle/` |
| IOP LLE | The game's sound driver (SSD/RSSD) run from the disc: MIPS I interpreter, IRX loader, SPU2 | `port/iop/lle/` |
| Graphics | DMA → VIF → GIF → GS; VU1 microcode translated to native code; Vulkan renderer | `port/gs/` (based on Tenkaichi3Decomp's `port/src/gs`, MIT) |
| Video | The opening (the only video: Sofdec MPEG-2) played with FFmpeg instead of Sofdec + the IPU | `port/hle/movie.c` |

## Milestones

1. **The recompiler writes C for every function, and the C compiles.**
2. **The game boots:** `crt0` → `main` run natively; syscalls logged up to the first block.
3. **Files:** `AFSDATA.AFS` and the disc's other files read through the IOP HLE.
4. **First picture:** the GS draws the title screen (no 3D).
5. **3D:** VU1; fights visible.
6. **Sound and controller.**
7. **Playable from start to end**; videos.
8. In parallel, forever: the matching decomp replacing translated code.

## Status

**Updated 2026-11-10:** milestones 1 to 6 done, and most of 7. The game runs natively from the title screen to 3D
fights, with music and voices (CRI ADXI), sound effects (the disc's own SSD/RSSD driver on an emulated IOP and
SPU2, with reverb), controller (PADMAN) and memory card (libmc2 on a folder). Vulkan renderer through SDL3 GPU,
VU1 programs translated to native code, 60 Hz with interpolated frames, 16:9 widescreen. The opening video plays
(FFmpeg, since 2026-11-01). The Japanese release (SLPS-25744) runs from the same executable
([versions.md](versions.md)). Left: full playthrough testing, macOS, and the decompilation itself.

### History

- Milestone 0 (setup): the build is identical to the original; 327 library functions named.
- Milestone 1: all 13,855 functions are translated to C (`tools/recomp/recomp.py`) and compile.
- Milestone 2: `build/sstheh` runs crt0, the SDK's start-up and `main`: the allocator, SIF/RPC with the IOP
  HLE, the IOP reboot (IOPRP280), CD/DVD (libcdvd replaced by ISO reads), the IOP modules, the DMAC and the
  first VIF/GIF packets.
- Milestone 4 (first picture), 2026-10-13: DMAC, VIF1, GIF and a software GS (adapted from
  Tenkaichi3Decomp); SDL3 window; `--shot N,M` saves screenshots in `build/`.
- Milestones 5 and 6, 2026-10-14: Vulkan renderer, VU1 JIT, PADMAN, CRI ADX music and voices, memory card.
- Sound effects, 2026-10-14: SSD.IRX and RSSD.IRX run as they are on an interpreted IOP, with native system
  modules and an emulated SPU2 (`port/iop/lle/`). IOP → EE calls wait for the EE's RPC_END before the next one.

Tools: `tools/recon/xref.py` (who uses a string, who calls a function), `port/hle.txt` (replace game
functions with native ones), `./build/sstheh -v` (detailed log).

## Goals

Where the project is going beyond the port itself. Status as of 2026-11-10; sizes are rough (S: a day, M: a few
days, L: a week or more). Details of each item are in the maintainer's working plan; the design decisions that
matter to contributors are written out here.

### Image

| Goal | Status |
|---|---|
| 16:9 widescreen with the HUD and menus in their 4:3 shapes | done |
| Texts drawn with a font file at 4x (`fonts/`) | done |
| Life bars at the screen edges in 16:9 (S) | planned |
| Character select strips out to the edges in 16:9 (S–M) | planned |
| Story illustrations and menus filled to 16:9 (M) | planned |
| HD texture pack, AI-upscaled from the player's own disc, never shipped (L) | in progress |

### Game options

| Goal | Status |
|---|---|
| Training mode (F5): idle opponent, infinite life, damage and inputs on screen | done |
| Second gamepad as player 2 | done |
| Japanese release (SLPS-25744) in the same executable | done |
| Auto-mash for the Ultimate power, an option to skip the story's resurrections (M) | in progress |
| "Training" entry in the main menu (M–L) | planned |

### Mods

The goal is mods that change the game as the community likes (a new character or stage, textures, a new menu or
game mode, new attacks and Big Bangs) **without recompiling the port**, and that a player installs by dropping a
folder or a `.zip` into `mods/`. One rule decides the design: **a mod sees the game and nothing else.** It can never
reach the player's files, network or processes, so a fake or malicious mod cannot harm the computer.

- **Resource packs (M):** files replacing or adding entries of `AFSDATA.AFS` by name, and memory patches (RAM only,
  per release). No code.
- **Code mods (L):** a WebAssembly module written in **Rust** or **C**, with no imports other than the game's API
  (symbols by name per release, RAM, registers, hooks by function, input, frame number, log, options). Limits on
  memory and instructions, a failing mod is switched off and the game goes on, permissions declared in `mod.toml`
  and shown before installing. Native `.so`/`.dll` plugins are refused; native code only exists for the project's own
  mods, built into the executable. Which WebAssembly engine to embed (wasmtime or WAMR) is decided by a prototype.
- **Data formats (L):** unpacking and packing the game's formats (`AFS`, `FJF`, `CMPS`, `TIM2`, move scripts),
  one at a time, as real mods need them. None is documented yet. A new character is the first test of all of it.
- **Loading:** mods are read at start-up and can be reloaded from the menu between scenes; replaced files show
  up the next time the game loads them.

### Multiplayer

| Step | What it needs | Size |
|---|---|---|
| Determinism | the same inputs give the same fight on two machines: a virtual clock for the vertical blank, the timers and the IOP, in place of the host's clock and the sound device | L |
| Online with input delay | UDP, inputs into the pad buffers, same-ISO and same-mods check, desync hash | L |
| Rollback | save and restore the whole state each frame (threads as fibers, ~170 static variables registered, dirty pages of the 32 MB RAM), re-simulate up to ~7 frames without drawing | L+ |

Measured so far: about 140 of 8192 RAM pages change per two frames in a fight; copying all 32 MB takes 2.3 ms.
Rollback comes only after a prototype shows that re-simulating 7 frames fits the frame time.

### Release and platforms

| Goal | Status |
|---|---|
| Prebuilt Linux (AppImage) and Windows packages with a setup that takes the player's ISO | done |
| Windows build tested on real machines (so far Wine only) | in progress |
| Android: a written assessment only (SSE to NEON, touch controls, file picking) | planned |

### In parallel

The matching decompilation: each decompiled function replaces its translated twin (327 library functions named so
far).
