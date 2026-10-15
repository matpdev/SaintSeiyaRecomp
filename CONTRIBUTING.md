# Contributing

All help is welcome: decompiling functions, improving the port, or testing and reporting problems. Issues and
pull requests in Portuguese are welcome too.

## The main rule

**Nothing from the game goes into the repository**: not the executable, not the ISO, not files extracted from
it (textures, sounds, models). `.gitignore` already excludes `disc/`, `asm/`, `assets/` and `build/`. Check
`git status` before every commit.

## Testing

Run the port (see the README) and open an issue with:

- what happened and where (screen, character, game mode);
- your GPU, driver and distribution;
- the terminal output (`./jogar.sh -v 2> log.txt` gives more detail);
- whether the problem goes away with `SSTHEH_GS=sw` (software renderer).

## Decompiling a function

The goal is C++ that, built with the game's compiler, produces **exactly** the same instructions.

1. Pick a function in `asm/game_*.s` (each sits between `glabel` and `endlabel`). Small leaf functions (that
   call nothing else) are the best start. `tools/recon/xref.py` shows who calls it and which strings it uses.
2. Write the C++ in `src/…` named `func_XXXXXXXX`, or give it a name and add it to `config/symbol_addrs.txt`.
3. Run `tools/fdiff.py src/file.cpp` until the function shows `OK`.
4. Run `ninja`: the build must still end with `OK: build matches the original`.

[decomp.me](https://decomp.me) helps to experiment: use the Metrowerks CodeWarrior PS2 3.0.1 compiler with
`-O3`.

## Working on the port

- Native code lives in `port/`; the recompiler in `tools/recomp/recomp.py`.
- To replace a game function with a native one, add its address to `port/hle.txt` and implement it in
  `port/hle/`.
- Follow the style of the file you are editing (C, short comments explaining the PS2 hardware).
- Check that the game still reaches the title screen and a fight. `--shot N,M` saves screenshots without a
  window, handy to compare before and after.

## Pull requests

- One topic per PR, with a short description of what changes and how it was tested.
- Commit messages in the imperative or descriptive, like the ones in the history.
