#include "keycodes.h"
#include "keymap_us.h"
#include QMK_KEYBOARD_H

enum layers {
    _DEFAULT = 0,
    _SYMBOLS = 1,
    _NAVIGATION = 2,
};

#define MO_NAV MO(_NAVIGATION)
#define MO_SYM MO(_SYMBOLS)
#define GUI_SPC MT(MOD_LGUI, KC_SPC)
#define OSL_SYM OSL(_SYMBOLS)

// would be good to be able to do cmd space and cmd enter
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_DEFAULT] = LAYOUT(
        XXXXXXX,   KC_1,   KC_2,   KC_3,   KC_4,   KC_5,                          KC_6,   KC_7,    KC_8,   KC_9,   KC_0, XXXXXXX,
         KC_TAB,   KC_Q,   KC_W,   KC_F,   KC_P,   KC_B,                          KC_J,   KC_L,    KC_U,   KC_Y,KC_SCLN, KC_BSPC,
        KC_LCTL,   KC_A,   KC_R,   KC_S,   KC_T,   KC_G,                          KC_M,   KC_N,    KC_E,   KC_I,   KC_O, KC_QUOT,
        KC_LSFT,   KC_Z,   KC_X,   KC_C,   KC_D,   KC_V, XXXXXXX,    XXXXXXX,     KC_K,   KC_H, KC_COMM, KC_DOT,KC_SLSH,  KC_ESC,
                        KC_LGUI,XXXXXXX,KC_LALT,OSL_SYM,  KC_SPC,     KC_ENT,   MO_NAV, XXXXXXX, XXXXXXX,OSL_SYM

    ),
    [_SYMBOLS] = LAYOUT(
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______,
        XXXXXXX, XXXXXXX,  KC_DLR,  KC_GRV, KC_LCBR, KC_RCBR,                       KC_AMPR, KC_HASH, KC_PLUS, KC_CIRC, KC_SCLN, _______,
        XXXXXXX, XXXXXXX, KC_EXLM, KC_UNDS, KC_LPRN, KC_RPRN,                         KC_AT, KC_MINS, KC_ASTR,  KC_EQL, XXXXXXX, XXXXXXX,
        XXXXXXX, XXXXXXX, KC_BSLS, KC_PIPE, KC_LBRC, KC_RBRC, _______,     _______, KC_TILD, KC_LABK, KC_RABK, KC_PERC, KC_SLSH, _______,
                          _______, _______, _______, _______, _______,      KC_MEH, _______, _______, _______, _______

    ),
    [_NAVIGATION] = LAYOUT(
        XXXXXXX,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                         KC_F6,   KC_F7,   KC_F8,   KC_F9,  KC_F10, _______,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______,
        KC_LCTL, KC_LALT, KC_LSFT, KC_LGUI, XXXXXXX, XXXXXXX,                       KC_LEFT, KC_DOWN,   KC_UP, KC_RGHT, XXXXXXX, XXXXXXX,
        _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,     _______, XXXXXXX, XXXXXXX, XXXXXXX,  XXXXXXX, XXXXXXX, _______,
                          _______, _______, _______, _______, KC_HYPR,     _______, _______, _______, _______, _______

    )
};
