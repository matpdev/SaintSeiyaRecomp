/*
 * The game's addresses and structure offsets the port's native code (port/hle/) relies on, for each
 * release the port runs: the European one (SLES-541.62) and the Japanese one (SLPS-257.44, 2007). The
 * executable loaded picks the column (game_select, game.c). With port/hle.txt and config/jp/hle.txt
 * (the functions replaced or hooked), this is the list to go through for another build of the game.
 *
 * The Japanese column was found from the European one (tools/version_map.py): its functions matched
 * by their instructions, its variables by the addresses the matching code builds. 0 where it wasn't
 * found: the feature using it does nothing there.
 *
 * Naming: FN_ a function (called with rt_call), RA_ a return address (a hook looks at RW(31) to act
 * only for one caller), D_ a variable or table in the game's memory, VT_ a class's method table, and
 * plain names for offsets inside the game's objects. Where each was found is told next to the code
 * using it.
 */
#ifndef GAME_H
#define GAME_H

#include "r5900.h"

typedef enum { GAME_EU, GAME_JP, GAME_VERSIONS } GameVersion;

/*            name                  Europe       Japan */
#define GAME_ADDRESSES(X) \
    /* ---- functions */ \
    X(FN_ALLOC,             0x00100670u, 0x00100670u) /* the game's allocator: small blocks (size) -> p */ \
    X(FN_SIGNAL_SEMA,       0x0010F680u, 0x0010F680u) /* the kernel's SignalSema (sema id) */ \
    X(FN_PAD_MANAGER,       0x00138DE0u, 0x00138DE0u) /* -> the pad manager (one player's pad every PAD_PORT_STRIDE bytes) */ \
    X(FN_SCENE_END,         0x00139AB0u, 0x00139AB0u) /* the current scene asks to end */ \
    X(FN_PAD_PRESSED,       0x0013E020u, 0x0013E200u) /* the pad's buttons pressed this frame */ \
    X(FN_IN_DRAW_LIST,      0x001419B0u, 0x00141B90u) /* (element) -> 1 when in a scene's draw list */ \
    X(FN_MODEL_ATTACH,      0x0014EE30u, 0x0014F730u) /* (model): a model made ready to draw */ \
    X(FN_RAND,              0x00194460u, 0x001953A0u) /* -> a random number */ \
    X(FN_NODE_UPDATE,       0x002A1E20u, 0x002A4D70u) /* (node): a scene node's matrix made again after its place changed */ \
    X(FN_ELEMENT_ATTACH,    0x0030D620u, 0x00312520u) /* (element): an element tied to its model */ \
    X(FN_CAROUSEL_AT,       0x0031EFD0u, 0x00323DA0u) /* (list, offset) -> the item that far from the cursor */ \
    X(FN_CAROUSEL_NEXT,     0x0031F0B0u, 0x00323E80u) /* (list, item) -> the next item */ \
    /* ---- return addresses (the call sites a hook acts for) */ \
    X(RA_BB_EVENTS_LO,      0x001B9F00u, 0x001BB200u) /* the Big Bang events' code, from here ... */ \
    X(RA_BB_EVENTS_HI,      0x001C0400u, 0x001C1AD0u) /* ... to here */ \
    X(RA_BB_COUNTER,        0x001BC2C4u, 0)           /* the Big Bang Counter's timing press (the defender's query) */ \
    X(RA_MODE_MENU_TEXTS,   0x0017E710u, 0x0017F650u) /* the character select's mode menu: its texts made */ \
    X(RA_MODE_MENU_CURSOR,  0x0017E720u, 0x0017F660u) /* ... its first cursor set */ \
    X(RA_MODE_MENU_CHOSEN,  0x0017E350u, 0x0017F290u) /* ... its owner told the item chosen */ \
    X(RA_CSEL_MALLOC,       0x0017B1D0u, 0x0017C0C0u) /* character select: the elements' block allocated */ \
    X(RA_CSEL_NEW_ARRAY,    0x0017B1F8u, 0x0017C0E8u) /* ... and constructed (new[]) */ \
    X(RA_CSEL_CLOSING,      0x00177318u, 0)           /* ... the screen closing (top border taken out of the draw lists) */ \
    /* ---- variables and tables */ \
    X(D_APP,                0x005000A0u, 0x00506F20u) /* -> the application object (+0x20: wait one more vertical blank) */ \
    X(D_FRAME,              0x00500204u, 0x00507084u) /* -> the frame object (+0x178: Timer 0 when the frame started) */ \
    X(D_VIDEO_MODE,         0x0050022Cu, 0x005070ACu) /* 1 NTSC (60 Hz), 2 PAL (50 Hz) */ \
    X(D_MOVIE_NAMES,        0x004FFCD0u, 0x00506AD8u) /* the video scene's file names, by index */ \
    X(D_CHARS0,             0x00418A40u, 0x0041F440u) /* character -> glyph table ({code, glyph} pairs, sorted by code) */ \
    X(D_CHARS1,             0x0041A240u, 0x00420CC0u) /* ... the 161 glyphs after them */ \
    X(D_UNLOCKS,            0x00539C30u, 0x00540AB0u) /* the unlock table: a byte per item, bit 0 = unlocked */ \
    X(D_MC2_REQUEST,        0x0050BDC0u, 0x00512C40u) /* libmc2's current request (+4 command, +0xC.. arguments, +0x41C name) */ \
    X(D_MC2_SEMA,           0x0051E184u, 0x00525004u) /* the libmc2 worker's semaphore */ \
    X(D_VU1_MICROCODE,      0x003C6F80u, 0x003CD700u) /* the VU1 programs: DMA packets of MPGs (port/gs/vu_jit.c) */ \
    /* ---- method tables */ \
    X(VT_PLAYER_CTL,        0x004DD500u, 0x004E3F30u) /* a player's controller (reads a pad) */ \
    X(VT_COM_CTL,           0x004DE0D0u, 0x004E4B00u) /* the computer's controller */

enum {
#define GAME_INDEX(name, eu, jp) GA_##name,
    GAME_ADDRESSES(GAME_INDEX)
#undef GAME_INDEX
    GA_COUNT
};
extern u32 game_addr[GA_COUNT];          /* the loaded release's column */
extern GameVersion game_version;

#define FN_ALLOC            game_addr[GA_FN_ALLOC]
#define FN_SIGNAL_SEMA      game_addr[GA_FN_SIGNAL_SEMA]
#define FN_PAD_MANAGER      game_addr[GA_FN_PAD_MANAGER]
#define FN_SCENE_END        game_addr[GA_FN_SCENE_END]
#define FN_PAD_PRESSED      game_addr[GA_FN_PAD_PRESSED]
#define FN_IN_DRAW_LIST     game_addr[GA_FN_IN_DRAW_LIST]
#define FN_MODEL_ATTACH     game_addr[GA_FN_MODEL_ATTACH]
#define FN_RAND             game_addr[GA_FN_RAND]
#define FN_NODE_UPDATE      game_addr[GA_FN_NODE_UPDATE]
#define FN_ELEMENT_ATTACH   game_addr[GA_FN_ELEMENT_ATTACH]
#define FN_CAROUSEL_AT      game_addr[GA_FN_CAROUSEL_AT]
#define FN_CAROUSEL_NEXT    game_addr[GA_FN_CAROUSEL_NEXT]
#define RA_BB_EVENTS_LO     game_addr[GA_RA_BB_EVENTS_LO]
#define RA_BB_EVENTS_HI     game_addr[GA_RA_BB_EVENTS_HI]
#define RA_BB_COUNTER       game_addr[GA_RA_BB_COUNTER]
#define RA_MODE_MENU_TEXTS  game_addr[GA_RA_MODE_MENU_TEXTS]
#define RA_MODE_MENU_CURSOR game_addr[GA_RA_MODE_MENU_CURSOR]
#define RA_MODE_MENU_CHOSEN game_addr[GA_RA_MODE_MENU_CHOSEN]
#define RA_CSEL_MALLOC      game_addr[GA_RA_CSEL_MALLOC]
#define RA_CSEL_NEW_ARRAY   game_addr[GA_RA_CSEL_NEW_ARRAY]
#define RA_CSEL_CLOSING     game_addr[GA_RA_CSEL_CLOSING]
#define D_APP               game_addr[GA_D_APP]
#define D_FRAME             game_addr[GA_D_FRAME]
#define D_VIDEO_MODE        game_addr[GA_D_VIDEO_MODE]
#define D_MOVIE_NAMES       game_addr[GA_D_MOVIE_NAMES]
#define D_CHARS0            game_addr[GA_D_CHARS0]
#define D_CHARS1            game_addr[GA_D_CHARS1]
#define D_UNLOCKS           game_addr[GA_D_UNLOCKS]
#define D_MC2_REQUEST       game_addr[GA_D_MC2_REQUEST]
#define D_MC2_SEMA          game_addr[GA_D_MC2_SEMA]
#define D_VU1_MICROCODE     game_addr[GA_D_VU1_MICROCODE]
#define VT_PLAYER_CTL       game_addr[GA_VT_PLAYER_CTL]
#define VT_COM_CTL          game_addr[GA_VT_COM_CTL]

#define D_UNLOCKS_SIZE      0xD4u        /* the unlock table's size */

/* ---- offsets in the game's objects (the same in both releases as far as checked) */
#define BATTLE_FIGHTERS     968u            /* battle: the two fighters (+968, +972), then their controllers */
#define FIGHTER_LIFE        0x87B0u         /* fighter: its life block (a float, life out of 100, at +0) */
#define LIFE_FINISHING      0x5Cu           /* life block: a byte, set by a finishing blow (no revival) */
#define CTL_VTABLE          8u              /* controller: its method table */
#define CTL_PORT            0x18u           /* controller: its pad port (s16; < 0 or > 1: none) */
#define COM_DECISION        0x158u          /* computer controller: its decision (u16, 0 = nothing), */
#define COM_DECISION_ARGS   0x164u          /* ... with three bytes */
#define PAD_PORT_STRIDE     0xE4u           /* pad manager: one player's pad after the other */
#define PAD_PRESSED_WORD    0x44u           /* ... the buttons pressed this frame (u16) */

/* The release of this executable (its whole content's FNV-1a): selects game_addr and the translated
 * code (cpu.c). -1 when it is none the port knows. */
int game_select(const void *elf, u32 size);
const char *game_name(void);

#endif
