/*
 * The game's texts drawn with a font file (TTF/OTF), at 4x their size.
 *
 * The game writes each text into a picture of its own on the EE: a canvas of 8-bit texels (high
 * nibble a colour row of the palette, low nibble the ink's strength, 0 = none), one glyph at a time
 * by 0x00155E40 (canvas, glyph's 4-bit pixels, x, y, width, height, colour) at canvas+0x174 +
 * y * stride (canvas+0x188) + 2 * x, from FONT\FONT.BIN (an FJF of 1693 TIM2 glyphs, 22 pixels
 * high; the character -> glyph tables are {code, glyph} pairs sorted by code at 0x00418A40 (1532
 * glyphs) and 0x0041A240 (161 more, numbered after them; see 0x00146AA0)). The canvas then goes to
 * the GS as a PSMT8 texture with its palette.
 *
 * Here every glyph written is remembered with its canvas (the character from the tables read
 * backwards), and when the GS decodes an 8-bit texture (gs.c) whose texels are exactly those of a
 * remembered canvas, it gets a picture 4x as large instead: the same characters drawn with the
 * font file in the same boxes (the game's layout, wrapping and colours kept; each glyph centred in
 * its box, on the same baseline), coloured through the texture's own palette. A texture that is not
 * exactly a canvas of glyphs keeps the game's pixels.
 *
 * The font: SSTHEH_FONT=<file>, or the first .ttf/.otf in ~/.local/share/sstheh/fonts/, or in fonts/
 * next to the program (or one folder up: the repository's fonts/, where tools/fetch_font.sh puts M PLUS Rounded 1c Bold, OFL);
 * without one (or without FreeType at build time) nothing changes. SSTHEH_FONT=0: the disc's font.
 */
#include <dirent.h>
#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include <time.h>
#include <unistd.h>

#include "hle.h"
#include "platform.h"

#ifdef SSTHEH_FREETYPE
#include <ft2build.h>
#include FT_FREETYPE_H
#endif

#define SCALE 4
#define NGLYPH 1693
#define TABLE0 D_CHARS0
#define TABLE1 D_CHARS1
#define MAXCANVAS 48
#define MAXPLACED 512
#define BASELINE 18.5f                  /* in a 22-pixel glyph box, from its top */
#define CAP 17.0f                       /* height of a capital */

void display_config_path(char *p, size_t n, const char *name);     /* display.c */

typedef struct {
    u32 off;                            /* in the canvas */
    u16 w, h, glyph, code;
    u8 colour;
    u8 px[176];                         /* the glyph's 4-bit pixels as written (w * h / 2 bytes) */
} Placed;

typedef struct {
    u32 buf, stride, stamp;
    u32 n;
    Placed *p;                          /* MAXPLACED */
    u64 drawn_key;                      /* the glyphs (and texture size) drawn_idx was drawn for */
    u8 *drawn_idx;                      /* the font's picture as palette indices: a new palette only maps them */
    s32 bx0, by0, bx1, by1;             /* drawn_idx's area in the 4x picture (outside it: index 0) */
    u64 exp_key, exp_hash;              /* the glyphs (and texture size) exp_hash is for: the hash of the */
} Canvas;                               /* texels they make (expected()), to find a canvas in a texture at once */

static pthread_mutex_t lock = PTHREAD_MUTEX_INITIALIZER;
static Canvas canvas[MAXCANVAS], previous[MAXCANVAS];   /* previous: the text before the last clear */
static u32 stamp;
static int state = -1;                  /* -1 not decided, 0 off, 1 on */
#ifdef SSTHEH_FREETYPE
static char font_path[1024];
#endif

static int debug = -1;
static u16 code_of[NGLYPH];             /* glyph -> character, 0: none */
static u32 font_base;                   /* FONT.BIN in the EE's memory */

/* ---------------------------------------------------------------------------------- set-up */

#ifdef SSTHEH_FREETYPE
static int has_ext(const char *n, const char *e) {
    size_t a = strlen(n), b = strlen(e);
    return a > b && !strcasecmp(n + a - b, e);
}

/* the first .ttf/.otf in dir, by name */
static int font_in(const char *dir) {
    DIR *d = opendir(dir);
    if (!d) return 0;
    char best[256] = "";
    for (struct dirent *de; (de = readdir(d));)
        if ((has_ext(de->d_name, ".ttf") || has_ext(de->d_name, ".otf")) && (!best[0] || strcmp(de->d_name, best) < 0))
            snprintf(best, sizeof best, "%s", de->d_name);
    closedir(d);
    if (!best[0]) return 0;
    snprintf(font_path, sizeof font_path, "%s/%s", dir, best);
    return 1;
}
#endif

/* The font file: SSTHEH_FONT, else ~/.local/share/sstheh/fonts/, else fonts/ next to the program
 * (a release) or one folder up (build/sstheh in the repository). */
static void decide(void) {
    if (state >= 0) return;
    state = 0;
#ifdef SSTHEH_FREETYPE
    const char *e = getenv("SSTHEH_FONT");
    if (e && !strcmp(e, "0")) return;
    if (e && *e) snprintf(font_path, sizeof font_path, "%s", e);
    else {
        char dir[1024], exe[1024];
        display_config_path(dir, sizeof dir, "fonts");
        int found = font_in(dir);
        if (!found && !platform_exe_dir(exe, sizeof exe)) {
            if (snprintf(dir, sizeof dir, "%s/fonts", exe) < (int)sizeof dir) found = font_in(dir);
            if (!found && snprintf(dir, sizeof dir, "%s/../fonts", exe) < (int)sizeof dir) found = font_in(dir);
        }
        if (!found) return;
    }
    FILE *f = fopen(font_path, "rb");
    if (!f) { rt_log("font", "cannot open %s: the disc's font", font_path); return; }
    fclose(f);
    state = 1;
    rt_log("font", "texts drawn with %s", font_path);
#endif
}

int textfont_active(void) {
    decide();
    return state == 1;
}

/* the character of each glyph, from the game's two tables read backwards */
static void read_tables(Ctx *c) {
    static int done;
    if (done) return;
    done = 1;
    u32 n0 = rd16(c, TABLE0), n1 = rd16(c, TABLE1);
    for (u32 i = 1; i <= n0; i++) {
        s16 g = (s16)rd16(c, TABLE0 + 4 * i + 2);
        if (g >= 0 && g < NGLYPH && !code_of[g]) code_of[g] = rd16(c, TABLE0 + 4 * i);
    }
    for (u32 i = 1; i <= n1; i++) {
        s32 g = (s16)rd16(c, TABLE1 + 4 * i + 2) + (s32)n0;
        if (g >= 0 && g < NGLYPH && !code_of[g]) code_of[g] = rd16(c, TABLE1 + 4 * i);
    }
}

/* which glyph the pixels at src are: they follow its TIM2 headers (0x10 + 0x30 bytes) inside FONT.BIN */
static int glyph_of(Ctx *c, u32 src) {
    u32 tim = src - 0x40;
    if (rd32(c, tim) != 0x324D4954) return -1;                  /* "TIM2" */
    if (!font_base || rd32(c, font_base) != 0x00464A46 || rd32(c, font_base + 4) != NGLYPH) {
        font_base = 0;
        for (u32 a = tim & ~15u; a + 0x70000 > tim && a >= 0x100000; a -= 16)
            if (rd32(c, a) == 0x00464A46 && rd32(c, a + 4) == NGLYPH) { font_base = a; break; }
        if (!font_base) return -1;
    }
    u32 rel = tim - font_base, lo = 0, hi = NGLYPH - 1;
    while (lo < hi) {
        u32 mid = (lo + hi + 1) / 2;
        if (rd32(c, font_base + 8 + 4 * mid) <= rel) lo = mid;
        else hi = mid - 1;
    }
    return rd32(c, font_base + 8 + 4 * lo) == rel ? (int)lo : -1;
}

/* ------------------------------------------------------------------------- the game's writes */

/* is the placed glyph still in the canvas (not cleared or written over)? */
static int still_there(Ctx *c, const Canvas *cv, const Placed *p) {
    for (u32 r = 0; r < p->h; r++)
        for (u32 x = 0; x < p->w; x++) {
            u8 v = (p->px[r * (p->w / 2) + x / 2] >> ((x & 1) * 4)) & 15;
            if (v && rd8(c, cv->buf + p->off + r * cv->stride + x) != (u8)((p->colour << 4) | v)) return 0;
        }
    return 1;
}

/* 0x00155E40 (before): a glyph written into a canvas */
void hle_text_blit(Ctx *c) {
    if (!textfont_active()) return;
    u32 ctx = RW(4), src = RW(5);
    s32 x = RSW(6), y = RSW(7), w = RSW(8), h = RSW(9);
    u32 colour = RW(10) & 15;
    if (w <= 0 || h <= 0 || w * h / 2 > 176 || x < 0 || y < 0) return;
    read_tables(c);
    if (debug < 0) debug = getenv("SSTHEH_FONT_DEBUG") != NULL;
    int g = glyph_of(c, src);
    if (debug) rt_log("font", "blit ctx %08X src %08X glyph %d '%c' at %d,%d %dx%d colour %u buf %08X stride %u", ctx, src, g,
                      g >= 0 && code_of[g] < 128 ? code_of[g] : '?', x, y, w, h, colour, rd32(c, ctx + 0x174), rd32(c, ctx + 0x188));
    if (g < 0) return;
    u32 buf = rd32(c, ctx + 0x174), stride = rd32(c, ctx + 0x188);
    if (!buf || !stride || stride > 1024) return;
    pthread_mutex_lock(&lock);
    Canvas *cv = NULL;
    for (int i = 0; i < MAXCANVAS; i++)
        if (canvas[i].buf == buf) { cv = &canvas[i]; break; }
    if (!cv) {                                                  /* a new canvas, or the oldest one's place */
        int old = 0;
        for (int i = 1; i < MAXCANVAS; i++)
            if (canvas[i].stamp < canvas[old].stamp) old = i;
        cv = &canvas[old];
        if (!cv->p) cv->p = malloc(MAXPLACED * sizeof *cv->p);
        cv->buf = buf;
        cv->n = 0;
        previous[old].buf = 0;
    }
    if (cv->stride != stride) cv->n = 0;
    cv->stride = stride;
    cv->stamp = ++stamp;
    if (cv->n && !still_there(c, cv, &cv->p[0])) {             /* cleared since: a new text */
        int i = (int)(cv - canvas);
        Canvas *pv = &previous[i];
        if (!pv->p) pv->p = malloc(MAXPLACED * sizeof *pv->p);
        pv->buf = cv->buf;
        pv->stride = cv->stride;
        pv->n = cv->n;
        memcpy(pv->p, cv->p, cv->n * sizeof *cv->p);
        cv->n = 0;
    }
    u32 off = (u32)y * stride + 2 * (u32)x;
    Placed *p = NULL;
    for (u32 i = 0; i < cv->n; i++)
        if (cv->p[i].off == off) { p = &cv->p[i]; break; }       /* written again at the same place */
    if (!p && cv->n < MAXPLACED) p = &cv->p[cv->n++];
    if (p) {
        p->off = off;
        p->w = (u16)w;
        p->h = (u16)h;
        p->glyph = (u16)g;
        p->code = code_of[g];
        p->colour = (u8)colour;
        for (s32 i = 0; i < w * h / 2; i++) p->px[i] = rd8(c, src + (u32)i);
    }
    pthread_mutex_unlock(&lock);
}

/* ------------------------------------------------------------------------------- the GS side */

#ifdef SSTHEH_FREETYPE
static FT_Library ft;
static FT_Face face;
static int px_size;

static int font_open(void) {
    static int tried;
    if (tried) return face != NULL;
    tried = 1;
    if (FT_Init_FreeType(&ft) || FT_New_Face(ft, font_path, 0, &face)) {
        rt_log("font", "FreeType cannot read %s", font_path);
        face = NULL;
        return 0;
    }
    FT_Select_Charmap(face, FT_ENCODING_UNICODE);
    /* the size whose capital H is CAP * SCALE pixels high */
    FT_Set_Pixel_Sizes(face, 0, 100);
    int hh = 0;
    if (!FT_Load_Char(face, 'H', FT_LOAD_DEFAULT)) hh = (int)(face->glyph->metrics.height >> 6);
    px_size = hh > 0 ? (int)(100.0f * CAP * SCALE / (float)hh + 0.5f) : (int)(22 * SCALE * 0.8f);
    FT_Set_Pixel_Sizes(face, 0, (FT_UInt)px_size);
    return 1;
}
#endif

#ifdef SSTHEH_FREETYPE
/* The canvas's texels as the game would have written them, in a texture tw x th: the canvas's rows
 * (stride texels) are the texture's first columns (a 448-texel canvas in a 512-texel texture). */
static void expected(const Canvas *cv, u8 *e, u32 tw, u32 th) {
    memset(e, 0, (size_t)tw * th);
    for (u32 i = 0; i < cv->n; i++) {
        const Placed *p = &cv->p[i];
        u32 px = p->off % cv->stride, py = p->off / cv->stride;
        for (u32 r = 0; r < p->h; r++)
            for (u32 x = 0; x < p->w; x++) {
                u8 v = (p->px[r * (p->w / 2) + x / 2] >> ((x & 1) * 4)) & 15;
                if (v) e[(py + r) * tw + px + x] = (u8)((p->colour << 4) | v);
            }
    }
}

static int fits(const Canvas *cv, u32 tw, u32 th) {
    if (!cv->buf || !cv->n || cv->stride > tw) return 0;
    for (u32 i = 0; i < cv->n; i++) {
        const Placed *p = &cv->p[i];
        if ((p->off % cv->stride) + p->w > cv->stride || p->off / cv->stride + p->h > th) return 0;
    }
    return 1;
}

/* the texels of the canvas's part of the texture match */
static int same(const Canvas *cv, const u8 *e, const u8 *texels, u32 tw, u32 th) {
    for (u32 y = 0; y < th; y++)
        if (memcmp(e + y * tw, texels + y * tw, cv->stride)) return 0;
    return 1;
}

/* a hash of the texture's first `stride` columns */
static u64 region_hash(const u8 *t, u32 tw, u32 th, u32 stride) {
    u64 h = 0x9E3779B97F4A7C15ull ^ stride;
    for (u32 y = 0; y < th; y++) {
        const u8 *r = t + (size_t)y * tw;
        u32 x = 0;
        for (; x + 8 <= stride; x += 8) {
            u64 w;
            memcpy(&w, r + x, 8);
            h = (h ^ w) * 0xFF51AFD7ED558CCDull;
            h ^= h >> 29;
        }
        for (; x < stride; x++) h = (h ^ r[x]) * 0x100000001B3ull;
    }
    return h;
}
#endif

#ifdef SSTHEH_FREETYPE
/* The canvas drawn with the font, SCALE times as large, through the palette (the texture's columns
 * past the canvas: its own texels, enlarged). The game's glyphs are a light core inside a dark rim:
 * the palette's 16 strengths are a ramp from a see-through dark (1, 2) through black (3) to white
 * (15). So each character's coverage (squeezed across, when wider than the game's own glyph, to keep
 * its spacing) makes the core, 3..15, and the coverage spread by RIM pixels around it the rim, 1..3. */
#define RIM (SCALE + 1)
static u64 glyphs_key(const Canvas *cv, u32 tw, u32 th) {
    u64 k = 1469598103934665603ull ^ tw ^ ((u64)th << 20) ^ ((u64)cv->stride << 40);
    for (u32 i = 0; i < cv->n; i++) {
        const Placed *p = &cv->p[i];
        u64 v = p->off ^ ((u64)p->glyph << 24) ^ ((u64)p->colour << 40) ^ ((u64)p->w << 48);
        k = (k ^ v) * 1099511628211ull;
    }
    return k;
}

/* One character drawn with the font for a box w texels wide, kept for the next texts (a text that
   changes a letter at a time, or comes back, is put together from these): the coverage (fill) and
   the coverage spread over a disc of RIM pixels (rim; spreading each glyph and keeping the largest
   is the same as spreading their union), SCALE times as large, at (ox, oy) from the box's top left. */
typedef struct {
    u32 key;                            /* character | box width << 16; 0: free */
    s32 ox, oy;
    u32 w, h;
    u8 *fill, *rim;                     /* NULL: not in the font (the game's glyph is used) */
} Tile;
#define NTILE 1024
static Tile tiles[NTILE];

static const Tile *tile_for(u16 code, u16 box_w) {
    u32 key = code | (u32)box_w << 16;
    Tile *t = &tiles[(key * 2654435761u) >> 22];
    if (t->key == key) return t;
    free(t->fill);
    free(t->rim);
    memset(t, 0, sizeof *t);
    t->key = key;
    FT_UInt gi = code ? FT_Get_Char_Index(face, code) : 0;
    if (!gi || FT_Load_Glyph(face, gi, FT_LOAD_DEFAULT)) return t;
    float adv = (float)face->glyph->advance.x / 64.0f, room = (float)(box_w - 2) * SCALE;
    float sx = adv > room && adv > 0 ? room / adv : 1.0f;
    FT_Matrix m = {(FT_Fixed)(sx * 65536.0f), 0, 0, 0x10000};
    FT_Set_Transform(face, &m, NULL);
    int bad = FT_Load_Glyph(face, gi, FT_LOAD_RENDER);
    FT_Set_Transform(face, NULL, NULL);
    if (bad) return t;
    FT_GlyphSlot g = face->glyph;
    s32 bw = box_w * SCALE;
    t->ox = (bw - (s32)(g->advance.x >> 6)) / 2 + g->bitmap_left - RIM;
    t->oy = (s32)(BASELINE * SCALE) - g->bitmap_top - RIM;
    t->w = g->bitmap.width + 2 * RIM;
    t->h = g->bitmap.rows + 2 * RIM;
    t->fill = calloc((size_t)t->w * t->h, 1);
    t->rim = calloc((size_t)t->w * t->h, 1);
    for (u32 r = 0; r < g->bitmap.rows; r++)
        memcpy(t->fill + (r + RIM) * t->w + RIM, g->bitmap.buffer + r * (u32)g->bitmap.pitch, g->bitmap.width);
    static s32 disc[(2 * RIM + 1) * (2 * RIM + 1)][2];
    static int nd;
    if (!nd)
        for (s32 dy = -RIM; dy <= RIM; dy++)
            for (s32 dx = -RIM; dx <= RIM; dx++)
                if (dx * dx + dy * dy <= RIM * RIM) { disc[nd][0] = dx; disc[nd][1] = dy; nd++; }
    u32 W = t->w;
    for (u32 Y = RIM; Y + RIM < t->h; Y++)
        for (u32 X = RIM; X + RIM < W; X++) {
            u8 v = t->fill[Y * W + X];
            if (!v) continue;
            if (v == 255 && t->fill[Y * W + X - 1] == 255 && t->fill[Y * W + X + 1] == 255 &&
                t->fill[(Y - 1) * W + X] == 255 && t->fill[(Y + 1) * W + X] == 255) continue;   /* inside: its edges spread as far */
            for (int k = 0; k < nd; k++) {
                u32 o = (Y + (u32)disc[k][1]) * W + X + (u32)disc[k][0];
                if (v > t->rim[o]) t->rim[o] = v;
            }
        }
    return t;
}

/* The canvas's glyphs drawn with the font into cv->drawn_idx (palette indices), over the area they
   may touch (cv->bx0..): the core 3..15 from the coverage, the rim 1..3 from the spread coverage. */
static void draw_idx(Canvas *cv, u32 tw, u32 th) {
    s32 H = (s32)(th * SCALE), CW = (s32)(cv->stride * SCALE), M = 12 * SCALE;   /* M: how far a glyph may leave its box */
    s32 x0 = CW, y0 = H, x1 = 0, y1 = 0;
    for (u32 i = 0; i < cv->n; i++) {
        const Placed *p = &cv->p[i];
        s32 bx = (s32)(p->off % cv->stride) * SCALE, by = (s32)(p->off / cv->stride) * SCALE;
        if (bx - M < x0) x0 = bx - M;
        if (by - M < y0) y0 = by - M;
        if (bx + p->w * SCALE + M > x1) x1 = bx + p->w * SCALE + M;
        if (by + p->h * SCALE + M > y1) y1 = by + p->h * SCALE + M;
    }
    if (x0 < 0) x0 = 0;
    if (y0 < 0) y0 = 0;
    if (x1 > CW) x1 = CW;
    if (y1 > H) y1 = H;
    if (x1 < x0) x1 = x0;
    if (y1 < y0) y1 = y0;
    s32 BW = x1 - x0, BH = y1 - y0;
    size_t n = (size_t)BW * BH;
    u8 *fill = calloc(n ? n : 1, 1), *col = calloc(n ? n : 1, 1), *raw = calloc(n ? n : 1, 1),
       *rim = calloc(n ? n : 1, 1), *rcol = calloc(n ? n : 1, 1);
    for (u32 i = 0; i < cv->n; i++) {
        const Placed *p = &cv->p[i];
        s32 bx = (s32)(p->off % cv->stride) * SCALE - x0, by = (s32)(p->off / cv->stride) * SCALE - y0, bw = p->w * SCALE;
        const Tile *t = tile_for(p->code, p->w);
        if (t->fill) {
            for (u32 r = 0; r < t->h; r++) {
                s32 Y = by + t->oy + (s32)r;
                if (Y < 0 || Y >= BH) continue;
                for (u32 q = 0; q < t->w; q++) {
                    s32 X = bx + t->ox + (s32)q;
                    if (X < 0 || X >= BW) continue;
                    u32 o = (u32)Y * (u32)BW + (u32)X;
                    u8 f = t->fill[r * t->w + q], g = t->rim[r * t->w + q];
                    if (f > fill[o]) { fill[o] = f; col[o] = p->colour; }
                    if (g > rim[o]) { rim[o] = g; rcol[o] = p->colour; }
                }
            }
        } else {                                               /* not in the font: the game's glyph, enlarged */
            for (u32 r = 0; r < (u32)p->h * SCALE; r++)
                for (u32 q = 0; q < (u32)bw; q++) {
                    s32 X = bx + (s32)q, Y = by + (s32)r;
                    if (X < 0 || Y < 0 || X >= BW || Y >= BH) continue;
                    u32 sx = q / SCALE, sy = r / SCALE;
                    u8 v = (p->px[sy * (p->w / 2) + sx / 2] >> ((sx & 1) * 4)) & 15;
                    u32 o = (u32)Y * (u32)BW + (u32)X;
                    if (v > raw[o]) { raw[o] = v; col[o] = p->colour; }
                }
        }
    }
    free(cv->drawn_idx);
    cv->drawn_idx = malloc(n ? n : 1);
    for (size_t o = 0; o < n; o++) {
        u32 v, c = col[o];
        if (raw[o]) v = raw[o];
        else if (fill[o]) v = 3 + (fill[o] * 12 + 127) / 255;
        else { v = (rim[o] * 3 + 127) / 255; c = rcol[o]; }
        cv->drawn_idx[o] = (u8)(v ? (c << 4) | v : 0);
    }
    cv->bx0 = x0; cv->by0 = y0; cv->bx1 = x1; cv->by1 = y1;
    free(fill);
    free(col);
    free(raw);
    free(rim);
    free(rcol);
}

/* the font's picture through the palette (the glyphs drawn once per text, kept with the canvas; a new
   palette, as in a fade, only maps their area). When the canvas is the texture's whole width, only
   the glyphs' area is made (rect: x, y, w, h), the rest being palette colour 0 (*fill): a 512x256
   text is 8 MB at 4x, most of it see-through. */
static u32 *draw(Canvas *cv, const u8 *texels, u32 tw, u32 th, const u32 *pal, u32 *rect, u32 *fill) {
    u32 W = tw * SCALE, H = th * SCALE, CW = cv->stride * SCALE;
    u64 key = glyphs_key(cv, tw, th);
    if (!cv->drawn_idx || cv->drawn_key != key) {
        draw_idx(cv, tw, th);
        cv->drawn_key = key;
    }
    u32 p0 = pal[0];
    u32 bx0 = (u32)cv->bx0, bx1 = (u32)cv->bx1, by0 = (u32)cv->by0, by1 = (u32)cv->by1, BW = bx1 - bx0, BH = by1 - by0;
    if (CW == W) {
        if (!BW || !BH) { bx0 = by0 = 0; BW = BH = 1; }
        u32 *out = malloc((size_t)BW * BH * 4);
        for (u32 Y = 0; Y < BH; Y++) {
            const u8 *ix = cv->drawn_idx + (size_t)Y * BW;
            u32 *row = out + (size_t)Y * BW;
            if (cv->bx1 > cv->bx0) for (u32 X = 0; X < BW; X++) row[X] = pal[ix[X]];
            else row[0] = p0;
        }
        rect[0] = bx0; rect[1] = by0; rect[2] = BW; rect[3] = BH;
        *fill = p0;
        return out;
    }
    u32 *out = malloc((size_t)W * H * 4);
    for (u32 Y = 0; Y < H; Y++) {
        u32 *row = out + (size_t)Y * W;
        if (Y >= by0 && Y < by1) {
            const u8 *ix = cv->drawn_idx + (size_t)(Y - by0) * BW;
            for (u32 X = 0; X < bx0; X++) row[X] = p0;
            for (u32 X = 0; X < BW; X++) row[bx0 + X] = pal[ix[X]];
            for (u32 X = bx1; X < CW; X++) row[X] = p0;
        } else
            for (u32 X = 0; X < CW; X++) row[X] = p0;
        for (u32 X = CW; X < W; X++) row[X] = pal[texels[(Y / SCALE) * tw + X / SCALE]];
    }
    rect[2] = 0;                                                /* all of it */
    return out;
}
#endif

/* gs.c, decoding an 8-bit texture (texels tw x th, palette of 256): the font's picture, or NULL (rect[2]
   not 0: only rect (x, y, w, h) of it, the rest *fill) */
u32 *textfont_replace(const u8 *texels, u32 tw, u32 th, const u32 *pal, u32 *w_out, u32 *h_out, u32 *rect, u32 *fill) {
#ifdef SSTHEH_FREETYPE
    if (!textfont_active() || !font_open()) return NULL;
    u32 *out = NULL, strides[4], nstrides = 0;
    u64 hashes[4];
    u8 *e = malloc((size_t)tw * th);
    pthread_mutex_lock(&lock);
    for (int k = 0; k < 2 * MAXCANVAS && !out; k++) {
        Canvas *cv = k < MAXCANVAS ? &canvas[k] : &previous[k - MAXCANVAS];
        if (debug && cv->buf && cv->n) rt_log("font", "texture %ux%u vs canvas %08X stride %u, %u glyphs: %s", tw, th, cv->buf, cv->stride, cv->n,
                                              fits(cv, tw, th) ? "fits" : "doesn't fit");
        if (!fits(cv, tw, th)) continue;
        u64 ek = glyphs_key(cv, tw, th);
        if (cv->exp_key != ek) {
            expected(cv, e, tw, th);
            cv->exp_hash = region_hash(e, tw, th, cv->stride);
            cv->exp_key = ek;
        }
        u32 sk = 0;                                             /* the texture's hash for this stride, once */
        while (sk < nstrides && strides[sk] != cv->stride) sk++;
        if (sk == nstrides) {
            if (nstrides == 4) sk = 3;
            else nstrides++;
            strides[sk] = cv->stride;
            hashes[sk] = region_hash(texels, tw, th, cv->stride);
        }
        if (hashes[sk] != cv->exp_hash) continue;
        if (debug) {
            expected(cv, e, tw, th);
            u32 diff = 0;
            for (u32 y = 0; y < th; y++)
                for (u32 x = 0; x < cv->stride; x++) diff += e[y * tw + x] != texels[y * tw + x];
            rt_log("font", "  %u texels differ", diff);
        }
        expected(cv, e, tw, th);                                /* (a hash isn't proof) */
        if (!same(cv, e, texels, tw, th)) continue;
        if (debug)
            for (int r = 0; r < 2; r++)
                rt_log("font", "palette row %d: %08X %08X %08X %08X %08X %08X %08X %08X %08X %08X %08X %08X %08X %08X %08X %08X", r,
                       pal[r*16+0], pal[r*16+1], pal[r*16+2], pal[r*16+3], pal[r*16+4], pal[r*16+5], pal[r*16+6], pal[r*16+7], pal[r*16+8],
                       pal[r*16+9], pal[r*16+10], pal[r*16+11], pal[r*16+12], pal[r*16+13], pal[r*16+14], pal[r*16+15]);
        struct timespec t0, t1;
        clock_gettime(CLOCK_MONOTONIC, &t0);
        out = draw(cv, texels, tw, th, pal, rect, fill);
        clock_gettime(CLOCK_MONOTONIC, &t1);
        if (debug) rt_log("font", "text of %u glyphs drawn (%ux%u) in %.1f ms", cv->n, tw * SCALE, th * SCALE,
                          (t1.tv_sec - t0.tv_sec) * 1e3 + (t1.tv_nsec - t0.tv_nsec) / 1e6);
    }
    pthread_mutex_unlock(&lock);
    free(e);
    if (out) { *w_out = tw * SCALE; *h_out = th * SCALE; }
    return out;
#else
    (void)texels; (void)tw; (void)th; (void)pal; (void)w_out; (void)h_out; (void)rect; (void)fill;
    return NULL;
#endif
}
