#include QMK_KEYBOARD_H
#include "common.c"
#include "word_surround.c"
#include "escaped_characters.c"

int linuxSwapEnabled = 0;

void press_third_left_most_key(bool pressed)
{
    if (pressed)
    {
        if (linuxSwapEnabled)
            register_code(KC_LALT);
        else
            register_code(KC_LGUI);
    }
    else
    {
        if (linuxSwapEnabled)
            unregister_code(KC_LALT);
        else
            unregister_code(KC_LGUI);
    }
}

void press_second_left_most_key(bool pressed)
{
    if (pressed)
    {
        if (linuxSwapEnabled)
            register_code(KC_LGUI);
        else
            register_code(KC_LALT);
    }
    else
    {
        if (linuxSwapEnabled)
            unregister_code(KC_LGUI);
        else
            unregister_code(KC_LALT);
    }
}

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
        case Shrug:
            if (record->event.pressed)
            {
                del_mods(get_mods());
                //this requires a custom software under Windows to display properly
                //send_unicode_string("¯\\_(ツ)_/¯");
                set_mods(mods);
            }
            return false;
        case LinuxSwap:
            if (record->event.pressed)
            {
                linuxSwapEnabled = 1;
            }
            return false;
        case LALT:
            press_second_left_most_key(record->event.pressed);
            return true;
        case LGUI:
            press_third_left_most_key(record->event.pressed);
            return true;
    }

    return true;
}