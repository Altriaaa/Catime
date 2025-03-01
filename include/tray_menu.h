#ifndef CLOCK_TRAY_MENU_H
#define CLOCK_TRAY_MENU_H

#include <windows.h>

// 托盘菜单项ID
#define CLOCK_IDM_SHOW_CURRENT_TIME 150
#define CLOCK_IDM_24HOUR_FORMAT 151
#define CLOCK_IDM_SHOW_SECONDS 152
#define CLOCK_IDM_COUNT_UP_START 171
#define CLOCK_IDM_COUNT_UP_RESET 172
#define CLOCK_IDM_COUNTDOWN_START_PAUSE 154
#define CLOCK_IDM_COUNTDOWN_RESET 155
#define CLOCK_IDC_EDIT_MODE 113
#define CLOCK_IDM_SHOW_MESSAGE 121
#define CLOCK_IDM_LOCK_SCREEN 122
#define CLOCK_IDM_SHUTDOWN 123
#define CLOCK_IDM_RESTART 124
#define CLOCK_IDM_BROWSE_FILE 129
#define CLOCK_IDM_RECENT_FILE_1 126
#define CLOCK_IDC_MODIFY_TIME_OPTIONS 156
#define CLOCK_IDC_SET_COUNTDOWN_TIME 173
#define CLOCK_IDC_START_COUNT_UP 175
#define CLOCK_IDC_START_SHOW_TIME 176
#define CLOCK_IDC_START_NO_DISPLAY 174
#define CLOCK_IDC_AUTO_START 160
#define CLOCK_IDC_COLOR_VALUE 1301
#define CLOCK_IDC_COLOR_PANEL 1302
#define CLOCK_IDM_FEEDBACK_GITHUB 137
#define CLOCK_IDM_FEEDBACK_BILIBILI 138
#define CLOCK_IDM_LANG_CHINESE 161
#define CLOCK_IDM_LANG_CHINESE_TRAD 163
#define CLOCK_IDM_LANG_ENGLISH 162
#define CLOCK_IDM_LANG_SPANISH 164
#define CLOCK_IDM_LANG_FRENCH 165
#define CLOCK_IDM_LANG_GERMAN 166
#define CLOCK_IDM_LANG_RUSSIAN 167
#define CLOCK_IDM_LANG_KOREAN 170
#define CLOCK_IDM_UPDATE_GITHUB 134
#define CLOCK_IDM_UPDATE_123PAN 135
#define CLOCK_IDM_UPDATE_LANZOU 136

// 显示托盘菜单
void ShowContextMenu(HWND hwnd);

// 显示颜色菜单
void ShowColorMenu(HWND hwnd);

#endif // CLOCK_TRAY_MENU_H