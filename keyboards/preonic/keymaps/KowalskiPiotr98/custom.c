#include QMK_KEYBOARD_H
#include "common.c"
#include "word_surround.c"
#include "window_move.c"
#include "escaped_characters.c"

bool process_record_user(uint16_t keycode, keyrecord_t *record)
{
    uint8_t mods = get_mods();

    switch (keycode)
    {
        case Lambda:
            if (record->event.pressed)
                SEND_STRING(SS_TAP(X_EQL) SS_LSFT(SS_TAP(X_DOT)));
            break;
        case Nequal:
            if (record->event.pressed)
                SEND_STRING(SS_LSFT(SS_TAP(X_1)) SS_TAP(X_EQL));
            break;
        case WindowLeft:
        case WindowRight:
        case WindowUp:
        case WindowDown:
            move_window(keycode, record);
            set_mods(mods);
            return false;
        case SpaceWrap:
        case GraveWrap:
        case SqBracketWrap:
        case BracketWrap:
        case QuotWrap:
        case InnerSel:
            process_surround(keycode, record);
            set_mods(mods);
            return false;
        case EscQuot:
            process_print_escaped(keycode, record);
            set_mods(mods);
            return false;
    }

    return true;
}