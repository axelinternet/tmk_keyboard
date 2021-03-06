#include "keymap_common.h"

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* layer 0 */
    KEYMAP(
         ESC,    1,    2,    3,    4,    5,    6,    7,    8,    9,    0, MINS, \
         TAB,    Q,    W,    E,    R,    T,    Y,    U,    I,    O,    P, LBRC, \
        CAPS,          A,    S,    D,    F,    G,    H,    J,    K,    L, SCLN, \
        LSFT,  FN1,    Z,    X,    C,    V,    B,    N,    M, COMM,  DOT, SLSH, \
        LCTL, LGUI, LALT,                    SPC,                    FN0, RALT, \
         EQL, RBRC, QUOT, RSFT, RGUI, BSPC, BSLS,  ENT, RSFT, LCTL              ),
    /* layer 1 */
    KEYMAP(
         GRV,   F1,   F2,   F3,   F4,   F5,   F6,   F7,   F8,   F9,  F10,  F11, \
        TRNS, TRNS,   UP, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, PSCR, SLCK, PAUS, \
        TRNS,       LEFT, DOWN, RGHT, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, HOME, \
        TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, VOLD, VOLU, MUTE, TRNS,  END, \
        TRNS, TRNS, TRNS,                   TRNS,                   TRNS, TRNS, \
         F12, TRNS, TRNS, PGUP, TRNS,  DEL, TRNS, TRNS, PGDN, TRNS              ),
    /* layer 2 */
    KEYMAP(
        TRNS,   F1,   F2,   F3,   F4,   F5,   F6,   F7,   F8,   F9,  F10,  F11, \
        TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,   UP, TRNS, TRNS, TRNS, \
        TRNS,       TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, LEFT, DOWN, RGHT, HOME, \
        TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, VOLD, VOLU, MUTE, TRNS,  END, \
        TRNS, TRNS, TRNS,                   TRNS,                   TRNS, TRNS, \
         F12, TRNS, TRNS, TRNS, TRNS,  DEL, TRNS, TRNS, TRNS, TRNS              ),
    /* layer 3 */
    KEYMAP(
         GRV,   F1,   F2,   F3,   F4,   F5,   F6,   F7,   F8,   F9,  F10,  F11, \
        TRNS, TRNS,   UP, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, PSCR, SLCK, PAUS, \
        TRNS,       LEFT, DOWN, RGHT, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, HOME, \
        TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, VOLD, VOLU, MUTE, TRNS,  END, \
        TRNS, TRNS, TRNS,                   TRNS,                   TRNS, TRNS, \
         F12, TRNS, TRNS, PGUP, TRNS,  DEL, TRNS, TRNS, PGDN, TRNS              ),
    /* layer 4 */
    KEYMAP(
        TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, \
        TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, \
        TRNS,       TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, \
        TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, \
        TRNS, TRNS, TRNS,                   TRNS,                   TRNS, TRNS, \
        TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS              ),
    /* layer 5 */
    KEYMAP(
        TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, \
        TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, \
        TRNS,       TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, \
        TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, \
        TRNS, TRNS, TRNS,                   TRNS,                   TRNS, TRNS, \
        TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS              ),
    /* layer 6 */
    KEYMAP(
        TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, \
        TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, \
        TRNS,       TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, \
        TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, \
        TRNS, TRNS, TRNS,                   TRNS,                   TRNS, TRNS, \
        TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS              ),
    /* layer 7 */
    KEYMAP(
        TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, \
        TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, \
        TRNS,       TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, \
        TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, \
        TRNS, TRNS, TRNS,                   TRNS,                   TRNS, TRNS, \
        TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS              ),
};

enum macro_id {
    MACRO_0,
    MACRO_1,
    MACRO_2,
    MACRO_3,
    MACRO_4,
    MACRO_5,
    MACRO_6,
    MACRO_7,
};

const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt) {
    keyevent_t event = record->event;
    switch (id) {
        case MACRO_0:
            return (event.pressed ?
                    MACRO( END ) :
                    MACRO( END ));
        case MACRO_1:
            return (event.pressed ?
                    MACRO( END ) :
                    MACRO( END ));
        case MACRO_2:
            return (event.pressed ?
                    MACRO( END ) :
                    MACRO( END ));
        case MACRO_3:
            return (event.pressed ?
                    MACRO( END ) :
                    MACRO( END ));
        case MACRO_4:
            return (event.pressed ?
                    MACRO( END ) :
                    MACRO( END ));
        case MACRO_5:
            return (event.pressed ?
                    MACRO( END ) :
                    MACRO( END ));
        case MACRO_6:
            return (event.pressed ?
                    MACRO( END ) :
                    MACRO( END ));
        case MACRO_7:
            return (event.pressed ?
                    MACRO( END ) :
                    MACRO( END ));
    }
    return MACRO_NONE;
}

const uint16_t PROGMEM fn_actions[] = {
    [0]  = ACTION_LAYER_MOMENTARY(1),
    [1]  = ACTION_LAYER_MOMENTARY(2),
    [2]  = ACTION_LAYER_MOMENTARY(3),
    [3]  = ACTION_LAYER_MOMENTARY(4),
    [4]  = ACTION_LAYER_MOMENTARY(5),
    [5]  = ACTION_LAYER_MOMENTARY(6),
    [6]  = ACTION_LAYER_MOMENTARY(7),
    [7]  = ACTION_LAYER_TOGGLE(1),
    [8]  = ACTION_LAYER_TOGGLE(2),
    [9]  = ACTION_LAYER_TOGGLE(3),
    [10] = ACTION_LAYER_TOGGLE(4),
    [11] = ACTION_LAYER_TOGGLE(5),
    [12] = ACTION_LAYER_TOGGLE(6),
    [13] = ACTION_LAYER_TOGGLE(7),
    [14] = ACTION_MACRO(MACRO_0),
    [15] = ACTION_MACRO(MACRO_1),
    [16] = ACTION_MACRO(MACRO_2),
    [17] = ACTION_MACRO(MACRO_3),
    [18] = ACTION_MACRO(MACRO_4),
    [19] = ACTION_MACRO(MACRO_5),
    [20] = ACTION_MACRO(MACRO_6),
    [21] = ACTION_MACRO(MACRO_7),
};