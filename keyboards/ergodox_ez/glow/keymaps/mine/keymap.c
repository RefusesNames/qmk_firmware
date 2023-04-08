#include QMK_KEYBOARD_H
#include "version.h"
#include "keymap_german.h"
#include "keymap_nordic.h"
#include "keymap_french.h"
#include "keymap_spanish.h"
#include "keymap_hungarian.h"
#include "keymap_swedish.h"
#include "keymap_br_abnt2.h"
#include "keymap_canadian_multilingual.h"
#include "keymap_german_ch.h"
#include "keymap_jp.h"
#include "keymap_korean.h"
#include "keymap_bepo.h"
#include "keymap_italian.h"
#include "keymap_slovenian.h"
#include "keymap_lithuanian_azerty.h"
#include "keymap_danish.h"
#include "keymap_norwegian.h"
#include "keymap_portuguese.h"
#include "keymap_contributions.h"
#include "keymap_czech.h"
#include "keymap_romanian.h"
#include "keymap_russian.h"
#include "keymap_uk.h"
#include "keymap_estonian.h"
#include "keymap_belgian.h"
#include "keymap_us_international.h"
#include "keymap_croatian.h"
#include "keymap_turkish_q.h"
#include "keymap_slovak.h"

#define KC_MAC_UNDO LGUI(KC_Z)
#define KC_MAC_CUT LGUI(KC_X)
#define KC_MAC_COPY LGUI(KC_C)
#define KC_MAC_PASTE LGUI(KC_V)
#define KC_PC_UNDO LCTL(KC_Z)
#define KC_PC_CUT LCTL(KC_X)
#define KC_PC_COPY LCTL(KC_C)
#define KC_PC_PASTE LCTL(KC_V)
#define ES_LESS_MAC KC_GRAVE
#define ES_GRTR_MAC LSFT(KC_GRAVE)
#define ES_BSLS_MAC ALGR(KC_6)
#define NO_PIPE_ALT KC_GRAVE
#define NO_BSLS_ALT KC_EQUAL
#define LSA_T(kc) MT(MOD_LSFT | MOD_LALT, kc)
#define BP_NDSH_MAC ALGR(KC_8)
#define SE_SECT_MAC ALGR(KC_6)

enum custom_keycodes {
  RGB_SLD = EZ_SAFE_RANGE,
  MACRO_UMLAUT_A,
  MACRO_UMLAUT_O,
  MACRO_UMLAUT_U,
  MACRO_SHARP_S,
  ST_MACRO_1,
  TEST_MACRO
};


/*
// This does not works since key override only allow simple replacements
// see https://www.reddit.com/r/olkb/comments/u0j0w5/comment/i466ql8
// to use this, make sure to use
// KEY_OVERRIDE_ENABLE = yes
// in rules.mk
const key_override_t override_for_umlaut_A = ko_make_basic(
    MOD_MASK_SHIFT | MOD_MASK_ALT | MOD_MASK_CTRL,
    KC_A,
    // KC_X);
    MACRO_UMLAUT_A);


const key_override_t** key_overrides = (const key_override_t *[]){
    &override_for_umlaut_A,
    NULL
};
// Runs just one time when the keyboard initializes.
void keyboard_post_init_user(void) {
#ifdef RGBLIGHT_COLOR_LAYER_0
    rgblight_setrgb(RGBLIGHT_COLOR_LAYER_0);
#endif
*/


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_ergodox_pretty(
    KC_EQUAL,       KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           KC_PC_UNDO,                                     KC_PC_UNDO,     KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_MINUS,
    KC_DELETE,      KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,           RGB_MOD,                                        OSL(3),         KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_BSLASH,
    KC_ESCAPE,      KC_A,           KC_S,           KC_D,           KC_F,           KC_G,                                                                           KC_H,           KC_J,           KC_K,           KC_L,           KC_SCOLON,      MT(MOD_LGUI, KC_QUOTE),
    KC_LSHIFT,      MT(MOD_LCTL, KC_Z),KC_X,           KC_C,           KC_V,           KC_B,           KC_HOME,                                        KC_END,         KC_N,           KC_M,           KC_COMMA,       KC_DOT,         MT(MOD_RCTL, KC_SLASH),KC_RSHIFT,
    LT(3,KC_GRAVE), KC_TRANSPARENT, KC_LALT,        KC_LEFT,        KC_RIGHT,                                                                                                       KC_UP,          KC_DOWN,        KC_RALT,        KC_TRANSPARENT, MO(3),
                                                                                                    TG(2),          KC_TRANSPARENT, KC_TRANSPARENT, TG(1),
                                                                                                                    TG(4),          KC_TRANSPARENT,
                                                                                    KC_SPACE,       KC_BSPACE,      KC_LBRACKET,    KC_RBRACKET,    KC_TAB,         KC_ENTER
  ),
  [1] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_W,           KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TAB,                                         KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_A,           KC_S,           KC_D,           KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, TO(0),                                          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_LCTRL,       KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_AUDIO_VOL_UP,KC_AUDIO_VOL_DOWN,KC_TRANSPARENT, KC_AUDIO_MUTE,  KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [2] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, LSFT(KC_F11),   KC_F5,          KC_TRANSPARENT, TO(0),                                          KC_TRANSPARENT, KC_TRANSPARENT, KC_F5,          RSFT(KC_F11),   KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, LSFT(KC_F9),    KC_TRANSPARENT, KC_F11,         KC_F10,         ST_MACRO_1,                                                                     KC_TRANSPARENT, KC_F10,         KC_F11,         KC_TRANSPARENT, RSFT(KC_F9),    KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_F8,          KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_F8,          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [3] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,          KC_NUM_LOCK,                                    KC_TRANSPARENT, KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_F11,
    KC_TRANSPARENT, KC_HASH,        KC_AT,          KC_QUOTE,       KC_GRAVE,       KC_TRANSPARENT, TO(0),                                          KC_TRANSPARENT, KC_TRANSPARENT, MACRO_UMLAUT_U, KC_TRANSPARENT, MACRO_UMLAUT_O, KC_TILD,        KC_F12,
    KC_TRANSPARENT, MACRO_UMLAUT_A, MACRO_SHARP_S,  KC_TRANSPARENT, KC_SLASH,       KC_TRANSPARENT,                                                 KC_DLR,         KC_AMPR,        KC_ASTR,        KC_CIRC,        KC_EQUAL,       RESET,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_LPRN,        KC_LBRACKET,    KC_TRANSPARENT, KC_TRANSPARENT, KC_RBRACKET,    KC_RPRN
  ),
  [4] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                              KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, TO(0),                                       KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                              KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                              KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                              KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  // [4] = LAYOUT_ergodox_pretty(
  //   KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                              KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
  //   KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, TO(0),                                       KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
  //   KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                              KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
  //   KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                              KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
  //   KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                              KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
  //                                                                                                   KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
  //                                                                                                                   KC_TRANSPARENT, KC_TRANSPARENT,
  //                                                                                   KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  // ),
};



extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}

const uint8_t PROGMEM ledmap[][DRIVER_LED_TOTAL][3] = {
    [1] = { {149,189,232}, {149,189,232}, {149,189,232}, {149,189,232}, {149,189,232}, {149,189,232}, {149,189,232}, {149,189,232}, {149,189,232}, {149,189,232}, {149,189,232}, {149,189,232}, {149,189,232}, {149,189,232}, {149,189,232}, {149,189,232}, {149,189,232}, {149,189,232}, {149,189,232}, {149,189,232}, {93,189,232}, {38,189,232}, {149,189,232}, {0,189,232}, {149,189,232}, {149,189,232}, {149,189,232}, {149,189,232}, {149,189,232}, {149,189,232}, {149,189,232}, {149,189,232}, {74,246,199}, {149,189,232}, {149,189,232}, {149,189,232}, {74,246,199}, {74,246,199}, {74,246,199}, {149,189,232}, {149,189,232}, {149,189,232}, {149,189,232}, {149,189,232}, {149,189,232}, {149,189,232}, {149,189,232}, {149,189,232} },

    [2] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {91,252,226}, {0,245,219}, {0,0,0}, {0,0,0}, {0,0,0}, {42,224,253}, {21,255,242}, {0,0,0}, {168,255,226}, {0,0,0}, {91,252,226}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {91,252,226}, {0,245,219}, {0,0,0}, {0,0,0}, {0,0,0}, {42,224,253}, {21,255,242}, {0,0,0}, {168,255,226}, {0,0,0}, {91,252,226}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [3] = { {42,224,253}, {42,224,253}, {42,224,253}, {42,224,253}, {42,224,253}, {42,224,253}, {42,224,253}, {42,224,253}, {42,224,253}, {42,224,253}, {42,224,253}, {42,224,253}, {42,224,253}, {42,224,253}, {42,224,253}, {42,224,253}, {42,224,253}, {42,224,253}, {42,224,253}, {42,224,253}, {42,224,253}, {42,224,253}, {42,224,253}, {42,224,253}, {42,224,253}, {42,224,253}, {42,224,253}, {42,224,253}, {42,224,253}, {42,224,253}, {42,224,253}, {42,224,253}, {42,224,253}, {42,224,253}, {42,224,253}, {42,224,253}, {42,224,253}, {42,224,253}, {42,224,253}, {42,224,253}, {42,224,253}, {42,224,253}, {42,224,253}, {42,224,253}, {42,224,253}, {42,224,253}, {42,224,253}, {42,224,253} },

};

void set_layer_color(int layer) {
  for (int i = 0; i < DRIVER_LED_TOTAL; i++) {
    HSV hsv = {
      .h = pgm_read_byte(&ledmap[layer][i][0]),
      .s = pgm_read_byte(&ledmap[layer][i][1]),
      .v = pgm_read_byte(&ledmap[layer][i][2]),
    };
    if (!hsv.h && !hsv.s && !hsv.v) {
        rgb_matrix_set_color( i, 0, 0, 0 );
    } else {
        RGB rgb = hsv_to_rgb( hsv );
        float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
        rgb_matrix_set_color( i, f * rgb.r, f * rgb.g, f * rgb.b );
    }
  }
}

void rgb_matrix_indicators_user(void) {
  if (keyboard_config.disable_layer_led) { return; }
  switch (biton32(layer_state)) {
    case 1:
      set_layer_color(1);
      break;
    case 2:
      set_layer_color(2);
      break;
    case 3:
      set_layer_color(3);
      break;
    case 4:
      set_layer_color(4);
      break;
   default:
    if (rgb_matrix_get_flags() == LED_FLAG_NONE)
      rgb_matrix_set_color_all(0, 0, 0);
    break;
  }
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case MACRO_UMLAUT_A:
    if (record->event.pressed) {
        if (get_mods() & MOD_MASK_SHIFT) {
            SEND_STRING(SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_1) SS_TAP(X_KP_9) SS_TAP(X_KP_6) ));
        } else {
            SEND_STRING(SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_2) SS_TAP(X_KP_2) SS_TAP(X_KP_8)));
        }
    }
    break;
    case MACRO_UMLAUT_U:
    if (record->event.pressed) {
        if (get_mods() & MOD_MASK_SHIFT) {
            SEND_STRING(SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_2) SS_TAP(X_KP_2) SS_TAP(X_KP_0)));
        } else {
            SEND_STRING(SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_2) SS_TAP(X_KP_5) SS_TAP(X_KP_2)));
        }
    }
    break;
    case MACRO_UMLAUT_O:
    if (record->event.pressed) {
        if (get_mods() & MOD_MASK_SHIFT) {
            SEND_STRING(SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_2) SS_TAP(X_KP_1) SS_TAP(X_KP_4)));
        } else {
            SEND_STRING(SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_2) SS_TAP(X_KP_4) SS_TAP(X_KP_6)));
        }
    }
    break;
    case MACRO_SHARP_S:
    if (record->event.pressed) {
        SEND_STRING(SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_2) SS_TAP(X_KP_2) SS_TAP(X_KP_3)));
    }
    break;
    case ST_MACRO_1:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_G) SS_DELAY(100) SS_TAP(X_D));
    }
    break;

    case TEST_MACRO:
    if (record->event.pressed) {
        if (get_mods() & MOD_MASK_SHIFT)
            SEND_STRING("Upper Case");
        else
            SEND_STRING("Lower Case");
    }
    break;

    case RGB_SLD:
      if (record->event.pressed) {
        rgblight_mode(1);
      }
      return false;
  }
  return true;
}

uint8_t layer_state_set_user(uint8_t state) {
    uint8_t layer = biton(state);
  ergodox_board_led_off();
  ergodox_right_led_1_off();
  ergodox_right_led_2_off();
  ergodox_right_led_3_off();
  switch (layer) {
    case 1:
      ergodox_right_led_1_on();
      break;
    case 2:
      ergodox_right_led_2_on();
      break;
    case 3:
      ergodox_right_led_3_on();
      break;
    case 4:
      ergodox_right_led_1_on();
      ergodox_right_led_2_on();
      break;
    case 5:
      ergodox_right_led_1_on();
      ergodox_right_led_3_on();
      break;
    case 6:
      ergodox_right_led_2_on();
      ergodox_right_led_3_on();
      break;
    case 7:
      ergodox_right_led_1_on();
      ergodox_right_led_2_on();
      ergodox_right_led_3_on();
      break;
    default:
      break;
  }
  return state;
};

