# Debugging the port

Tools and options to find out what the game and the port are doing. Portuguese:
[depuracao.pt-BR.md](depuracao.pt-BR.md). How the parts fit together: [architecture.md](architecture.md).

Options are environment variables, set before the command:

```sh
SSTHEH_AUDIO=0 SSTHEH_FRAME_LOG=frames.csv ./build/sstheh -v
```

## First steps when something is wrong

- **Run with `-v`** (or `-vv`) and keep the terminal output: every part logs what it does (`[mc]` memory
  card, `[gpu]` renderer, `[font]` texts...), with the vertical blank count (60 a second) in the brackets.
- **A crash** prints a report: the guest function and address, the registers, the guest call stack. The
  names come from `config/symbol_addrs.txt`; unknown functions are `func_XXXXXXXX`, findable in `asm/`.
- **Turn the port's own features off one by one** to see which one causes it: `SSTHEH_WIDESCREEN=0`,
  `SSTHEH_FONT=0`, `SSTHEH_TEXTURES=0`, `SSTHEH_WIDE_HUD=0`, `SSTHEH_WIDE_SELECT=0`, `SSTHEH_INTERP=0`;
  then the optimizations: `SSTHEH_VUJIT=0`, `SSTHEH_GSTHREAD=0`, `SSTHEH_UPLOAD_DEDUP=0`; and the
  renderer: `SSTHEH_GS=sw` (the software GS, slow but drawing as the PS2 does).
- **F3** shows the performance panel (fps, CPU and GPU load); `SSTHEH_PERF_LOG=1` prints it every second.

## Getting to a moment without playing

`--press` plays buttons at given vertical blanks, `--shot` saves pictures and runs without a window:

```sh
./build/sstheh -q --press "1100:CROSS,1300:CROSS,2700:START,3000:DOWN,3200:CROSS" --shot 3100,3600
```

- Buttons: `UP DOWN LEFT RIGHT CROSS CIRCLE SQUARE TRIANGLE L1 R1 L2 R2 START SELECT`; `at:BUTTON:frames`
  holds it longer (6 by default). Pressing several at the same vertical blank presses them together.
- Pictures go to `build/shot_N.ppm` (relative to where you run it): the PS2 frame (512x448), or as a window
  that size would show it with `SSTHEH_SHOT_PRESENT=1920x1080`.
- Runs are not fully repeatable once a fight starts (the computer's choices vary), but menus are:
  pictures of the same menu taken before and after a change must be byte-identical (`cmp`). During a
  transition (something sliding in), the picture may fall on a different frame.
- Use a copy of your memory card (`SSTHEH_MEMCARD=folder`) and `SSTHEH_UNLOCK_ALL=1`, so tests never touch
  your saves. `SSTHEH_AUDIO=0` runs them silently.

## Looking into the game's memory

| Option | What it gives |
|---|---|
| `SSTHEH_RAM_DUMP=1` | with `--shot`: the EE's 32 MB at that moment, `build/ram_N.bin` (find a value, then compare dumps) |
| `SSTHEH_VRAM=1` | with `--shot`: the GS's 4 MB of memory as a picture, `build/vram_N.ppm`, and the display registers |
| `SSTHEH_WATCH=addr,from[,off]` | logs the 32-bit word at `addr` (hex) every vertical blank from `from` on; with `off`, the word at `*addr + off` (a field of an object the variable points to) |
| `SSTHEH_POISON_FREE=1` | fills every block the game frees, so a use after free crashes at once; the crash report says who freed the block |
| `--trace` + `SSTHEH_TRACE_COUNT=from,to` | how many times each guest function was called between two vertical blanks, most called first |

## Timing and performance

| Option | What it gives |
|---|---|
| `SSTHEH_FRAME_LOG=file.csv` | a line per game frame: total ms, VU1 ms (and interpreted), GS ms, VU1 programs compiled, GPU pipelines made |
| `SSTHEH_PERF_LOG=1` | the F3 panel printed every second |
| `SSTHEH_GPU_STATS=1` | every 50 frames: draws, vertices, texture uploads, render-target copies, live textures |
| `SSTHEH_PROF=1` (or `=N`) | the built-in sampling profiler (from vertical blank N), report at exit; `SSTHEH_PROF_IN=function`: the hottest spots inside one function |
| `perf record -g ./build/sstheh` | Linux `perf` works too; threads are named (`gs`, `ee-N`, `iop-*`, `vblank`), so `perf report --sort comm,sym` splits the work by thread |
| `SSTHEH_SCALE=n` | a fixed internal resolution (1 to 8 times the PS2's) to see whether the GPU is the limit |

## Graphics

| Option | What it gives |
|---|---|
| `SSTHEH_GS=sw` | the software GS renderer instead of Vulkan |
| `SSTHEH_GPU_DEBUG=n` | renderer switches: 1 no depth test, 2 no blending (bits, can be combined); also logs a frame every 100 |
| `SSTHEH_GPU_RED=1` | new render targets start red instead of black (shows what was never drawn) |
| `SSTHEH_SHOT_FULL=1` | `--shot` saves the whole internal-resolution frame |
| `SSTHEH_PRIMS=N` | from vertical blank N, prints the first GS primitives' packets |
| `SSTHEH_TEX_DUMP=1` | saves every texture the game uses as PNG (`~/.local/share/sstheh/textures/dump/`) |
| `SSTHEH_FONT_DEBUG=1` | logs every glyph the game writes and every text drawn with the font (and how long it took) |
| `SSTHEH_GSREC=file` | records the `gs` thread's work (`SSTHEH_GSREC_FROM`, default 9000; `SSTHEH_GSREC_FRAMES`, 150); `build/sstheh --gs-replay file` replays it without the game: time per frame and a hash of everything drawn |
| `SSTHEH_REPLAY_SHOTS=folder` | with `--gs-replay`: the frames are also drawn by the Vulkan renderer and saved (`frame_N.ppm`, every `SSTHEH_REPLAY_EVERY`-th, 10; `SSTHEH_SHOT_PRESENT=WxH` as a window shows them). The same recording replayed by two builds must give identical pictures: the way to check a renderer change on a fight, which never plays the same twice |

## VU1 (the vector unit drawing the 3D)

| Option | What it gives |
|---|---|
| `SSTHEH_VUJIT=0` | runs the VU1 programs in the interpreter instead of the compiled ones (to tell a translation bug from anything else) |
| `SSTHEH_VUJIT_MISS=1` | logs a VU1 program start that has no compiled program |
| `SSTHEH_VUREC=file` | records 20 vertical blanks of VU1 programs (`SSTHEH_VUREC_FROM`, default 8000) for `tools/vubench.c`, which checks the compiled programs against the interpreter and times them |
| `SSTHEH_VUDUMP=1`, `SSTHEH_VUSNAP=1` | saves the VU1 code memory (`build/vu1_code.bin`); counts the different code memories seen |

## Sound

| Option | What it gives |
|---|---|
| `SSTHEH_AUDIO=0` | no sound device (the streams are still consumed in real time) |
| `SSTHEH_AUDIO_DUMP=a.wav` | records the final mix |
| `SSTHEH_SPU_DUMP=b.raw` | records the SPU2 alone (16-bit stereo, 48 kHz) |
| `SSTHEH_RSSD_HLE=1` | don't run the game's sound effects driver |
| `SSTHEH_RSSD_DUMP=folder` | saves every request sent to the sound driver |

## Game and player options (also useful while debugging)

`SSTHEH_WINDOW=WxH|full`, `SSTHEH_VSYNC=1`, `SSTHEH_WIDESCREEN=0`, `SSTHEH_WIDE_2D=0`, `SSTHEH_WIDE_HUD=0`,
`SSTHEH_WIDE_SELECT=0`, `SSTHEH_INTERP=0`, `SSTHEH_FONT=file|0`, `SSTHEH_TEXTURES=0|folder`, `SSTHEH_50HZ=1`,
`SSTHEH_30FPS_SCENES=1`, `SSTHEH_PAD2=1`, `SSTHEH_MEMCARD=folder`, `SSTHEH_UNLOCK_ALL=1`, and the training
menu's `SSTHEH_TRAINING`, `SSTHEH_AUTOMASH`, `SSTHEH_REVIVAL`, `SSTHEH_BBCOUNTER`: see the README.

## Debugging the recompiled code with gdb

The recompiled functions are plain C with the guest address in their name, so a breakpoint on a game
function is `break F_002F9140`, and its registers are in `c->r[n]` (`p/x c->r[4].w[0]` is a0). The guest
memory is `rt_ram` (`x/4wx rt_ram + 0x00500204`). Build with `-O0` in `build.ninja`'s `cc` rule for exact
line-by-line stepping in a function you are studying.
