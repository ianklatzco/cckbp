#include "keymap_common.h"

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*0: default layer */
    KEYMAP(  ESC,    1,    2,    3,    4,    5, LBRC, \
             TAB, QUOT, COMM,  DOT,    P,    Y, BSLS, \
            LCTL,    A,    O,    E,    U,    I,       \
            LSFT, SCLN,    Q,    J,    K,    X,  GRV, \
            CAPS, LBRC, RBRC, LGUI, LALT,             \
                                           FN0, HOME, \
                                     SPC,  ENT,  END,\
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
};

const uint16_t PROGMEM fn_actions[] = {
    [0] = ACTION_LAYER_MOMENTARY(1),
    // [1] = ACTION_LAYER_TOGGLE(2), //go to keymap 2 when FN1 is pressed
};
