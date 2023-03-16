#include QMK_KEYBOARD_H

#define BASE 0
#define LEFT 1
#define RIGHT 2
#define BOTH 3

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [BASE] = LAYOUT(
        KC_QUOT, KC_COMM, KC_DOT, KC_P, /*   */ KC_Y, KC_F, KC_G, KC_C, KC_R, KC_L,
        KC_A, KC_O, KC_E, KC_U, KC_I, /*     */ KC_D, KC_H, KC_T, KC_N, KC_S,
        KC_SCLN, KC_Q, KC_J, KC_K, KC_X, /*  */ KC_B, KC_M, KC_W, KC_V, KC_Z,

        LT(LEFT, KC_TAB), MT(MOD_LCTL, KC_ENT),
        MT(MOD_RSFT, KC_BSPC), LT(RIGHT, KC_SPACE)),

    [LEFT] = LAYOUT(
        KC_1, KC_2, KC_3, KC_4, KC_5, /*        */ KC_6, KC_7, KC_8, KC_9, KC_0,
        KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, /*   */ KC_SLSH, KC_MINS, KC_UNDS, KC_LCBR, KC_RCBR,
        KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, /*  */ KC_BSLS, KC_PLUS, KC_EQL, KC_LBRC, KC_RBRC,

        _______, _______,
        _______, KC_GRV),

    [RIGHT] = LAYOUT(
        _______, _______, _______, G(KC_P), _______, /*  */ G(C(KC_F)), C(KC_LEFT), C(KC_DOWN), C(KC_UP), C(KC_RGHT),
        _______, _______, _______, _______, _______, /*  */ G(KC_SPACE), KC_LEFT, KC_DOWN, KC_UP, KC_RGHT,
        _______, _______, _______, _______, _______, /*  */ _______, _______, _______, _______, _______,

        _______, _______,
        _______, _______),

    [BOTH] = LAYOUT(
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,

        _______, _______,
        _______, _______)

};

layer_state_t layer_state_set_user(layer_state_t state)
{
    return update_tri_layer_state(state, LEFT, RIGHT, BOTH);
}