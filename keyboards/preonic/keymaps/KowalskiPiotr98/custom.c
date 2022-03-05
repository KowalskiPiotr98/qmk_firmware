#include QMK_KEYBOARD_H
#include "common.c"
#include "word_surround.c"

bool process_record_user(uint16_t keycode, keyrecord_t *record)
{
    switch (keycode)
    {
        case Lambda:
            if (record->event.pressed)
                SEND_STRING("=>");
            break;
        case Nequal:
            if (record->event.pressed)
                SEND_STRING("!=");
            break;
        case SpaceWrap:
        case GraveWrap:
        case SqBracketWrap:
        case BracketWrap:
        case QuotWrap:
            process_surround(keycode, record);
            break;
    }

    return true;
}