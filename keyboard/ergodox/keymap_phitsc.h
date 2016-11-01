//

/* CH KEYS

    degree      KC_GRAVE
    question    KC_MINUS
    caret       KC_EQUAL
    lessThan    KC_NONUS_BSLASH
    ü           KC_LBRACKET
    exclamation KC_RBRACKET
    ö           KC_SCOLON
    ä           KC_QUOTE
    dollar      KC_NONUS_HASH
    comma       KC_COMMA
    period      KC_DOT
    dash        KC_SLASH

*/

static const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
 
    KEYMAP(  // Layer0: default, leftled:none
        // left hand
        GRV , 1,   2,   3,   4,   5,  LGUI,
        TAB , Q,   W,   E,   R,   T,  F9,
        FN1,  A,   S,   D,   F,   G,
        LSFT, Z,   X,   C,   V,   B,  F8,
        FN3 , NUBS,FN2, LALT,FN21,
                                       F5, F3,
                                           F2,
                                 BSPC, DEL,LCTL,
        // right hand
             FN3 ,  6,  7,  8,  9,  0,  MINS,
             FN1 ,  Y,   U,   I,   O,   P,   LBRC,
                    H,   J,   K,   L,   SCLN,QUOT,
             RSFT,  N,   M,   COMM,DOT, UP  ,SLSH,
                       FN22, FN2,LEFT,DOWN,RIGHT,
        PSCR,BRK,
        F11,
        F10, ENT ,SPC
    ),

    KEYMAP(  // Layer1:
        // left hand
        FN23,TRNS,FN26,FN25,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,FN29,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,FN4 ,TRNS,
                                      TRNS,TRNS,
                                           TRNS,
                                 SPC, ENT, TRNS,
        // right hand
             TRNS,TRNS,FN16,TRNS,TRNS,FN4 ,EQL,
             TRNS,TRNS,FN11,FN12,TRNS,TRNS,RBRC,
                  FN15,FN9 ,FN10,TRNS,FN24,NUHS,
             TRNS,TRNS,FN13,FN14,TRNS,PGUP,TRNS,
                       TRNS,TRNS,HOME,PGDN,END,
        TRNS,TRNS,
        TRNS,
        TRNS,TRNS,TRNS
    ),

    KEYMAP(  // Layer2:
        // left hand
        TRNS,F1,  F2,  F3,  TRNS,TRNS,TRNS,
        TRNS,F4,  F5,  F6,  TRNS,TRNS, TRNS,
        TRNS,F7,  F8,  F9,  TRNS,TRNS,
        TRNS,F10, F11, F12, TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,
                                      TRNS,TRNS,
                                           TRNS,
                                 TRNS,TRNS,TRNS,
        // right hand
             TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
             TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
                  TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
             TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
                       TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,
        TRNS,
        TRNS,TRNS,TRNS
    ),

    KEYMAP(  // Layer3:
        // left hand
        FN0, TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,FN28,
                                      TRNS,TRNS,
                                           TRNS,
                                 TRNS,TRNS,TRNS,
        // right hand
             TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,FN0,
             TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
                  TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
             TRNS,TRNS,TRNS,TRNS,TRNS,VOLU,TRNS,
                       MUTE,MPLY,MPRV,VOLD,MNXT,
        TRNS,TRNS,
        TRNS,
        TRNS,TRNS,FN27
    ),

    KEYMAP(  // Layer4:
        // left hand
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,
                                      TRNS,TRNS,
                                           TRNS,
                                 TRNS,TRNS,TRNS,
        // right hand
             TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
             TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
                  TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
             TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
                       TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,
        TRNS,
        TRNS,TRNS,TRNS
    ),

    KEYMAP(  // Layer5:
        // left hand
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,
                                      TRNS,TRNS,
                                           TRNS,
                                 TRNS,TRNS,TRNS,
        // right hand
             TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
             TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
                  TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
             TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
                       TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,
        TRNS,
        TRNS,TRNS,TRNS
    ),

    KEYMAP(  // Layer6:
        // left hand
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,
                                      TRNS,TRNS,
                                           TRNS,
                                 TRNS,TRNS,TRNS,
        // right hand
             TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
             TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
                  TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
             TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
                       TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,
        TRNS,
        TRNS,TRNS,TRNS
    ),

    //
    // rarely used
    //

    KEYMAP(  // Layer7:
        // left hand
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,
                                      TRNS,TRNS,
                                           TRNS,
                                 TRNS,TRNS,TRNS,
        // right hand
             TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
             TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
                  TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
             TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
                       TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,
        TRNS,
        TRNS,TRNS,TRNS
    ),

    KEYMAP(  // Layer8:
        // left hand
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,
                                      TRNS,TRNS,
                                           TRNS,
                                 TRNS,TRNS,TRNS,
        // right hand
             TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
             TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
                  TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
             TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
                       TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,
        TRNS,
        TRNS,TRNS,TRNS
    ),

/*
    // templates to copy from

    KEYMAP(  // LayerN: transparent on edges + hard-defined thumb keys, all others are empty
        // left hand
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,NO,  NO,  NO,  NO,  NO,  TRNS,
        TRNS,NO,  NO,  NO,  NO,  NO,
        TRNS,NO,  NO,  NO,  NO,  NO,  TRNS,
        TRNS,TRNS,TRNS,LALT,LGUI,
                                      TRNS,TRNS,
                                           TRNS,
                                 LCTL,LSFT,TRNS,
        // right hand
             TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
             TRNS,NO,  NO,  NO,  NO,  NO,  TRNS,
                  NO,  NO,  NO,  NO,  NO,  TRNS,
             TRNS,NO,  NO,  NO,  NO,  NO,  TRNS,
                       RGUI,RALT,TRNS,TRNS,TRNS,
        TRNS,TRNS,
        TRNS,
        TRNS,RSFT,RCTL
    ),
    KEYMAP(  // LayerN: fully transparent
        // left hand
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,
                                      TRNS,TRNS,
                                           TRNS,
                                 TRNS,TRNS,TRNS,
        // right hand
             TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
             TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
                  TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
             TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
                       TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,
        TRNS,
        TRNS,TRNS,TRNS
    ),
*/

};

/* id for user defined functions */
enum function_id {
    TEENSY_KEY,
};

/*
 * Fn action definition
 */
static const uint16_t PROGMEM fn_actions[] = {
    ACTION_FUNCTION(TEENSY_KEY),                    // FN0  - Teensy key

    ACTION_LAYER_MOMENTARY(1),                      // FN1 - Layer 1
    ACTION_LAYER_MOMENTARY(2),                      // FN2 - Layer 2
    ACTION_LAYER_MOMENTARY(3),                      // FN3 - Layer 3

    ACTION_MODS_KEY(MOD_LSFT, KC_RBRACKET),         // FN4
    ACTION_MODS_TAP_KEY(MOD_RSFT, KC_SLSH),         // FN5
    ACTION_LAYER_TOGGLE(2),                         // FN6 - Layer 2

    ACTION_MODS_KEY(MOD_LSFT, KC_8),                // FN7  = (
    ACTION_MODS_KEY(MOD_LSFT, KC_9),                // FN8  = )
    ACTION_MODS_KEY(MOD_RALT, KC_QUOTE),            // FN9  = {
    ACTION_MODS_KEY(MOD_RALT, KC_NONUS_HASH),       // FN10 = }
    ACTION_MODS_KEY(MOD_RALT, KC_LBRACKET),         // FN11 = [
    ACTION_MODS_KEY(MOD_RALT, KC_RBRACKET),         // FN12 = ]
    ACTION_KEY     (KC_NONUS_BSLASH),               // FN13 = <
    ACTION_MODS_KEY(MOD_LSFT, KC_NONUS_BSLASH),     // FN14 = >
    ACTION_MODS_KEY(MOD_RALT, KC_7),                // FN15 - |
    ACTION_MODS_KEY(MOD_RALT, KC_NONUS_BSLASH),     // FN16 = backslash

    ACTION_MODS_KEY(MOD_LSFT, KC_F5),               // FN17
    ACTION_MODS_KEY(MOD_LSFT, KC_F9),               // FN18
    ACTION_MODS_KEY(MOD_LSFT, KC_F10),              // FN19
    ACTION_MODS_KEY(MOD_LSFT, KC_F11),              // FN20

    ACTION_MODS_TAP_KEY(MOD_LCTL, KC_ESC),          // FN21
    ACTION_MODS_TAP_KEY(MOD_RCTL, KC_ESC),          // FN22

    ACTION_MODS_KEY(MOD_RALT, KC_EQUAL),            // FN23 = ~ (undead - Windows only)
    ACTION_MODS_KEY(MOD_RALT, KC_SCOLON),           // FN24 = ^ (undead - Windows only)

    ACTION_MODS_KEY(MOD_RALT, KC_3),                // FN25 = #
    ACTION_MODS_KEY(MOD_RALT, KC_2),                // FN26 = @

    ACTION_MODS_KEY(MOD_LCTL|MOD_LALT, KC_SPC),     // FN27 = Ctrl + Alt + Space
    ACTION_MODS_KEY(MOD_LCTL, KC_RBRC),             // FN28 = Cltr + diacr. 

    ACTION_MODS_KEY(MOD_RALT, KC_E),                // FN29 = €
};

void action_function(keyrecord_t *event, uint8_t id, uint8_t opt)
{
    print("action_function called\n");
    print("id  = "); phex(id); print("\n");
    print("opt = "); phex(opt); print("\n");
    if (id == TEENSY_KEY) {
        clear_keyboard();
        print("\n\nJump to bootloader... ");
        _delay_ms(250);
        bootloader_jump(); // should not return
        print("not supported.\n");
    }
}

