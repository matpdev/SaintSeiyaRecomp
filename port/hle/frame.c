/*
 * Loading in time slices.
 *
 * The game's background loaders (battle data: 0x001F1230, 0x00165F10) work in a loop "while this
 * frame has used less than ~80% of its scanlines", reading 0x002A78D0: Timer 0 (counting
 * horizontal blanks) minus its value when the frame started (+0x178 of the frame object at
 * D_00500204). On the PS2 the game reaches the loaders well within that budget; here a frame takes
 * longer (and the timer runs on host time), so the budget was always spent before they ran and
 * the battle waited for its data forever. The replacement starts each frame's budget at the
 * first question asked in that frame, so the loaders get their ~13 ms of work every frame.
 */
#include <time.h>

#include "r5900.h"
#include "runtime.h"

static u64 now_ns(void) {
    struct timespec ts;
    clock_gettime(CLOCK_MONOTONIC, &ts);
    return (u64)ts.tv_sec * 1000000000ull + (u64)ts.tv_nsec;
}

/* u16 frame_lines(void): horizontal blanks (15625 a second) since the frame's loaders started */
void hle_frame_lines(Ctx *c) {
    u32 frame = rd32(c, 0x00500204);
    if (!frame) { SET64(2, 0); return; }
    static u32 last_base = ~0u;
    static u64 start;
    u32 base = rd16(c, frame + 0x178);
    u64 now = now_ns();
    if (base != last_base) { last_base = base; start = now; }
    u64 lines = (now - start) * 15625 / 1000000000ull;
    SET64(2, lines > 0xFFFF ? 0xFFFF : lines);
}
