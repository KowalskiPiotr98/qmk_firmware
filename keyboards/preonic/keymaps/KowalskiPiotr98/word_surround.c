#pragma once
#include "common.c"

void process_surround(uint16_t keycode, keyrecord_t *record)
{
    switch (keycode)
    {
        case QuotWrap:
            if (record->event.pressed)
            {
                // shift pressed, assume "
                if (get_mods() & MOD_MASK_SHIFT)
                {
                    del_mods(MOD_MASK_SHIFT);
                    SEND_STRING(SS_LCTL(SS_TAP(X_LEFT)) SS_LSFT(SS_TAP(X_QUOT)) SS_LCTL(SS_TAP(X_RGHT)) SS_LSFT(SS_TAP(X_QUOT)) SS_TAP(X_LEFT));
                }
                // shift not pressed, assume '
                else
                    SEND_STRING(SS_LCTL(SS_TAP(X_LEFT)) SS_TAP(X_QUOT) SS_LCTL(SS_TAP(X_RGHT)) SS_TAP(X_QUOT) SS_TAP(X_LEFT));
            }
            break;
        case GraveWrap:
            if (record->event.pressed)
            {
                SEND_STRING(SS_LCTL(SS_TAP(X_LEFT)) SS_TAP(X_GRV) SS_LCTL(SS_TAP(X_RGHT)) SS_TAP(X_GRV) SS_TAP(X_LEFT));
            }
            break;
        case BracketWrap:
            if (record->event.pressed)
            {
                if (get_mods() & MOD_MASK_SHIFT)
                    del_mods(MOD_MASK_SHIFT);
                SEND_STRING(SS_LCTL(SS_TAP(X_LEFT)) SS_LSFT(SS_TAP(X_9)) SS_LCTL(SS_TAP(X_RGHT)) SS_LSFT(SS_TAP(X_0)) SS_TAP(X_LEFT));
            }
            break;
        case SpaceWrap:
            if (record->event.pressed)
            {
                SEND_STRING(SS_LCTL(SS_TAP(X_LEFT)) SS_LSFT(SS_TAP(X_SPC)) SS_LCTL(SS_TAP(X_RGHT)) SS_LSFT(SS_TAP(X_SPC)));
            }
            break;
        case SqBracketWrap:
            if (record->event.pressed)
            {
                if (get_mods() & MOD_MASK_SHIFT)
                {
                    del_mods(MOD_MASK_SHIFT);
                    SEND_STRING(SS_LCTL(SS_TAP(X_LEFT)) SS_LSFT(SS_TAP(X_LBRC)) SS_LCTL(SS_TAP(X_RGHT)) SS_LSFT(SS_TAP(X_RBRC)) SS_TAP(X_LEFT));
                }
                else
                    SEND_STRING(SS_LCTL(SS_TAP(X_LEFT)) SS_TAP(X_LBRC) SS_LCTL(SS_TAP(X_RGHT)) SS_TAP(X_RBRC) SS_TAP(X_LEFT));
            }
            break;
    }
}