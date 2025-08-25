/**
 * Copyright 2022 Charly Delay <charly@codesink.dev> (@0xcharly)
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

enum dilemma_keymap_layers {
    LAYER_BASE = 0,
    LAYER_NAV,
    LAYER_SYMNUM,
    LAYER_FN,
};

#define NAV QK_TRI_LAYER_LOWER
#define SYMNUM QK_TRI_LAYER_UPPER

// clang-format off
#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [LAYER_BASE] = LAYOUT_split_3x5_4(
    KC_Q,   KC_W,   KC_E,   KC_R,     KC_T,                                                  KC_Y,    KC_U,   KC_I,     KC_O,   KC_P,
    KC_A,   KC_S,   KC_D,   KC_F,     KC_G,                                                  KC_H,    KC_J,   KC_K,     KC_L,   KC_QUOT,
    KC_Z,   KC_X,   KC_C,   KC_V,     KC_B,                                                  KC_N,    KC_M,   KC_COMM,  KC_DOT, KC_SLSH,
                            KC_LGUI,  KC_SPC, KC_LCTL,  NAV,              SYMNUM,  KC_RSFT,  KC_ENT,  KC_RSFT
  ),

  [LAYER_NAV] = LAYOUT_split_3x5_4(
    KC_ESC,   KC_NO,    KC_NO,    KC_PSCR,  MS_BTN1,                                                  KC_PGUP,  KC_HOME,  KC_UP,    KC_END,   KC_BSPC,
    KC_TAB,   KC_LCTL,  KC_LSFT,  KC_LALT,  MS_ACL0,                                                  KC_PGDN,  KC_LEFT,  KC_DOWN,  KC_RGHT,  KC_INS,
    QK_BOOT,  KC_NO,    KC_NO,    KC_NO,    MS_BTN2,                                                  MS_LEFT,  MS_DOWN,  MS_UP,    MS_RGHT,  KC_DEL,
                                  KC_LGUI,  KC_NO,    KC_LCTL,  KC_TRNS,          KC_TRNS,  KC_RSFT,  KC_APP,   KC_RSFT
  ),
  [LAYER_SYMNUM] = LAYOUT_split_3x5_4(

    KC_NO, KC_BSLS, KC_LPRN, KC_RPRN, KC_COMM,                                    KC_GRV, KC_7, KC_8, KC_9, KC_0,
    KC_NO, KC_QUOT, KC_LCBR, KC_RCBR, KC_SCLN,                                    KC_LBRC, KC_4, KC_5, KC_6, KC_MINS,
    KC_NO, KC_SLSH, KC_LT, KC_GT, KC_DOT,                                         KC_RBRC, KC_1, KC_2, KC_3, QK_BOOT,
                                  KC_LGUI,  KC_NO,    KC_LCTL,  KC_TRNS,          KC_TRNS,  KC_RSFT,  KC_EQL,   KC_RSFT
  ),

  [LAYER_FN] = LAYOUT_split_3x5_4(
    KC_F1, KC_F2, KC_F3, KC_F4, KC_F5,                                            KC_F6, KC_F7, KC_F8, KC_F9, KC_F10,
    KC_BRIU, KC_NO, KC_NO, KC_MUTE, KC_VOLU,                                      KC_NO, KC_NO, KC_NO, KC_F11, KC_F12,
    KC_BRID, KC_MRWD, KC_MPLY, KC_MFFD, KC_VOLD,                                  KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
                                  KC_LGUI,  KC_NO,    KC_LCTL,  KC_TRNS,          KC_TRNS,  KC_RSFT,  KC_NO,   KC_RSFT
  )

};
// clang-format on

layer_state_t layer_state_set_user(layer_state_t state) {
  return update_tri_layer_state(state, LAYER_NAV, LAYER_SYMNUM, LAYER_FN);
}

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [0] = { ENCODER_CCW_CW(KC_UP, KC_DOWN), ENCODER_CCW_CW(KC_LEFT, KC_RIGHT) },
    [1] = { ENCODER_CCW_CW(UG_HUED, UG_HUEU), ENCODER_CCW_CW(UG_HUED, UG_HUEU) },
    [2] = { ENCODER_CCW_CW(UG_VALD, UG_VALU), ENCODER_CCW_CW(UG_VALD, UG_VALU) },
    [3] = { ENCODER_CCW_CW(UG_PREV, UG_NEXT), ENCODER_CCW_CW(UG_PREV, UG_NEXT) },
};
#endif
