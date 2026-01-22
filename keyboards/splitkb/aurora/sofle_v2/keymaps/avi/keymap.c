#include "keycodes.h"
#include "keymap_us.h"
#include "modifiers.h"
#include QMK_KEYBOARD_H

enum layers {
    _DEFAULT = 0,
    _SYMBOLS = 1,
    _NAVIGATION = 2,
    _ADJUST = 3
};

// layer navigation
#define MO_NAV MO(_NAVIGATION)
#define MO_SYM MO(_SYMBOLS)

#define OSL_SYM OSL(_SYMBOLS)

#define TO_DEF TO(_DEFAULT)
#define TO_NAV TO(_NAVIGATION)
#define TO_ADJ TO(_ADJUST)

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
         KC_ESC,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                          KC_6,    KC_7,    KC_8,    KC_9,    KC_0, XXXXXXX,
         KC_TAB,    KC_Q,    KC_W,    KC_F,    KC_P,    KC_B,                          KC_J,    KC_L,    KC_U,    KC_Y, KC_SCLN, KC_BSPC,
        KC_LCTL,    KC_A,    KC_R,    HR_S,    HR_T,    KC_G,                          KC_M,    HR_N,    HR_E,    KC_I,    KC_O, KC_QUOT,
        KC_LSFT,    KC_Z,    KC_X,    KC_C,    KC_D,    KC_V, XXXXXXX,     XXXXXXX,    KC_K,    KC_H, KC_COMM,  KC_DOT, KC_SLSH,  KC_ESC,
                           KC_MEH, XXXXXXX, XXXXXXX, OSL_SYM,  KC_SPC,      KC_ENT,  MO_NAV, XXXXXXX, XXXXXXX, KC_HYPR

    ),
    [_SYMBOLS] = LAYOUT(
         KC_ESC, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,  TO_DEF,
        XXXXXXX, XXXXXXX,  KC_DLR,  KC_GRV, KC_LCBR, KC_RCBR,                       KC_AMPR, KC_HASH, KC_PLUS, KC_CIRC, KC_SCLN, KC_BSPC,
        KC_LCTL, XXXXXXX, KC_EXLM, KC_UNDS, KC_LPRN, KC_RPRN,                         KC_AT, KC_MINS, KC_ASTR,  KC_EQL, XXXXXXX, XXXXXXX,
        XXXXXXX, XXXXXXX, KC_BSLS, KC_PIPE, KC_LBRC, KC_RBRC, XXXXXXX,     XXXXXXX, KC_TILD, KC_LABK, KC_RABK, KC_PERC, KC_SLSH, KC_ESC,
                          XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX

    ),
    [_NAVIGATION] = LAYOUT(
         TO_ADJ, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,  TO_DEF,
         KC_TAB, XXXXXXX, MS_BTN1,   MS_UP, MS_BTN2, MS_WHLD,                       NV_BACK, NV_PREV, NV_NEXT, NV_FRWD, XXXXXXX, KC_BSPC,
        KC_LCTL, XXXXXXX, MS_LEFT, MS_DOWN, MS_RGHT, MS_WHLU,                       KC_LEFT, KC_DOWN,   KC_UP, KC_RGHT, XXXXXXX,  TO_NAV,
        KC_LSFT, XXXXXXX, MS_WHLL, XXXXXXX, MS_WHLR, XXXXXXX, XXXXXXX,     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,  KC_ESC,
                          KC_LCTL, KC_LALT, KC_LGUI,  TO_DEF,  KC_SPC,      KC_ENT, XXXXXXX, MS_ACL0, MS_ACL1, MS_ACL2

    ),
    [_ADJUST] = LAYOUT(
        XXXXXXX,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                       XXXXXXX, XXXXXXX,  KC_EQL, KC_ASTR, XXXXXXX,  TO_DEF,
        XXXXXXX,   KC_F6,   KC_F7,   KC_F8,   KC_F9,  KC_F10,                          KC_7,    KC_8,    KC_9, KC_MINS, XXXXXXX,  KC_DEL,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                          KC_4,    KC_5,    KC_6, KC_PLUS, XXXXXXX,  KC_DEL,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,     XXXXXXX,    KC_1,    KC_2,    KC_3,  KC_ENT, XXXXXXX, XXXXXXX,
                          XXXXXXX, XXXXXXX, XXXXXXX,  TO_DEF, XXXXXXX,     XXXXXXX,    KC_0,    KC_0,  KC_DOT,  KC_ENT

    ),
};
