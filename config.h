#pragma once

#define EE_HANDS // Store which side is left/right in EEPROM

#define DOUBLE_TAP_SHIFT_TURNS_ON_CAPS_WORD

/* Keyboard Matrix Assignments */
#define MATRIX_ROW_PINS { GP2, GP3, GP4, GP5, GP6, GP7 }
#define MATRIX_COL_PINS { GP29, GP28, GP27, GP26, GP25, GP24, GP23 }
#define MATRIX_COL_PINS_RIGHT { GP22, GP21, GP20, GP19, GP18, GP17, GP16 }

/* Bootloader Reset */
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_LED GP0
// Optional LED blink when entering bootloader - change pin if GP0 unavailable
