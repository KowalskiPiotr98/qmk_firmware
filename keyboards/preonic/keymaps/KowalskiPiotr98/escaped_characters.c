#pragma once
#include "common.c"

void process_print_escaped(uint16_t keycode, keyrecord_t *record)
{
    if (!record->event.pressed) return;

    switch (keycode)
    {
        case EscQuot:
            if (get_mods() & MOD_MASK_SHIFT)
            {
                del_mods(MOD_MASK_SHIFT);
                SEND_STRING(SS_TAP(X_BSLS) SS_LSFT(SS_TAP(X_QUOT)));
            }
            else
                SEND_STRING(SS_TAP(X_BSLS) SS_TAP(X_QUOT));
            break;
    }
}
