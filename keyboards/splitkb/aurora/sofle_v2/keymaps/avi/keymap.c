#include "keycodes.h"
#include "keymap_us.h"
#include QMK_KEYBOARD_H

enum layers {
    _DEFAULT = 0,
    _SYMBOLS = 1,
    _NAVIGATION = 2,
};
// would be good to be able to do cmd space and cmd enter
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_DEFAULT] = LAYOUT(
        XXXXXXX,   KC_1,   KC_2,   KC_3,   KC_4,   KC_5,                          KC_6,   KC_7,    KC_8,   KC_9,   KC_0, XXXXXXX,
         KC_TAB,   KC_Q,   KC_W,   KC_F,   KC_P,   KC_B,                          KC_J,   KC_L,    KC_U,   KC_Y,KC_SCLN, KC_BSPC,
        KC_LCTL,   KC_A,   KC_R,   KC_S,   KC_T,   KC_G,                          KC_M,   KC_N,    KC_E,   KC_I,   KC_O, KC_QUOT,
        KC_LSFT,   KC_Z,   KC_X,   KC_C,   KC_D,   KC_V, XXXXXXX,    XXXXXXX,     KC_K,   KC_H, KC_COMM, KC_DOT,KC_SLSH,  KC_ESC,
                        XXXXXXX,KC_HYPR,KC_LGUI,  MO(2),  KC_SPC,     KC_ENT,    MO(1),KC_LALT,  KC_MEH, XXXXXXX

    ),
    [_SYMBOLS] = LAYOUT(
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______,
        XXXXXXX, XXXXXXX,  KC_DLR,  KC_GRV, KC_LCBR, KC_RCBR,                       KC_AMPR, KC_HASH, KC_PLUS, KC_CIRC, KC_SCLN, _______,
        XXXXXXX, XXXXXXX, KC_EXLM, KC_UNDS, KC_LPRN, KC_RPRN,                         KC_AT, KC_MINS, KC_ASTR, KC_EQL, XXXXXXX, XXXXXXX,
        XXXXXXX, XXXXXXX, KC_BSLS, KC_PIPE, KC_LBRC, KC_RBRC, _______,     _______, KC_TILD, XXXXXXX, XXXXXXX, KC_PERC, KC_SLSH, _______,
                          _______, _______, _______, _______, _______,     _______, _______, _______, _______, _______

    ),
    [_NAVIGATION] = LAYOUT(
        XXXXXXX,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                         KC_F6,   KC_F7,   KC_F8,   KC_F9,  KC_F10, _______,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______,
        _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                       KC_LEFT, KC_DOWN,   KC_UP, KC_RGHT, XXXXXXX, XXXXXXX,
        _______, G(KC_Z), G(KC_X), G(KC_C), G(KC_V), XXXXXXX, XXXXXXX,     _______, KC_HOME, KC_PGUP, KC_PGDN,  KC_END, XXXXXXX, _______,
                          _______, _______, _______, _______, _______,     _______, _______, _______, _______, _______

    )
};
