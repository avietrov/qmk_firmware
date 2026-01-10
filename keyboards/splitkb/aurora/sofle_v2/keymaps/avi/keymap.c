#include "keycodes.h"
#include "keymap_us.h"
#include "modifiers.h"
#include QMK_KEYBOARD_H

enum layers {
    _DEFAULT = 0,
    _SYMBOLS = 1,
    _NAVIGATION = 2,
};

// layer navigation
#define MO_NAV MO(_NAVIGATION)
#define MO_SYM MO(_SYMBOLS)

#define OSL_SYM OSL(_SYMBOLS)

#define TO_DEF TO(_DEFAULT)
#define TO_NAV TO(_NAVIGATION)

#define GUI_SPC MT(MOD_LGUI, KC_SPC)

// home row mods
#define HR_S MT(MOD_LALT, KC_S)
#define HR_T MT(MOD_LGUI, KC_T)
#define HR_N MT(MOD_LGUI, KC_N)
#define HR_E MT(MOD_LALT, KC_E)

// custom nav
#define NV_BACK LGUI(KC_LCBR)
#define NV_FRWD LGUI(KC_RBRC)
#define NV_NEXT LCTL(KC_TAB)
#define NV_PREV LCTL(LSFT(KC_TAB))


// would be good to be able to do cmd space and cmd enter
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_DEFAULT] = LAYOUT(
         KC_ESC,   KC_1,   KC_2,   KC_3,   KC_4,   KC_5,                          KC_6,   KC_7,    KC_8,   KC_9,   KC_0,  TO_DEF,
         KC_TAB,   KC_Q,   KC_W,   KC_F,   KC_P,   KC_B,                          KC_J,   KC_L,    KC_U,   KC_Y,KC_SCLN, KC_BSPC,
        KC_LCTL,   KC_A,   KC_R,   HR_S,   HR_T,   KC_G,                          KC_M,   HR_N,    HR_E,   KC_I,   KC_O, KC_QUOT,
        KC_LSFT,   KC_Z,   KC_X,   KC_C,   KC_D,   KC_V, XXXXXXX,    XXXXXXX,     KC_K,   KC_H, KC_COMM, KC_DOT,KC_SLSH,  KC_ESC,
                        MOD_MEH,XXXXXXX,XXXXXXX,OSL_SYM,  KC_SPC,     KC_ENT,   TO_NAV, XXXXXXX, XXXXXXX,MOD_HYPR

    ),
    [_SYMBOLS] = LAYOUT(
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,  TO_DEF,
        XXXXXXX, XXXXXXX,  KC_DLR,  KC_GRV, KC_LCBR, KC_RCBR,                       KC_AMPR, KC_HASH, KC_PLUS, KC_CIRC, KC_SCLN, _______,
        KC_LCTL, XXXXXXX, KC_EXLM, KC_UNDS, KC_LPRN, KC_RPRN,                         KC_AT, KC_MINS, KC_ASTR,  KC_EQL, XXXXXXX, XXXXXXX,
        XXXXXXX, XXXXXXX, KC_BSLS, KC_PIPE, KC_LBRC, KC_RBRC, _______,     _______, KC_TILD, KC_LABK, KC_RABK, KC_PERC, KC_SLSH, _______,
                          _______, _______, _______, _______, _______,     _______, XXXXXXX, _______, _______, _______

    ),
    [_NAVIGATION] = LAYOUT(
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,  TO_DEF,
        XXXXXXX, MS_BTN1,   MS_UP, MS_BTN2, MS_WHLU, XXXXXXX,                       NV_BACK, NV_PREV, NV_NEXT, NV_FRWD, XXXXXXX, _______,
        KC_LCTL, MS_LEFT, MS_DOWN, MS_RGHT, MS_WHLD, XXXXXXX,                       KC_LEFT, KC_DOWN,   KC_UP, KC_RGHT, XXXXXXX, XXXXXXX,
        XXXXXXX, MS_WHLL, XXXXXXX, MS_WHLR, XXXXXXX, XXXXXXX, XXXXXXX,     _______, XXXXXXX, XXXXXXX, XXXXXXX,  XXXXXXX, XXXXXXX, _______,
                          _______, XXXXXXX, KC_LALT, KC_LSFT, KC_LGUI,     MS_ACL0, MS_ACL1, MS_ACL2, _______, _______

    )
};
