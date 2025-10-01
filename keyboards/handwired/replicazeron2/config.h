/* Copyright 2023 9R
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

#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET // Activates the double-tap behavior
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 200U // Timeout window in ms in which the double tap can occur.
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_LED GP25 // Specify a optional status led by GPIO number which blinks when entering the bootloader

#define NKRO_DEFAULT_ON true

/* I2C Config */
#define I2C_DRIVER I2CD1
#define I2C1_SDA_PIN GP2
#define I2C1_SCL_PIN GP3

//#define STATUS_LED_A_PIN B13
//#define STATUS_LED_B_PIN B12

#define JOYSTICK_DEBUG
#define ANALOG_AXIS_PIN_X GP27
#define ANALOG_AXIS_PIN_Y GP28

#define THUMBSTICK_DEBUG

/* rgb indicadors*/
#define RGBINDICATORS
#define RGBLIGHT_LAYERS
#define RGBLIGHT_LAYERS_RETAIN_VAL
#define RGBLIGHT_LAYERS_OVERRIDE_RGB_OFF

/* joystick configuration */
#define JOYSTICK_BUTTON_COUNT 32
#define JOYSTICK_AXIS_COUNT 2
#define JOYSTICK_AXIS_RESOLUTION 10

#define _DEADZONE 60  // 0 to _SHIFTZONE-1
#define _SHIFTZONE 350  // _DEADZONE+1 to 600
#define _THUMBSTICK_ROTATION 80 //degrees, adjusts forward direction

#define _Xrest 570
#define _Yrest 570
#define _Xmin 210
#define _Ymin 50
#define _Xmax 1023
#define _Ymax 1023

/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

#define DYNAMIC_KEYMAP_LAYER_COUNT 5