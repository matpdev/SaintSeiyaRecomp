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
#include <string.h>
#include <stddef.h>

#include "r5900.h"
#include "runtime.h"
#include "pad.h"

int training_automash(void);                  /* training.c: the menu's options */
int training_revival(void);
u32 kernel_vblank_count(void);

#define EVENTS_LO 0x001B9F00u
#define EVENTS_HI 0x001C0400u
#define COUNTER_RA 0x001BC2C4u

static void mash(Ctx *c) {
    u32 ra = RW(31);
    if (ra < EVENTS_LO || ra >= EVENTS_HI || ra == COUNTER_RA || !training_automash()) return;
    u32 ctl = RW(4);
    s16 port = (s16)rd16(c, ctl + 0x18);
    if (port < 0 || port > 1) return;
    static u32 last[2], turn[2];
    static const u16 face[4] = {PAD_CROSS, PAD_CIRCLE, PAD_SQUARE, PAD_TRIANGLE};
    u32 vb = kernel_vblank_count();
    if (vb - last[port] < 3 && vb != last[port]) return;
    if (vb - last[port] > 60) rt_log("mash", "port %d: auto-mash for the Big Bang event at %08X", port + 1, ra - 8);
    if (vb != last[port]) { last[port] = vb; turn[port]++; }
    u8 regs[offsetof(Ctx, thread)];
    memcpy(regs, c, sizeof regs);
    SET32(31, 0);
    rt_call(c, 0x00138DE0);                      /* the pad manager */
    u32 word = RW(2) + (u32)port * 0xE4 + 0x44;
    memcpy(c, regs, sizeof regs);
    wr16(c, word, rd16(c, word) | face[turn[port] & 3]);
}

void hle_mash_any(Ctx *c) { mash(c); }        /* 0x002FF9D0 */
void hle_mash_face(Ctx *c) { mash(c); }       /* 0x002FF960, 0x002FF8A0 */
void hle_mash_some(Ctx *c) { mash(c); }       /* 0x002FF910 */

/* 0x002F2630 (battle): the round's end check */
void hle_revival_check(Ctx *c) {
    if (training_revival()) return;
    u32 battle = RW(4);
    for (int k = 0; k < 2; k++) {
        u32 f = rd32(c, battle + 968 + 4 * k);
        if (!f) continue;
        u32 life = rd32(c, f + 0x87B0);
        float v;
        memcpy(&v, &life, 4);
        if (v <= 0.0f) wr8(c, f + 0x87B0 + 0x5C, 1);
    }
}
