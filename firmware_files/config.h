#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */

#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x6060
#define DEVICE_VER      0x0001
#define MANUFACTURER    doryan_and_nm17
#define PRODUCT         Angel Wings
#define DESCRIPTION     Keyboard

/* Key matrix size */

#define MATRIX_ROWS 4
#define MATRIX_COLS 14

/* Key matrix pins */

#define MATRIX_ROW_PINS { D3, D2, F4, F5 }
#define MATRIX_COL_PINS { D1, D0, D4, C6, D7, E6, B4, B5, F6, F7, B1, B3, B2, B6 }

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE


