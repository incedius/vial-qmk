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

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_BASE] = LAYOUT(
    //  little  |   ring            | middle     | index     | 5way-dpad     |-finger
		KC_ESC, KC_M, KC_I, KC_G, KC_B, KC_H,
		KC_RGHT, KC_4, KC_6, KC_7, KC_8, KC_1,
		KC_0, KC_DOWN, KC_9, KC_ESC, KC_F1, KC_2,
		KC_F2, KC_F4, KC_LEFT, KC_F3, KC_F, KC_3,
		KC_J, KC_BTN3, KC_F5, KC_UP, KC_BTN4, KC_5,
		KC_TAB, TG(_SHOOTER), KC_BSLS, KC_LSFT, JOYMODE, JOYMODE,
		KC_NO, KC_S, KC_A, KC_W, KC_D, KC_NO
    //  ^side_l    | ^case         | ^thumb     |^side_r    |^analog click <= special row mapping
    ),

    [_SHOOTER] = LAYOUT(
        TG(_SHOOTER), KC_LCTL, KC_LGUI, KC_TAB, KC_ACL0, KC_LOPT,
KC_BTN1, KC_D, KC_A, KC_R, KC_S, KC_Z,
KC_G, KC_BTN2, KC_T, KC_Q, KC_W, KC_X,
KC_F, KC_B, KC_LCTL, KC_P, KC_LSFT, KC_C,
KC_F1, KC_F2, KC_F4, KC_SPC, KC_F3, KC_V,
KC_TAB, TG(_MISC), KC_LCTL, KC_BSPC, TG(_SHOOTER), JOYMODE,
KC_NO, KC_NO, KC_LOPT, KC_NO, KC_SPC, KC_NO
    ),

    [_MISC] = LAYOUT(
		KC_NO, KC_NO, KC_NO, KC_NO, KC_ENT, KC_NO,
		KC_DOWN, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
		KC_NO, KC_LEFT, KC_NO, KC_NO, KC_NO, KC_NO,
		KC_NO, KC_NO, KC_UP, KC_NO, KC_NO, KC_NO,
		KC_NO, KC_NO, KC_NO, KC_RGHT, KC_NO, KC_NO,
		KC_NO, TG(_JOYSTICK), KC_NO, KC_NO, KC_NO, JOYMODE,
		KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_NO
    ),

    [_JOYSTICK] = LAYOUT(
        //  little  | ring       | middle | index           | 5way-dpad | -finger
        0x7400, 0x7401, 0x7402, 0x7404, KC_NO, 0x7403,
0x741f, 0x7408, 0x740a, 0x740b, 0x740c, 0x7405,
0x740e, 0x741d, 0x740d, 0x740f, 0x7410, 0x7406,
0x7411, 0x7413, 0x741c, 0x7412, 0x7419, 0x7407,
0x7415, 0x7416, 0x7418, 0x741e, 0x7417, 0x7409,
0x7414, TG(_SETTINGS), 0x741b, 0x741a, KC_NO, JOYMODE,
KC_NO, KC_D, KC_A, KC_W, KC_S, KC_NO
    ),

    [_SETTINGS] = LAYOUT(
		RGB_M_P, RGB_M_B, RGB_M_K, RGB_M_T, KC_NO, 0x7c03,
KC_DOWN, RGB_MOD, KC_NO, KC_NO, KC_NO, KC_NO,
RGB_SAD, KC_LEFT, RGB_SAI, KC_NO, KC_NO, KC_NO,
KC_NO, RGB_VAD, KC_UP, RGB_VAI, AUTORUN, RGB_TOG,
JOYMODE, KC_NO, RGB_HUD, KC_RGHT, RGB_HUI, RGB_RMOD,
KC_NO, TO(_BASE), KC_NO, KC_NO, KC_NO, JOYMODE,
KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_NO
    )
};
