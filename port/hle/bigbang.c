/*
 * Big Bang events, two options of the F5 menu (training.c):
 *
 * Revival off (SSTHEH_REVIVAL=0): a fighter whose life runs out is knocked out, without Athena
 * calling them to stand up again. The round's end check (0x002F2630, a0 = battle) sends a fighter
 * with life <= 0 to the revival event (0x002F0650) unless their life block (fighter + 0x87B0) has
 * the byte at +0x5C set (a finishing blow: some hits set it, any other hit clears it, see
 * 0x0031E5F0); then it is a knock-out as the game does it. The byte is set here before the check
 * for a fighter at life <= 0.
 *
 * Big Bang Counter off (SSTHEH_BBCOUNTER=0): a Big Bang Attack can't be countered, so it never turns
 * into a clash. The counter is a press of the button shown on the screen at the right moment: the
 * Big Bang event (0x001BB570) asks the defender's controller +0xC0 query from 0x001BC2BC (returning
 * to 0x001BC2C4): 0 none, 1 the right button, 2 a wrong one. Asked from there, the player's query finds
 * no face button pressed, and the computer's (0x00315070, replaced here: a draw of 100, under 6 a wrong
 * button, under 68 the right one) answers none.
 *
 * Auto-mash: the button mashing done by the port (SSTHEH_AUTOMASH=1).
 *
 * In a Big Bang Counter both fighters mash ✕ ○ □ △ (any of them) to win the clash, and a fighter
 * whose life runs out mashes them to stand up again (Athena's call). The events are fighter states
 * in 0x001B9F00..0x001C0400 (the event machine is 0x001BFE20; standing up again is 0x001B9F00),
 * which ask the player's controller (vtable 0x004DD500) through its button queries:
 *   +0xBC 0x002FF9D0 any button pressed this frame      +0xC0 0x002FF960 / +0xC8 0x002FF8A0
 *   +0xC4 0x002FF910 one of these pressed this frame     which face button (same as a1: 1, other: 2)
 * Each reads the pad manager's "pressed this frame" word (0x0013E020: manager + port * 0xE4 +
 * 0x44). When one of them is asked from the Big Bang events, a face button press is added to that
 * word first: ✕ ○ □ △ in turn, one every 3 frames (20 a second, a fast human). The game counts them
 * as it counts the player's. The counter's timing press (the button shown on the screen, pressed
 * at the right moment: the query returning to 0x001BC2C4) stays the player's.
 */
#include "hle.h"
#include "pad.h"

int training_automash(void);                  /* training.c: the menu's options */
int training_revival(void);
int training_counter(void);
u32 kernel_vblank_count(void);

#define MASH_EVERY 3                          /* frames between two auto-mash presses (20 a second) */

/* the pad manager's pressed-this-frame word for a player controller's pad, or 0 */
static u32 pressed_word(Ctx *c, u32 ctl) {
    s16 port = (s16)rd16(c, ctl + CTL_PORT);
    if (port < 0 || port > 1) return 0;
    GuestRegs kept;
    regs_keep(c, &kept);
    u32 word = game_call(c, FN_PAD_MANAGER) + (u32)port * PAD_PORT_STRIDE + PAD_PRESSED_WORD;
    regs_back(c, &kept);
    return word;
}

/* A player controller's button query (a0 = controller), asked from somewhere (RW(31)). */
static void mash(Ctx *c) {
    u32 ra = RW(31), ctl = RW(4);
    if (ra == RA_BB_COUNTER && !training_counter()) {       /* no counter: the face buttons unseen */
        u32 word = pressed_word(c, ctl);
        if (word) wr16(c, word, rd16(c, word) & 0x0FFF);
        return;
    }
    int from_events = ra >= RA_BB_EVENTS_LO && ra < RA_BB_EVENTS_HI && ra != RA_BB_COUNTER;
    if (!from_events || !training_automash()) return;
    s16 port = (s16)rd16(c, ctl + CTL_PORT);
    if (port < 0 || port > 1) return;
    /* one face button more every MASH_EVERY frames, the same one for every query in a frame */
    static u32 last[2], turn[2];
    static const u16 face[4] = {PAD_CROSS, PAD_CIRCLE, PAD_SQUARE, PAD_TRIANGLE};
    u32 vb = kernel_vblank_count();
    if (vb - last[port] < MASH_EVERY && vb != last[port]) return;
    if (vb - last[port] > 60) rt_log("mash", "port %d: auto-mash for the Big Bang event at %08X", port + 1, ra - 8);
    if (vb != last[port]) { last[port] = vb; turn[port]++; }
    u32 word = pressed_word(c, ctl);
    wr16(c, word, rd16(c, word) | face[turn[port] & 3]);
}

/* 0x00315070 (replaced): the computer's "which face button" query, a draw */
void hle_com_face(Ctx *c) {
    u32 ra = RW(31);
    if (ra == RA_BB_COUNTER) {
        static u32 last;
        u32 vb = kernel_vblank_count();
        if (vb - last > 60)
            rt_log("bbc", "the computer may counter a Big Bang Attack%s", training_counter() ? "" : ": no (Big Bang Counter off)");
        last = vb;
        if (!training_counter()) { SET64(2, 0); return; }
    }
    u32 r = game_call(c, FN_RAND) % 100;      /* as the game: under 6 a wrong button, under 68 the right one */
    SET64(2, r < 6 ? 2 : r < 68 ? 1 : 0);
}

void hle_mash_any(Ctx *c) { mash(c); }        /* 0x002FF9D0 */
void hle_mash_face(Ctx *c) { mash(c); }       /* 0x002FF960, 0x002FF8A0 */
void hle_mash_some(Ctx *c) { mash(c); }       /* 0x002FF910 */

/* 0x002F2630 (before; a0 = battle): the round's end check. With revival off, a fighter at life <= 0
   is marked as finished, so the check knocks them out. */
void hle_revival_check(Ctx *c) {
    if (training_revival()) return;
    u32 battle = RW(4);
    for (u32 k = 0; k < 2; k++) {
        u32 fighter = rd32(c, battle + BATTLE_FIGHTERS + 4 * k);
        if (!fighter) continue;
        if (rd_float(c, fighter + FIGHTER_LIFE) <= 0.0f) wr8(c, fighter + FIGHTER_LIFE + LIFE_FINISHING, 1);
    }
}
