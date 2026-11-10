# CLAUDE.md

Native Linux/Windows port of **Saint Seiya: The Hades** (PS2; EU SLES-54162 and JP SLPS-25744, one executable
plays both) by **static recompilation**: the game's MIPS R5900 code is translated to C (`tools/recomp/recomp.py`)
and the port supplies what the PS2 had around the CPU (kernel, IOP, VUs, GS → Vulkan). A matching decompilation
of the original executable runs alongside. Read [docs/architecture.md](docs/architecture.md) before touching `port/`.

## Hard rules

- **Nothing from the game enters git**: no ISO, no `SLES_541.62`/`SLPS_257.44`, no extracted textures/sounds/models,
  no `asm/`, `assets/`, `disc/*`, and no proprietary binaries (the Metrowerks compilers in `tools/compilers/`,
  `tools/dl/`, `tools/binutils/` stay local and ignored). Check `git status` before every commit.
- **Never hand-edit `generated/` or `generated-jp/`.** It is committed, deterministic output of `recomp.py`
  (and `sstheh --gen-vu` for `generated/vu/`). Change the translator, regenerate (needs the disc), commit the diff.
- Pushes to `master` that pass CI **publish a release**. `#minor` / `#major` in a commit message bumps the version.
  Don't push without being asked.

## Commands

| Task | Command |
|---|---|
| Build everything (needs an ISO) | `./build.sh [game.iso]` (`--clean` rebuilds from scratch) |
| Run | `./play.sh` · `./build/sstheh [-q\|-v\|-vv] [--iso f]` |
| Re-configure / build by hand | `python3 configure.py [--march=native] [--no-split] [--windows]` then `ninja port` (use `.venv/bin`) |
| Checks without a disc | `tools/ci_check.sh linux\|windows\|python` (port code with `-Wall -Wextra -Werror`) |
| Headless screenshots | `./build/sstheh -q --press "1100:CROSS" --shot 3100` → `build/shot_N.ppm` |
| Windows cross-build deps | `tools/win_deps.sh` (SDL3, FFmpeg, FreeType into `tools/win/`), then `configure.py --no-split --windows` |
| Releases | `tools/release.sh windows\|linux` |

Without a disc only `ci_check.sh` (and a build from the committed `generated/`) can run; the game itself cannot.
`compilar.sh`/`jogar.sh` are the old Portuguese names of `build.sh`/`play.sh`.

## Layout

| Path | What |
|---|---|
| `port/runtime`, `kernel`, `iop` (+`lle/`), `gs` | CPU/memory helpers, EE syscalls, IOP services + emulated SPU2, DMAC→VIF→VU→GS→Vulkan |
| `port/hle/` + `port/hle.txt` | native replacements/hooks of game functions; `game.h` names every game address/offset used |
| `config/`, `config/jp/` | splat config, symbol names, per-release `hle.txt` |
| `tools/recomp/` | the recompiler · `tools/recon/` analysis · `tools/setup/` Qt installer |

## Conventions

- Hooking/replacing a game function: name the address (and offsets) in `port/hle/game.h`, implement in
  `port/hle/*.c` (include `hle.h`) with a comment on what the game function does, add it to `port/hle.txt`
  (`before` = hook, otherwise replacement) — and to `config/jp/hle.txt` if the JP release needs it.
- Two releases: native code reads addresses from `game_addr` (the per-release column of `game.h`); don't hard-code
  EU addresses in logic.
- C style of the neighbouring file; short comments explaining the PS2 hardware. Warnings are errors in CI.
- Decompilation: `tools/fdiff.py src/file.cpp` until `OK`; the build must end `OK: build matches the original`.
  (`src/` and `asm/` exist only locally after a build with a disc.)
- Port features are env vars `SSTHEH_*` (list in README and [docs/debugging.md](docs/debugging.md)); there is also
  `SSTHEH_GS=sw` (software GS) to tell renderer bugs from game bugs.

## Verifying a change

The game must still reach the title screen and a fight. Compare `--shot` pictures before/after (menus are
byte-identical with `cmp`; fights are not repeatable). For renderer changes use `SSTHEH_GSREC` +
`--gs-replay`. Use `SSTHEH_MEMCARD=<copy>` so tests never touch real saves. Details: [docs/debugging.md](docs/debugging.md).

## Docs

README, CONTRIBUTING, `docs/architecture`, `debugging`, `recon` and `roadmap` have pt-BR twins (`*.pt-BR.md`;
`arquitetura`, `depuracao`); update both when changing one. Index: [docs/README.md](docs/README.md). Other docs: [docs/recon.md](docs/recon.md) (executable analysis),
[docs/roadmap.md](docs/roadmap.md), [CONTRIBUTING.md](CONTRIBUTING.md). Commit messages: descriptive, like the history.
