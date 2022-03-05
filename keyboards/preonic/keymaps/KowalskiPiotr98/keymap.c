#include QMK_KEYBOARD_H
#include "custom.c"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT_ortho_5x12(
        KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_BSPC,
        KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_DEL,
        KC_ESC, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT,
        KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT,
        KC_LCTL, KC_LGUI, KC_LALT, MO(2), MO(1), KC_SPC, KC_SPC, MO(3), MO(4), KC_RALT, KC_RCTL, KC_ENT),
	[1] = LAYOUT_ortho_5x12(
        _____, _____, _____, _____, _____, _____, _____, _____, _____, _____, _____, _____,
        _____, _____, _____, _____, _____, _____, KC_WH_U, _____, _____, _____, _____, _____,
        _____, _____, KC_BTN3, KC_BTN2, KC_BTN1, _____, KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R, _____, _____,
        KC_TRNS, _____, _____, _____, _____, _____, KC_WH_D, _____, _____, _____, _____, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, _____, KC_TRNS, _____, _____, _____, _____, KC_TRNS, KC_TRNS, _____),
	[2] = LAYOUT_ortho_5x12(
        _____, _____, _____, _____, _____, _____, _____, _____, _____, _____, _____, _____,
        KC_VOLU, _____, _____, _____, _____, _____, _____, KC_HOME, KC_END, KC_PGUP, KC_PGDN, _____,
        KC_VOLD, _____, _____, _____, _____, _____, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, _____, _____,
        KC_TRNS, _____, _____, _____, _____, _____, _____, _____, _____, _____, _____, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, _____, _____, _____, _____, _____, KC_TRNS, KC_TRNS, _____),
	[3] = LAYOUT_ortho_5x12(
        KC_F1, _____, _____, _____, _____, _____, _____, _____, _____, _____, _____, _____,
        _____, _____, _____, _____, _____, _____, _____, _____, _____, _____, _____, _____,
        _____, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12,
        KC_TRNS, _____, _____, _____, _____, _____, _____, _____, _____, _____, _____, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, _____, _____, _____, _____, KC_TRNS, _____, KC_TRNS, KC_TRNS, _____),
	[4] = LAYOUT_ortho_5x12(
        _____, _____, _____, _____, _____, _____, _____, _____, _____, KC_MINS, KC_EQL, _____,
        _____, Nequal, _____, _____, _____, _____, _____, _____, Lambda, KC_LBRC, KC_RBRC, KC_BSLS,
        _____, _____, _____, _____, _____, _____, _____, _____, _____, _____, _____, _____,
        KC_TRNS, _____, _____, _____, _____, _____, _____, _____, _____, _____, _____, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, MO(5), _____, _____, _____, _____, KC_TRNS, KC_TRNS, KC_TRNS, _____),
	[5] = LAYOUT_ortho_5x12(
        RGB_TOG, _____, _____, _____, _____, _____, _____, _____, _____, _____, _____, _____,
        RGB_MOD, RGB_HUI, RGB_SAI, RGB_VAI, RGB_SPI, RGB_M_P, RGB_M_B, RGB_M_R, _____, _____, _____, _____,
        RGB_RMOD, RGB_HUD, RGB_SAD, RGB_VAD, RGB_SPD, RGB_M_SW, RGB_M_SN, RGB_M_K, _____, _____, _____, _____,
        _____, _____, _____, _____, _____, RGB_M_X, RGB_M_G, RGB_M_T, _____, _____, _____, _____,
        _____, _____, _____, KC_TRNS, _____, _____, _____, _____, KC_TRNS, _____, _____, _____)
};

