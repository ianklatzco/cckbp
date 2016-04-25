#include "keymap_common.h"

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    KEYMAP( RBRC,    6,    7,    8,    9,    0,  FN1, \
             EQL,    F,    G,    C,    R,    L, SLSH, \
                     D,    H,    T,    N,    S,  ENT, \
            MINS,    B,    M,    W,    V,    Z, RSFT, \
                        LEFT, DOWN,   UP, RGHT, RCTL, \
            PGUP,  FN0,                               \
            PGDN,  DEL, BSPC,                         \
            RGUI                                      \
        ),
    KEYMAP( TRNS,   F6,   F7,   F8,   F9,  F10,  F11, \
            TRNS, TRNS,   P7,   P8,   P9, PMNS,  F12, \
                  TRNS,   P4,   P5,   P6, PPLS, TRNS, \
            TRNS, TRNS,   P1,   P2,   P3, PAST, TRNS, \
                          P0, PDOT, PENT, PSLS, TRNS, \
            TRNS, TRNS,                               \
            TRNS, TRNS, TRNS,                         \
            TRNS                                      \
        ),
    /*2: qwerty*/
    KEYMAP( TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, \
            TRNS,    Y,    U,    I,    O,    P, TRNS, \
                     H,    J,    K,    L, SCLN, TRNS, \
            TRNS,    N,    M, COMM,  DOT, SLSH, TRNS, \
                       TRNS, TRNS,  TRNS, TRNS, TRNS, \
            TRNS, TRNS,                               \
            TRNS, TRNS, TRNS,                         \
            TRNS                                      \
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