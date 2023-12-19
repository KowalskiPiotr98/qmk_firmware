#include QMK_KEYBOARD_H
#include "custom.c"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT_ortho_5x12(
        KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_BSPC,
        KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_DEL,
        KC_ESC, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT,
        KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT,
        LCTL, LGUI, KC_LALT, MO(2), MO(1), KC_SPC, KC_RSFT, MO(3), MO(4), KC_RALT, KC_RCTL, KC_ENT),
	[1] = LAYOUT_ortho_5x12(
        LinuxSwap, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, KC_WH_U, KC_WH_L, KC_MS_U, KC_WH_R, _______, _______,
        _______, _______, KC_BTN3, KC_BTN2, KC_BTN1, _______, KC_WH_D, KC_MS_L, KC_MS_D, KC_MS_R, _______, _______,
        KC_TRNS, _______, KC_MS_ACCEL0, KC_MS_ACCEL1, KC_MS_ACCEL2, _______, _______, _______, _______, _______, _______, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, _______, KC_TRNS, _______, _______, _______, _______, KC_TRNS, KC_TRNS, _______),
	[2] = LAYOUT_ortho_5x12(
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, KC_VOLU, _______, _______, _______, _______, KC_HOME, KC_END, KC_UP, KC_PGUP, KC_PGDN, _______,
        _______, KC_VOLD, _______, _______, _______, _______, _______, KC_LEFT, KC_DOWN, KC_RGHT, _______, _______,
        KC_TRNS, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, _______, _______, _______, MO(6), _______, KC_TRNS, KC_TRNS, _______),
	[3] = LAYOUT_ortho_5x12(
        KC_F1, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12,
        KC_TRNS, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, MO(6), _______, _______, _______, KC_TRNS, _______, KC_TRNS, KC_TRNS, _______),
	[4] = LAYOUT_ortho_5x12(
        _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_MINS, KC_EQL, _______,
        _______, Nequal, Shrug, _______, _______, _______, _______, _______, Lambda, KC_LBRC, KC_RBRC, KC_BSLS,
        KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, EscQuot,
        KC_TRNS, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, MO(5), _______, _______, _______, _______, KC_TRNS, KC_TRNS, KC_TRNS, _______),
	[5] = LAYOUT_ortho_5x12(
        RGB_TOG, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        RGB_MOD, RGB_HUI, RGB_SAI, RGB_VAI, RGB_SPI, RGB_M_P, RGB_M_B, RGB_M_R, _______, _______, _______, _______,
        RGB_RMOD, RGB_HUD, RGB_SAD, RGB_VAD, RGB_SPD, RGB_M_SW, RGB_M_SN, RGB_M_K, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, RGB_M_X, RGB_M_G, RGB_M_T, _______, _______, _______, _______,
        _______, _______, _______, KC_TRNS, _______, _______, _______, _______, KC_TRNS, _______, _______, _______),
    // word wrapping layer
    [6] = LAYOUT_ortho_5x12(
        GraveWrap, _______, _______, _______, _______, _______, _______, _______, _______, BracketWrap, BracketWrap, _______,
        _______, _______, InnerSel, _______, _______, _______, _______, _______, _______, SqBracketWrap, SqBracketWrap, _______,
        _______, _______, SpaceWrap, _______, _______, _______, _______, _______, _______, _______, _______, QuotWrap,
        KC_TRNS, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, _______, _______, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, _______),
};

