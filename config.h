#ifndef CONFIG_H
#define CONFIG_H

#define MOD Mod4Mask
#define SHIFT ShiftMask

//static const unsigned int gap = 8;
//static float splitratio = 0.6;

const char* term[]    = {"ns",                 0};
const char* volup[]   = {"pamixer", "-i", "2", 0};
const char* voldown[] = {"pamixer", "-d", "2", 0};
const char* volmute[] = {"pamixer", "-t",      0};
const char* wallpaper = "/home/zrchx/Pictures/Wallpapers/Waves/Wallaper-1.png";

static struct key keys[] = {
/* modifier   key    function    argument */
  {MOD|SHIFT, XK_q,  closewm,      {0}},

  {MOD,      XK_z,   win_kill,   {0}},
  {MOD,      XK_c,   win_center, {0}},
  {MOD,      XK_f,   win_fs,     {0}},

  {MOD,       XK_Tab, win_next,   {0}},
  {MOD|SHIFT, XK_Tab, win_prev,   {0}},

  {MOD, XK_Return, run, {.com = term}},

  {0,   XF86XK_AudioRaiseVolume,  run, {.com = volup}},
  {0,   XF86XK_AudioLowerVolume,  run, {.com = voldown}},
  {0,   XF86XK_AudioMute,         run, {.com = volmute}},

  {MOD,           XK_1, ws_go,     {.i = 1}},
  {MOD|ShiftMask, XK_1, win_to_ws, {.i = 1}},
  {MOD,           XK_2, ws_go,     {.i = 2}},
  {MOD|ShiftMask, XK_2, win_to_ws, {.i = 2}},
  {MOD,           XK_3, ws_go,     {.i = 3}},
  {MOD|ShiftMask, XK_3, win_to_ws, {.i = 3}},
  {MOD,           XK_4, ws_go,     {.i = 4}},
  {MOD|ShiftMask, XK_4, win_to_ws, {.i = 4}},
  {MOD,           XK_5, ws_go,     {.i = 5}},
  {MOD|ShiftMask, XK_5, win_to_ws, {.i = 5}},
  {MOD,           XK_6, ws_go,     {.i = 6}},
  {MOD|ShiftMask, XK_6, win_to_ws, {.i = 6}},
};

#endif
