# generated/

The game's code translated to C, made by the build from `disc/SLES_541.62` and kept here so the port also
builds without a disc (the GitHub CI builds the release packages from it):

- `recomp/`: every MIPS function of the executable as C (`tools/recomp/recomp.py`); `functab.c` maps the
  game's addresses to them.
- `vu/`: the game's VU1 microprograms as C (`build/sstheh-stage1 --gen-vu`, `port/gs/vu_jit.c`).

Code only: the executable's data, and everything on the disc, are read from the player's own copy when the
game starts. Don't edit these files: change the translator (or `port/`) and build with your disc; ninja
makes them again, and what changed here goes into the same commit.
