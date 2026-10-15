# Roadmap: from the executable to the game running on PC

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
| Video | Sofdec/MPEG-2 through the IPU (cutscenes) | later |

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

**Updated 2026-10-15:** milestones 1 to 6 done. The game runs natively from the title screen to 3D fights,
with music and voices (CRI ADXI), sound effects (the disc's own SSD/RSSD driver on an emulated IOP and SPU2),
controller (PADMAN) and memory card (libmc2 on a folder). Vulkan renderer through SDL3 GPU, VU1 programs
translated to native code, 60 Hz with interpolated frames. Left: videos (milestone 7), SPU2 reverb, and full
playthrough testing.

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
