#pragma once

// #define HAL_USE_PWM TRUE

// #define HAL_USE_SPI TRUE
#undef  SERIAL_USB_BUFFERS_SIZE
#define SERIAL_USB_BUFFERS_SIZE 256

#undef  SERIAL_BUFFERS_SIZE
#define SERIAL_BUFFERS_SIZE     128
#define HAL_USE_SERIAL TRUE
#include_next <halconf.h>

