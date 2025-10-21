#include QMK_KEYBOARD_H
#if __has_include("keymap.h")
#    include "keymap.h"
#endif


enum custom_layer {
    _QWERTY,
    _NUMPAD,
    _MEDIA,
    _LEAGUE,
    _GAME
};
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [_QWERTY] = LAYOUT(
        KC_GRV,  KC_1, KC_2,    KC_3,   KC_4,       KC_5,    KC_TRNS,        TG(_LEAGUE), KC_6,   KC_7,        KC_8,    KC_9,   KC_0,    KC_BSLS,
        KC_TAB,  KC_Q, KC_W,    KC_E,   KC_R,       KC_T,    KC_TRNS,        TG(_GAME),   KC_Y,   KC_U,        KC_I,    KC_O,   KC_P,    KC_BSPC,
        KC_DEL,  KC_A, KC_S,    KC_D,   KC_F,       KC_G,    KC_TRNS,        KC_TRNS,     KC_H,   KC_J,        KC_K,    KC_L,   KC_SCLN, KC_QUOT,
        SC_LSPO, KC_Z, KC_X,    KC_C,   KC_V,       KC_B,    KC_TRNS,        KC_TRNS,     KC_N,   KC_M,        KC_COMM, KC_DOT, KC_SLSH, SC_RSPC,
                       KC_MINS, KC_EQL, MO(_MEDIA), KC_LSFT, KC_ESC,         KC_ENT,      KC_SPC, MO(_NUMPAD), KC_LBRC, KC_RBRC,
                                                    KC_LCTL, KC_LALT,        KC_LGUI,     KC_BSPC
    ),

    [_NUMPAD] = LAYOUT(
        KC_ESC,  KC_F1,   KC_F2,   KC_F3, KC_F4,       KC_F5,   KC_F6,       KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_TRNS,
        KC_TRNS, KC_TRNS, KC_P7,   KC_P8, KC_P9,       KC_LCBR, KC_NO,       KC_NO,   KC_RCBR, KC_HOME, KC_UP,   KC_END,  KC_BSLS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_P4,   KC_P5, KC_P6,       KC_LBRC, KC_NO,       KC_NO,   KC_RBRC, KC_LEFT, KC_DOWN, KC_RGHT, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_P1,   KC_P2, KC_P3,       KC_TRNS, KC_NO,       KC_NO,   MO(_MEDIA),   KC_PGUP, KC_TRNS, KC_PGDN, KC_TRNS, KC_TRNS,
                          KC_TRNS, KC_P0, KC_NUM_LOCK, KC_TRNS, KC_TRNS,     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
                                                       KC_TRNS, KC_TRNS,     KC_TRNS, KC_TRNS
    ),
    
};

#if defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {

};
#endif // defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)




