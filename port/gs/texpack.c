/*
 * Texture packs: the game's textures saved as PNG files, and PNG files used in their place.
 *
 * A texture is named by its decoded content (RGBA pixels and size, 16 hex digits), the same
 * whatever GS memory it was read from and from one run to the next:
 *   SSTHEH_TEX_DUMP=1   each texture decoded for the first time is saved as
 *                       ~/.local/share/sstheh/textures/dump/<name>.png (dump/ of the folder
 *                       SSTHEH_TEXTURES names, when it names one)
 *   textures/<name>.png is used instead of that texture, at any size (a 4x upscale, a repaint):
 *                       draws keep addressing it in the original's texels, so nothing else changes.
 * SSTHEH_TEXTURES=0 turns replacements off; SSTHEH_TEXTURES=<folder> takes them from elsewhere.
 * PNG alpha is 0..255; the GS's is 0..0x80 (1.0), converted both ways.
 *
 * Everything here runs on the GS thread (gs.c decodes textures there).
 */
#include <SDL3/SDL.h>
#include <dirent.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>

#include "r5900.h"
#include "runtime.h"

void display_config_path(char *p, size_t n, const char *name);     /* display.c */

static char dir[1024];               /* replacements */
static int inited, dump_on;
static u64 *names;                   /* replacements present, sorted */
static u32 nnames;

typedef struct { u64 name; u32 w, h; u32 *px; } Loaded;
static Loaded *loaded;               /* replacements read so far (kept: textures come back) */
static u32 nloaded, cap_loaded;

static int cmp_u64(const void *a, const void *b) {
    u64 x = *(const u64 *)a, y = *(const u64 *)b;
    return x < y ? -1 : x > y;
}

static void init(void) {
    inited = 1;
    const char *e = getenv("SSTHEH_TEX_DUMP");
    dump_on = e && atoi(e);
    e = getenv("SSTHEH_TEXTURES");
    if (e && *e && strcmp(e, "0")) snprintf(dir, sizeof dir, "%s", e);
    else display_config_path(dir, sizeof dir, "textures");
    if (e && !strcmp(e, "0")) return;
    mkdir(dir, 0755);
    DIR *d = opendir(dir);
    if (!d) return;
    u32 cap = 0;
    for (struct dirent *de; (de = readdir(d));) {
        u64 n;
        char tail[8];
        if (strlen(de->d_name) != 20 || sscanf(de->d_name, "%16llx%7s", (unsigned long long *)&n, tail) != 2) continue;
        if (strcmp(tail, ".png")) continue;
        if (nnames == cap) names = realloc(names, (cap = cap ? cap * 2 : 256) * sizeof *names);
        names[nnames++] = n;
    }
    closedir(d);
    qsort(names, nnames, sizeof *names, cmp_u64);
    if (nnames) rt_log("tex", "%u replacement textures in %s", nnames, dir);
}

u64 texpack_name(const u32 *px, u32 w, u32 h) {
    u64 a = 0x9E3779B97F4A7C15ull ^ ((u64)w << 32 | h), b = 0xC2B2AE3D27D4EB4Full;
    u32 n = w * h, i = 0;
    for (; i + 1 < n; i += 2) {
        a = (a ^ px[i]) * 0x100000001B3ull;
        b = (b ^ px[i + 1]) * 0xFF51AFD7ED558CCDull;
    }
    if (i < n) a = (a ^ px[i]) * 0x100000001B3ull;
    return (a ^ (b >> 29) ^ (b << 7)) * 0x9E3779B97F4A7C15ull;
}

/* SSTHEH_TEX_DUMP=1: textures/dump/<name>.png, once */
void texpack_dump(u64 name, const u32 *px, u32 w, u32 h) {
    if (!inited) init();
    if (!dump_on) return;
    static u64 *seen;
    static u32 nseen, cap_seen;
    for (u32 i = 0; i < nseen; i++)
        if (seen[i] == name) return;
    if (nseen == cap_seen) seen = realloc(seen, (cap_seen = cap_seen ? cap_seen * 2 : 1024) * sizeof *seen);
    seen[nseen++] = name;
    char path[1200];
    snprintf(path, sizeof path, "%s", dir);
    mkdir(path, 0755);
    strcat(path, "/dump");
    mkdir(path, 0755);
    snprintf(path + strlen(path), sizeof path - strlen(path), "/%016llx.png", (unsigned long long)name);
    struct stat st;
    if (stat(path, &st) == 0) return;
    SDL_Surface *s = SDL_CreateSurface((int)w, (int)h, SDL_PIXELFORMAT_ABGR8888);
    if (!s) return;
    for (u32 y = 0; y < h; y++) {
        u32 *row = (u32 *)((u8 *)s->pixels + (size_t)y * s->pitch);
        for (u32 x = 0; x < w; x++) {
            u32 c = px[y * w + x], a = c >> 24;
            a = a >= 0x80 ? 255 : a * 255 / 128;
            row[x] = (c & 0xFFFFFF) | a << 24;
        }
    }
    if (!SDL_SavePNG(s, path)) rt_log("tex", "%s: %s", path, SDL_GetError());
    SDL_DestroySurface(s);
}

/* The replacement for a texture: new RGBA pixels (malloc'd, GS alpha) and their size, or NULL. */
u32 *texpack_find(u64 name, u32 *w, u32 *h) {
    if (!inited) init();
    if (!nnames || !bsearch(&name, names, nnames, sizeof *names, cmp_u64)) return NULL;
    Loaded *l = NULL;
    for (u32 i = 0; i < nloaded; i++)
        if (loaded[i].name == name) l = &loaded[i];
    if (!l) {
        char path[1200];
        snprintf(path, sizeof path, "%s/%016llx.png", dir, (unsigned long long)name);
        SDL_Surface *s = SDL_LoadPNG(path), *c = s ? SDL_ConvertSurface(s, SDL_PIXELFORMAT_ABGR8888) : NULL;
        if (s) SDL_DestroySurface(s);
        if (nloaded == cap_loaded) loaded = realloc(loaded, (cap_loaded = cap_loaded ? cap_loaded * 2 : 64) * sizeof *loaded);
        l = &loaded[nloaded++];
        *l = (Loaded){name, 0, 0, NULL};
        if (!c || c->w > 8192 || c->h > 8192) {
            rt_log("tex", "%s: %s", path, c ? "larger than 8192" : SDL_GetError());
            if (c) SDL_DestroySurface(c);
            return NULL;
        }
        l->w = (u32)c->w;
        l->h = (u32)c->h;
        l->px = malloc((size_t)l->w * l->h * 4);
        for (u32 y = 0; y < l->h; y++) {
            const u32 *row = (const u32 *)((const u8 *)c->pixels + (size_t)y * c->pitch);
            for (u32 x = 0; x < l->w; x++) {
                u32 p = row[x], a = p >> 24;
                l->px[y * l->w + x] = (p & 0xFFFFFF) | ((a * 128 + 127) / 255) << 24;
            }
        }
        SDL_DestroySurface(c);
        rt_log("tex", "replaced %016llx (%ux%u)", (unsigned long long)name, l->w, l->h);
    }
    if (!l->px) return NULL;
    u32 *out = malloc((size_t)l->w * l->h * 4);
    memcpy(out, l->px, (size_t)l->w * l->h * 4);
    *w = l->w;
    *h = l->h;
    return out;
}
