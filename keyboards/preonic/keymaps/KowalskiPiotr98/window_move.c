#pragma once
#include "common.c"

void move_window(uint16_t keycode, keyrecord_t *record)
{
    if (!record->event.pressed) return;

    switch (keycode)
    {
        case WindowLeft:
            SEND_STRING(SS_LGUI(SS_TAP(X_LEFT)));
            break;
        case WindowRight:
            SEND_STRING(SS_LGUI(SS_TAP(X_RGHT)));
            break;
        case WindowUp:
            SEND_STRING(SS_LGUI(SS_TAP(X_UP)));
            break;
        case WindowDown:
            SEND_STRING(SS_LGUI(SS_TAP(X_DOWN)));
            break;
    }
}
