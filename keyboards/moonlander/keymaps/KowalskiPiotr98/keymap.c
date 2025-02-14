/* Copyright 2020 ZSA Technology Labs, Inc <@zsa>
 * Copyright 2020 Jack Humbert <jack.humb@gmail.com>
 * Copyright 2020 Christopher Courtney, aka Drashna Jael're  (@drashna) <drashna@live.com>
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
#include "version.h"
#include "custom.c"
#include "common.c"
// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_moonlander(
        KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    _______,           _______, KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_BSPC,
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    _______,         _______, KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_DEL,
        KC_ESC, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    _______,           KC_BSPC,  KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
        KC_LSFT, KC_Z, KC_X, KC_C,    KC_V,    KC_B,                                KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
        KC_LCTL, LALT, LGUI, _______, _______,   KC_ENT,    KC_ENT,    KC_RALT,   _______, KC_RALT, KC_RCTL, _______,
                                            KC_SPC,  MO(2), MO(1),           MO(4),  MO(3),  KC_RSFT
    ),

    [1] = LAYOUT_moonlander(
        LinuxSwap,    _______,   _______,   _______,   _______,   _______,   _______,           _______, _______,   _______,   _______,   _______,   _______,  _______,
        _______,    _______,   _______,   _______,   _______,   _______,   _______,           _______, KC_WH_U,   KC_WH_L,      KC_MS_U,   KC_WH_R,   _______,  _______,
        _______,   _______,    KC_BTN3,   KC_BTN2,   KC_BTN1,   _______,   _______,           _______, KC_WH_D, KC_MS_L,   KC_MS_D,   KC_MS_R,   _______,  _______,
        KC_TRNS, _______, KC_MS_ACCEL0, KC_MS_ACCEL1, KC_MS_ACCEL2, _______,                             _______, _______,    _______,    _______,    _______, KC_TRNS,
        KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, _______,          _______,           _______,          _______, _______,  KC_TRNS,    KC_TRNS,  _______,
                                            _______, _______, _______, _______,MO(5), _______
    ),

    [2] = LAYOUT_moonlander(
        _______,    _______,   _______,   _______,   _______,   _______,   _______,           _______, _______,   _______,   _______,   _______,   _______,  _______,
        _______,    _______,   _______,   _______,   _______,   _______,   _______,           _______, KC_END, KC_HOME,   KC_UP,  KC_PGUP,   KC_PGDN,  _______,
        _______,   _______,    _______,   _______,   _______,   _______,   _______,           _______, _______,   KC_LEFT,   KC_DOWN,   KC_RGHT,   _______,  _______,
        KC_TRNS, _______, _______, _______, _______, _______,                             _______, _______,    _______,    _______,    _______, KC_TRNS,
        KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, _______,          _______,           _______,          _______, _______,  KC_TRNS,    KC_TRNS,  _______,
                                                        _______, _______, _______, _______,_______, _______
    ),

    [3] = LAYOUT_moonlander(
        KC_F1,    _______,   _______,   _______,   _______,   _______,   _______,           _______, _______,   _______,   _______,   _______,   _______,  _______,
        _______,    _______,   _______,   _______,   _______,   _______,   _______,           _______, _______,   KC_HOME,   KC_END,   KC_PGUP,   KC_PGDN,  _______,
        _______,   KC_F2,    KC_F3,   KC_F4,   KC_F5,   KC_F6,   _______,           _______, KC_F7,   KC_F8,   KC_F9,   KC_F10,   KC_F11,  KC_F12,
        KC_TRNS, _______, _______, _______, _______, _______,                             _______, _______,    _______,    _______,    _______, KC_TRNS,
        KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, _______,          _______,           _______,          _______, _______,  KC_TRNS,    KC_TRNS,  _______,
        _______, _______, _______, _______,_______, _______
    ),

    [4] = LAYOUT_moonlander(
        _______,    _______,   _______,   _______,   _______,   _______,   _______,           _______, _______,   _______,   _______,   KC_MINS,   KC_EQL,  _______,
        _______,    Nequal,   _______,   _______,   _______,   _______,   _______,           _______, _______,   _______,   Lambda,   KC_LBRC,   KC_RBRC,  KC_BSLS,
        _______,   _______,    _______,   _______,   _______,   _______,   _______,           _______, _______,   _______,   _______,   _______,   _______,  EscQuot,
        KC_TRNS, _______, _______, _______, _______, _______,                             _______, _______,    _______,    _______,    _______, KC_TRNS,
        KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, _______,          _______,           _______,          _______, KC_TRNS,  KC_TRNS,    KC_TRNS,  _______,
        _______, _______, _______, _______,_______, _______
    ),

    [5] = LAYOUT_moonlander(
        RGB_TOG,    _______,   _______,   _______,   _______,   _______,   _______,           _______, _______,   _______,   _______,   _______,   _______,  _______,
        RGB_MOD,    RGB_HUI,   RGB_SAI, RGB_VAI, RGB_SPI, RGB_M_P, RGB_M_B, RGB_M_R, _______,   _______,   _______,   _______,   _______,  _______,
        RGB_RMOD,   RGB_HUD,    RGB_SAD, RGB_VAD, RGB_SPD, RGB_M_SW, RGB_M_SN, RGB_M_K, _______,   _______,   _______,   _______,   _______,  _______,
        KC_TRNS, _______, _______, _______, _______, RGB_M_X, RGB_M_G, RGB_M_T,    _______,    _______,    _______, KC_TRNS,
        KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, _______,          _______,           _______,          _______, KC_TRNS,  KC_TRNS,    KC_TRNS,  _______,
        _______, _______, _______, _______,_______, _______
    ),
};
