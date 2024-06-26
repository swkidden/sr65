# MCU name
MCU = STM32F103

# Bootloader selection
#  BOARD = STM32_F103_STM32DUINO
#  BOOTLOADER=stm32duino
#MCU_LDSCRIPT = STM32F103x8_uf2 
# FIRMWARE_FORMAT = uf2
  BOOTLOADER = vibl
# Build Options
#   change yes to no to disable
#
BOOTMAGIC_ENABLE = yes       # Enable Bootmagic Lite
MOUSEKEY_ENABLE = yes	# Mouse keys
EXTRAKEY_ENABLE = yes	# Audio control and System control
CONSOLE_ENABLE = yes	# Console for debug
COMMAND_ENABLE = yes    # Commands for debug and configuration
NKRO_ENABLE = yes           # Enable N-Key Rollover
# BACKLIGHT_ENABLE = yes
# RGBLIGHT_ENABLE = yes
# SLEEP_LED_ENABLE = yes
# WS2812_DRIVER = spi

# LAYOUTS = ortho_4x12
SRC += uart.c


