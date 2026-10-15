# Reconnaissance of the executable (2026-10-13)

Everything here was measured on `disc/SLES_541.62` (Europe, SHA-1 `7ba6b0a1…e79e6`). Where something is a
deduction, it says so.

## Format

- 32-bit ELF, R5900, `eabi64` flags, no symbols. The sections were merged: a single `PT_LOAD` at `0x100000`
  with 0x400080 bytes of file and 0x43C100 of memory.
- `crt0` at `0x100008`. It clears `.bss` from `0x500080` to `0x53C100`, sets `$gp = 0x507770`, calls `main`
  at `0x137510` (argc/argv from `0x500480`) and then `exit` at `0x1254E0`.

## Memory map

| Address | Contents | Compiler |
|---|---|---|
| `0x100000–0x104518` | crt0 + Metrowerks start-up | MW / asm |
| `0x104518–0x1374A0` | Sony libraries (IPU/MPEG, DMA, …) | ee-gcc |
| `0x1374A0–0x1376A0` | `main` | MW |
| `0x1376A0–0x138B20` | a small library (30 functions) | ee-gcc |
| `0x138B20–0x240BD0` | **game** | MW |
| `0x240BD0–0x29C790` | CRI (ADX, CVFS, Sofdec/MWSFD), Sony | ee-gcc |
| `0x29C790–0x3C6F80` | **game** + Metrowerks runtime | MW |
| `0x3C6F80–0x3D6500` | VU1 microcode: 62 VIF `MPG` packets | — |
| `0x3D6500–0x4BE700` | `.data`/`.rodata`; includes libkernl kernel routines (`0x3D6900–0x3D7F14`) | — |
| `0x4BE700–0x4C86B0` | C++ static initializers (44 functions) | MW |
| `0x4C86B0–0x500080` | `.data`, `.sdata` | — |
| `0x500080–0x53C100` | `.sbss`/`.bss` | — |

Telling the compilers apart: Metrowerks saves `s0`–`s7` with `sq` and aligns functions to 16 bytes; ee-gcc
uses `sd` and aligns to 8. `tools/recon/classify.py` applies this function by function.

splat finds 13,855 functions: game_a 5,588, game_b 3,943, cri 3,209, sdk_ipu 969, start 65, sinit 44,
sdk_b 30, main 7. The "game" regions still include the Metrowerks runtime (MSL, C++), not split out yet.

## Compiler

- `.comment` says `MW MIPS C Compiler (2.4.1.01)`. Only builds 2.4, 3.0, 3.0.1-020123 and 3.0.3 write that
  text, but **none of them reproduces the code**. Unverified guess: `.comment` came from the first object
  linked (crt0), not from the game's code.
- `tools/recon/probe/probe.cpp`: 8 functions rewritten by hand and built with the 21 builds at 7 optimization
  levels (`tools/recon/probe/probe.py`).
  - **3.0.1 b198, b205 and b210 with `-O3`, as C++:** 7 of 8 match byte for byte. Other builds match 4 or fewer.
  - The three winners produce the same code so far. `tools/fdiff.py` uses b210.
- Why C++ and `-O3`: built as C, the compiler makes tail calls where the game doesn't. `-O4` and `,p` unroll
  loops the game keeps.
- Vectors are copied with `lq`/`sq` through a 128-bit type (`mode(TI)`), not float by float.
- `0x17BE30` (a loop) doesn't match yet. It's the shape of the source, not the compiler.

## Libraries

- CRI: ADXT 9.38s281, ADXF 7.28, CVFS 2.38, MWSFD 3.33s281, SFD 1.946 (builds from Oct 2004 and Jan 2005,
  `GCC2096 SCE2810`).
- Sony SDK 2.8 (`PsIIlib*2800`): kernl, graph, dma, ipu, vu0, pad, mc2, cdvd, dbc.
- IOP modules on the disc (`MODULES/`): `CRI_ADXI.IRX`, `LIBSD`, `MCMAN`, `PADMAN`, `MTAPMAN`, `SIO2MAN`,
  `SSD`, `RSSD`, `IOPRP280.IMG`, …
