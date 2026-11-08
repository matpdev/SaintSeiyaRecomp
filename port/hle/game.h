/*
 * The game's addresses and structure offsets the port's native code (port/hle/) relies on, for the
 * European release, SLES-541.62. One place to look them up, and the list to go through for another
 * build of the game (the Japanese one, a modded executable): every value here, and the addresses in
 * port/hle.txt (the functions replaced or hooked), must be found again in it.
 *
 * Naming: FN_ a function (called with rt_call), RA_ a return address (a hook looks at RW(31) to act
 * only for one caller), D_ a variable or table in the game's memory, VT_ a class's method table, and
 * plain names for offsets inside the game's objects. Where each was found is told next to the code
 * using it.
 */
#ifndef GAME_H
#define GAME_H

/* ---- functions */
#define FN_ALLOC            0x00100670u     /* the game's allocator: small blocks (size) -> p */
#define FN_SIGNAL_SEMA      0x0010F680u     /* the kernel's SignalSema (sema id) */
#define FN_PAD_MANAGER      0x00138DE0u     /* -> the pad manager (one player's pad every PAD_PORT_STRIDE bytes) */
#define FN_SCENE_END        0x00139AB0u     /* the current scene asks to end */
#define FN_PAD_PRESSED      0x0013E020u     /* the pad's buttons pressed this frame */
#define FN_IN_DRAW_LIST     0x001419B0u     /* (element) -> 1 when in a scene's draw list */
#define FN_MODEL_ATTACH     0x0014EE30u     /* (model): a model made ready to draw */
#define FN_RAND             0x00194460u     /* -> a random number */
#define FN_NODE_UPDATE      0x002A1E20u     /* (node): a scene node's matrix made again after its place changed */
#define FN_ELEMENT_ATTACH   0x0030D620u     /* (element): an element tied to its model */
#define FN_CAROUSEL_AT      0x0031EFD0u     /* (list, offset) -> the item that far from the cursor */
#define FN_CAROUSEL_NEXT    0x0031F0B0u     /* (list, item) -> the next item */

/* ---- return addresses (the call sites a hook acts for) */
#define RA_BB_EVENTS_LO     0x001B9F00u     /* the Big Bang events' code: 0x001B9F00 .. 0x001C0400 */
#define RA_BB_EVENTS_HI     0x001C0400u
#define RA_BB_COUNTER       0x001BC2C4u     /* the Big Bang Counter's timing press (the defender's query) */
#define RA_MODE_MENU_TEXTS  0x0017E710u     /* the character select's mode menu: its texts made */
#define RA_MODE_MENU_CURSOR 0x0017E720u     /* ... its first cursor set */
#define RA_MODE_MENU_CHOSEN 0x0017E350u     /* ... its owner told the item chosen */
#define RA_CSEL_MALLOC      0x0017B1D0u     /* character select: the elements' block allocated */
#define RA_CSEL_NEW_ARRAY   0x0017B1F8u     /* ... and constructed (new[]) */
#define RA_CSEL_CLOSING     0x00177318u     /* ... the screen closing (top border taken out of the draw lists) */

/* ---- variables and tables */
#define D_APP               0x005000A0u     /* -> the application object (+0x20: wait one more vertical blank) */
#define D_FRAME             0x00500204u     /* -> the frame object (+0x178: Timer 0 when the frame started) */
#define D_VIDEO_MODE        0x0050022Cu     /* 1 NTSC (60 Hz), 2 PAL (50 Hz) */
#define D_MOVIE_NAMES       0x004FFCD0u     /* the video scene's file names, by index */
#define D_CHARS0            0x00418A40u     /* character -> glyph table ({code, glyph} pairs, sorted by code) */
#define D_CHARS1            0x0041A240u     /* ... the 161 glyphs after them */
#define D_UNLOCKS           0x00539C30u     /* the unlock table: a byte per item, bit 0 = unlocked */
#define D_UNLOCKS_SIZE      0xD4u
#define D_MC2_REQUEST       0x0050BDC0u     /* libmc2's current request (+4 command, +0xC.. arguments, +0x41C name) */
#define D_MC2_SEMA          0x0051E184u     /* the libmc2 worker's semaphore */

/* ---- method tables */
#define VT_PLAYER_CTL       0x004DD500u     /* a player's controller (reads a pad) */
#define VT_COM_CTL          0x004DE0D0u     /* the computer's controller */

/* ---- offsets in the game's objects */
#define BATTLE_FIGHTERS     968u            /* battle: the two fighters (+968, +972), then their controllers */
#define FIGHTER_LIFE        0x87B0u         /* fighter: its life block (a float, life out of 100, at +0) */
#define LIFE_FINISHING      0x5Cu           /* life block: a byte, set by a finishing blow (no revival) */
#define CTL_VTABLE          8u              /* controller: its method table */
#define CTL_PORT            0x18u           /* controller: its pad port (s16; < 0 or > 1: none) */
#define COM_DECISION        0x158u          /* computer controller: its decision (u16, 0 = nothing), */
#define COM_DECISION_ARGS   0x164u          /* ... with three bytes */
#define PAD_PORT_STRIDE     0xE4u           /* pad manager: one player's pad after the other */
#define PAD_PRESSED_WORD    0x44u           /* ... the buttons pressed this frame (u16) */

#endif
