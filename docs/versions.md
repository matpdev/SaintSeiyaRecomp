# Supporting another build of the game

One executable plays both releases: European (SLES_541.62) and Japanese (SLPS_257.44, 2007). The same steps
apply to a modded executable. Overview of the pipeline: [architecture.md](architecture.md).

## What differs between builds

- The SDK and CRI libraries are identical; about 180 game functions changed (damage and the battle step among
  them). 98% of the European functions exist in the Japanese executable, shifted.
- Everything the native code knows about the game is an **address or an offset**: `port/hle/game.h`
  (`GAME_ADDRESSES`, one column per release) and the list of replaced/hooked functions (`port/hle.txt`).

## Steps

1. **Configure the build** like `config/jp/`: a splat yaml (`slps_257.44.yaml`), `symbol_addrs.txt`,
   `undefined_*_auto.txt`, a `.sha1` of the executable. Generated C goes to its own folder (`generated-jp/`,
   functions named `JP_F_XXXXXXXX`).
2. **Map functions and variables** with `tools/version_map.py <other ELF>` (needs `disc/SLES_541.62` and numpy).
   It writes, in `build/version_map/`: `functions.csv` (each European function found in the other executable,
   exact or with address fields masked), `data.csv` (variables, read from the addresses the matched functions
   build with LUI + low half or `$gp`), and a `hle.txt` with the new addresses (unplaceable ones commented out).
   It also prints the `game.h` column.
3. **Fill the `game.h` column** with that output; find by hand what the tool could not place (functions that
   changed: here the movie step, the battle step and the damage).
4. **Write `config/<release>/hle.txt`** from the generated one, and check each hook still makes sense in the
   changed functions.
5. **Hook up selection**: `game_select` in `port/hle/game.c` recognises the executable by its content and
   points the CPU dispatch (`port/runtime/cpu.c`) at that release's translated code and `game_addr` column.
6. Regenerate (`configure.py`, with the disc) and commit the new `generated-*/`.

## Rules for native code

Never hard-code a European address in logic: read it through `game_addr`. A feature that only works in one
release should say so where it is turned on (e.g. the training options exist in both; check before assuming).

## Checking

The game boots to the title screen and a fight with each release; pictures from `--shot` of the same menu match
what the other release shows (language aside). See [debugging.md](debugging.md).
