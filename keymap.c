#include QMK_KEYBOARD_H
#include "g/keymap_combo.h"

#define BASE 0
#define LEFT 1
#define RIGHT 2
#define BOTH 3

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[BASE] = LAYOUT_gergoplex(
    KC_QUOT, KC_COMM, KC_DOT, KC_P, KC_Y,      KC_F, KC_G, KC_C, KC_R, KC_L,
    KC_A,    KC_O,    KC_E,   KC_U, KC_I,      KC_D, KC_H, KC_T, KC_N, KC_S,
    KC_SCLN, KC_Q,    KC_J,   KC_K, KC_X,      KC_B, KC_M, KC_W, KC_V, KC_Z,

    MT(MOD_LALT, KC_TAB),  LT(LEFT,  KC_ESC), MT(MOD_LCTL, KC_ENT),
    MT(MOD_RSFT, KC_BSPC), LT(RIGHT, KC_SPC), MT(MOD_RALT, KC_DEL)
    ),

[LEFT] = LAYOUT_gergoplex(
    KC_1,  KC_2,  KC_3,  KC_4,  KC_5,      KC_6,    KC_7,    KC_8,    KC_9,    KC_0,
    KC_F1, KC_F2, KC_F3, KC_F4, KC_F5,     KC_SLSH, KC_MINS, KC_UNDS, KC_LCBR, KC_RCBR,
    KC_F6, KC_F7, KC_F8, KC_F9, KC_F10,    KC_BSLS, KC_PLUS, KC_EQL,  KC_LBRC, KC_RBRC,

    KC_F11,  _______, KC_F12,
    _______, _______, KC_GRV
    ),

[RIGHT] = LAYOUT_gergoplex(
    _______, _______,    _______, _______, _______,     G(KC_F), G(KC_LEFT),    G(KC_DOWN),    G(KC_UP),    G(KC_RGHT),
    G(KC_W), G(KC_S),    G(KC_E), _______, _______,     G(KC_D), KC_LEFT,       KC_DOWN,       KC_UP,       KC_RGHT,
    _______, SGUI(KC_Q), _______, _______, _______,     _______, SGUI(KC_LEFT), SGUI(KC_DOWN), SGUI(KC_UP), SGUI(KC_RGHT),

    G(KC_L), _______, G(KC_ENT),
    _______, _______, _______
    ),

[BOTH] = LAYOUT_gergoplex(
    _______, _______, _______, _______, _______,     _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______,     _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______,     _______, _______, _______, _______, _______,

    _______, _______, _______,
    _______, _______, _______
    )

};

layer_state_t layer_state_set_user(layer_state_t state) {
  return update_tri_layer_state(state, LEFT, RIGHT, BOTH);
}
