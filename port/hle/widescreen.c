/*
 * Widescreen (16:9) without stretching anything.
 *
 * The game's cameras set their projection through one method (0x002A0E50, called from
 * 0x00161FA0 through the camera's table, +0x2C): set_view_screen(cam, scrz, ax, ay, cx, cy, zmin,
 * zmax, near, far), the arguments of libvu0's sceVu0ViewScreenMatrix. ax scales x on the screen;
 * from it the method also makes the clip matrix (0x002A38D0 with width / ax), which the game culls
 * with. With ax * 3/4 the same picture width holds a 16:9 view: more of the scene at the sides,
 * nothing wider, and nothing culled that is in sight. The window then shows the picture at 16:9,
 * and the renderer draws the 2D (menus, HUD, text) narrower by 3/4 around the centre so it keeps
 * its shapes (gpu_vk.c).
 *
 * On by default with the GPU renderer (the software one shows the PS2's picture as it is);
 * SSTHEH_WIDESCREEN=0 or F2 (remembered): the PS2's 4:3.
 */
#include <stdio.h>
#include <stdlib.h>

#include "r5900.h"
#include "runtime.h"
#include "gpu.h"

void display_config_path(char *p, size_t n, const char *name);     /* display.c */

int widescreen = -1;

int widescreen_on(void) {
    if (widescreen < 0) {
        const char *e = getenv("SSTHEH_WIDESCREEN");
        char path[1100], buf[8] = "1";
        if (e) widescreen = atoi(e) != 0;
        else {
            display_config_path(path, sizeof path, "widescreen");
            FILE *f = fopen(path, "r");
            if (f) { if (!fgets(buf, sizeof buf, f)) buf[0] = '1'; fclose(f); }
            widescreen = atoi(buf) != 0;
        }
    }
    return widescreen && gpu_on;
}

/* F2: switched and kept (~/.local/share/sstheh/widescreen); cameras pick it up when they next set
   their projection (every frame in fights) */
void widescreen_toggle(void) {
    widescreen_on();
    widescreen = !widescreen;
    char path[1100];
    display_config_path(path, sizeof path, "widescreen");
    FILE *f = fopen(path, "w");
    if (f) { fprintf(f, "%d\n", widescreen); fclose(f); }
    rt_log("display", "widescreen %s", widescreen ? "on" : "off");
}

/* on entry to set_view_screen (port/hle.txt: "before") */
void hle_widescreen_view(Ctx *c) {
    if (widescreen_on()) F(13) *= 0.75f;
}
