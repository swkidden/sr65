
#pragma once

#define FEE_MCU_FLASH_SIZE 64
/* USB Device descriptor parameter */
#define VENDOR_ID       0xAA97
#define PRODUCT_ID      0xAAAC
#define DEVICE_VER      0x0001
#define MANUFACTURER    SR STUDIO
#define PRODUCT         Radiance
/* key matrix size */
#define MATRIX_ROWS 5
#define MATRIX_COLS 15

/* key matrix pins */
#define MATRIX_ROW_PINS { B3, B9, B5, B6, B7 }
#define MATRIX_COL_PINS { B8, B13, B12, B1, B0, A7, A6, A5, A4, A3, A2, B14, C15, C14, C13 }
/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

// enable the nkro when using the VIA.
#define FORCE_NKRO

// fix VIA RGB_light
#define VIA_HAS_BROKEN_KEYCODES

// #define BACKLIGHT_PIN A8
// #define BACKLIGHT_PWM_DRIVER PWMD1
// #define BACKLIGHT_PWM_CHANNEL 1
// #define BACKLIGHT_LEVELS 6
// #define BACKLIGHT_BREATHING
// #define BREATHING_PERIOD 6

/* define if matrix has ghost */
//#define MATRIX_HAS_GHOST

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE    1
#define USB_POLLING_INTERVAL_MS 1
// #define RGBLIGHT_ANIMATIONS
// #define RGB_DI_PIN B15
// #define RGBLED_NUM 9
// #define WS2812_SPI SPID2

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT
 #define SD1_TX_PIN A9
 #define SD1_TX_PAL_MODE 7
 #define SD1_RX_PIN A10
 #define SD1_RX_PAL_MODE 7
