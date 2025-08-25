/**
 * Copyright 2022 Charly Delay <charly@codesink.dev> (@0xcharly)
 * Copyright 2023 casuanoob <casuanoob@hotmail.com> (@casuanoob)
 * Copyright 2025 George Norton (@george-norton)
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

/* Handedness. */
// #define SPLIT_HAND_PIN GP29
// #define SPLIT_HAND_PIN_LOW_IS_LEFT // High -> right, Low -> left.

/* VBUS detection. */
// #define USB_VBUS_PIN GP19

/* CRC. */
#define CRC8_USE_TABLE
#define CRC8_OPTIMIZE_SPEED

#define I2C_DRIVER I2CD1
#define I2C_DRIVER_ID 1
#define I2C1_SDA_PIN GP2
#define I2C1_SCL_PIN GP3
#define I2C1_CLOCK_SPEED 1000000
#define DIGITIZER_MOTION_PIN GP11
#define DIGITIZER_MOTION_PIN_ACTIVE_LOW yes
#define PROCYON_42_50

/* Reset. */
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET
// #define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_LED GP17
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 500U

// Reduce soft serial speed: Work around rp2040 issues
// #define SELECT_SOFT_SERIAL_SPEED 4
/* Full duplex serial communication */
// #define SOFT_SERIAL_PIN GP0 // find it enabled in keyboard.json" `"split.soft_serial_pin": "GP0"`
#define SERIAL_USART_RX_PIN GP1 // find it enabled in keyboard.json" `"split.serial_usart_rx_pin": "GP1"`
#define SERIAL_USART_FULL_DUPLEX // find it enabled in keyboard.json" `"split.serial_usart_full_duplex": true`

// #define SPLIT_USB_DETECT
// #define MASTER_LEFT

// left
#define MATRIX_COL_PINS { GP8, GP7, GP5, GP13, GP9 } // find it enabled in keyboard.json" `"matrix_pins.cols": ["GP8", "GP7", "GP5", "GP13", "GP9"]`
#define MATRIX_ROW_PINS { GP6, GP12, GP18, GP17 } // find it enabled in keyboard.json" `"matrix_pins.rows": ["GP6", "GP12", "GP18", "GP17"]`
// right
#define MATRIX_COL_PINS_RIGHT { GP6, GP7, GP8, GP9, GP10 } // find it enabled in keyboard.json" `"matrix_pins.right.cols": ["GP6", "GP7", "GP8", "GP9", "GP10"]`
#define MATRIX_ROW_PINS_RIGHT { GP12, GP13, GP17, GP18 } // find it enabled in keyboard.json" `"matrix_pins.right.rows": ["GP12", "GP13", "GP17", "GP18"]`

#define DYNAMIC_KEYMAP_LAYER_COUNT 4
// #define ENCODER_A_PINS { GP14 } // find it enabled in keyboard.json" `"encoder.rotary": [{"pin_a": "GP14", "pin_b": "GP16"}]`
// #define ENCODER_B_PINS { GP16 } // find it enabled in keyboard.json" `"encoder.rotary": [{"pin_a": "GP14", "pin_b": "GP16"}]`
