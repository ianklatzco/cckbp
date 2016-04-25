#include "keymap_common.h"

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*0: default layer */
    KEYMAP(  ESC,    1,    2,    3,    4,    5, LBRC, \
             TAB, QUOT, COMM,  DOT,    P,    Y, BSLS, \
            LCTL,    A,    O,    E,    U,    I,       \
            LSFT, SCLN,    Q,    J,    K,    X,  GRV, \
            CAPS,  FN1,    0, LGUI, LALT,             \
                                           FN0, HOME, \
                                     SPC,  ENT,  END, \
                                                LGUI  \
        ),
    /*1: FN key layer*/
    KEYMAP( TRNS,   F1,   F2,    F3,   F4,   F5, TRNS, \
            TRNS, TRNS, TRNS,  TRNS, TRNS, TRNS, TRNS, \
            TRNS, TRNS, TRNS,  TRNS, TRNS, TRNS,       \
            TRNS, TRNS, TRNS,  TRNS, TRNS, TRNS, TRNS, \
            TRNS, TRNS, TRNS,  TRNS, TRNS,             \
                                           TRNS, HOME, \
                                     TRNS, TRNS, TRNS, \
                                                 TRNS  \
        ),
    /*2: qwerty*/
    KEYMAP(ESC,  1,   2,   3,   4,   5,   MINS, \
           TAB,  Q,   W,   E,   R,   T,   LBRC, \
           LCTL, A,   S,   D,   F,   G,         \
           LSFT, Z,   X,   C,   V,   B,   BSLS, \
           CAPS, TRNS, LGUI,F,  PAUS,           \
                                        4,HOME, \
                                 SPC, DEL, END, \
                                           LGUI \
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
    [1] = ACTION_LAYER_TOGGLE(2), //go to keymap 2 when FN1 is pressed
};