#include "keymap_common.h"

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    KEYMAP(ESC,     1,      2,     3,    4,   5, BSLS, \
           TAB,  QUOT,   COMM,   DOT,    P,   Y, LBRC, \
           LCTL,    A,      O,     E,    U,   I,       \
           LSFT, SCLN,      Q,     J,    K,   X,  ENT, \
           CAPS,    0,      0,  LGUI, LALT,            \
                                              4, HOME, \
                                       SPC, DEL,  END, \
                                                 LGUI  \
                                                       \
        ),
};

// const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
//     KEYMAP(ESC,  1,   2,   3,   4,   5,   MINS, \
//            TAB,  Q,   W,   E,   R,   T,LBRC, \
//            LCTL,    A,      S,     D,   F,   G,      \
//            LSFT, Z,      X,     C,   V,   B,BSLS, \
//            CAPS, LALT, LGUI,F,  PAUS,                \
//                                              4,HOME, \
//                                       SPC, DEL, END, \
//                                                 LGUI \
//                                                      \
//         ),
// };


const uint16_t PROGMEM fn_actions[] = {
    [0] = ACTION_LAYER_MOMENTARY(1),
};