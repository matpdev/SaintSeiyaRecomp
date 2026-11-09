/*
 * Which release of the game is running: the European (SLES-541.62) or the Japanese (SLPS-257.44).
 * Both are translated into this executable (generated/recomp, generated-jp/recomp: JP_F_... functions);
 * the executable loaded picks the translated code the CPU dispatches to (cpu.c) and the column of
 * game.h the native code reads its addresses from.
 */
#include "game.h"
#include "runtime.h"

extern const FuncEntry eu_functab[], jp_functab[];         /* generated: address -> translated function */
extern const int eu_functab_count, jp_functab_count;
extern const FuncEntry *rt_functab;                         /* cpu.c: the one dispatched to */
extern int rt_functab_count;

static const u32 table[GAME_VERSIONS][GA_COUNT] = {
#define GAME_EU_VALUE(name, eu, jp) eu,
#define GAME_JP_VALUE(name, eu, jp) jp,
    {GAME_ADDRESSES(GAME_EU_VALUE)},
    {GAME_ADDRESSES(GAME_JP_VALUE)},
};

static const struct {
    u64 fnv;            /* FNV-1a of the whole executable */
    const char *name;
} known[GAME_VERSIONS] = {
    {0x61BAC351F3463E34ull, "Saint Seiya: The Hades (Europe, SLES-54162)"},
    {0x1855DF702BBE6B8Dull, "Saint Seiya: Meiou Hades Juunikyuu-hen (Japan, SLPS-25744)"},
};

u32 game_addr[GA_COUNT];
GameVersion game_version = GAME_EU;

int game_select(const void *elf, u32 size) {
    u64 h = 0xCBF29CE484222325ull;
    for (u32 i = 0; i < size; i++) h = (h ^ ((const u8 *)elf)[i]) * 0x100000001B3ull;
    int v = -1;
    for (int i = 0; i < GAME_VERSIONS; i++)
        if (known[i].fnv == h) v = i;
    if (v < 0) return -1;
    game_version = (GameVersion)v;
    for (int i = 0; i < GA_COUNT; i++) game_addr[i] = table[v][i];
    rt_functab = v == GAME_JP ? jp_functab : eu_functab;
    rt_functab_count = v == GAME_JP ? jp_functab_count : eu_functab_count;
    rt_log("main", "%s", known[v].name);
    return v;
}

const char *game_name(void) { return known[game_version].name; }
