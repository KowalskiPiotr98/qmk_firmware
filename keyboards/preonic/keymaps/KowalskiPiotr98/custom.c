#include QMK_KEYBOARD_H

enum preonic_keycodes
{
    Lambda = SAFE_RANGE,
    Nequal
};

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
    }

    return true;
}