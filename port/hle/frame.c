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
#include <stdlib.h>
#include <time.h>

#include "r5900.h"
#include "runtime.h"

static u64 now_ns(void) {
    struct timespec ts;
    clock_gettime(CLOCK_MONOTONIC, &ts);
    return (u64)ts.tv_sec * 1000000000ull + (u64)ts.tv_nsec;
}

int kernel_ntsc(void);

/* u16 frame_lines(void): horizontal blanks (15625 a second, NTSC 15734) since the frame's loaders started */
void hle_frame_lines(Ctx *c) {
    u32 frame = rd32(c, 0x00500204);
    if (!frame) { SET64(2, 0); return; }
    static u32 last_base = ~0u;
    static u64 start;
    u32 base = rd16(c, frame + 0x178);
    u64 now = now_ns();
    if (base != last_base) { last_base = base; start = now; }
    u64 lines = (now - start) * (kernel_ntsc() ? 15734 : 15625) / 1000000000ull;
    SET64(2, lines > 0xFFFF ? 0xFFFF : lines);
}

/* void set_video_mode(void) (0x002BFA80): sets D_0050022C, the video mode the game draws and
 * times its steps for, from the build's region (0x0023FC40, always 2 on this disc: PAL, 50 Hz).
 * The NTSC mode (1: 448 lines, 60 Hz, steps of 1/60 s instead of 1/50) is still all there; it is
 * chosen here and the region stays European (language choice, texts). SSTHEH_50HZ=1: PAL as on the
 * disc. */
void hle_video_mode(Ctx *c) {
    static int pal = -1;
    if (pal < 0) pal = getenv("SSTHEH_50HZ") && atoi(getenv("SSTHEH_50HZ"));
    wr32(c, 0x0050022C, pal ? 2 : 1);
}

/* void set_frame_wait(u8 on) (0x00138B20): scenes set it to finish each frame by waiting for the
 * next vertical blank, which makes the frame miss the vertical blank that starts the next one, so
 * those scenes (menus, title, many 2D screens) run at half rate: 30 frames a second. The game's
 * steps are timed by the vertical blanks that went by, so without the wait they run at the full
 * rate at the same speed. SSTHEH_30FPS_SCENES=1: as on the disc. */
void hle_set_frame_wait(Ctx *c) {
    static int keep = -1;
    if (keep < 0) keep = getenv("SSTHEH_30FPS_SCENES") && atoi(getenv("SSTHEH_30FPS_SCENES"));
    u32 app = rd32(c, 0x005000A0);
    wr8(c, app + 0x20, keep ? (u8)RW(4) : 0);
}
