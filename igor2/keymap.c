// this is the style you want to emulate.
// This is the canonical layout file for the Quantum project. If you want to add another keyboard,
// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.

#include QMK_KEYBOARD_H
/*#include "sendstring_brazilian_abnt2.h"*/

#ifdef COMBO_ENABLE
#    include "combos.h"
#endif

enum ferris_tap_dances {
  TD_SPC_TAB
};


enum ferris_layers {
  _BASE,
  _COMK,
  _NUM,
  _FUN,
  _MOUSE,
  _NAV,
  _SYM,
  _ACT,
  _GAME,
  _WEAP
};

enum custom_keycodes {
    CEDILHA,            // ç direct key
    AO,                 // ã direct key
    ASPAS,              // " direct key
    BR_AACT,
	  BR_AGRV,
	  BR_ATIL,
	  BR_ACIR,
	  BR_EACT,
	  BR_ECIR,
	  BR_IACT,
	  BR_OACT,
	  BR_OTIL,
	  BR_OCIR,
	  BR_UACT,
    KC_CCED,

};


#define KC_STSC RSFT_T(KC_SCLN)
#define KC_STLA LSFT_T(KC_A)
#define KC_CSHZ LCTL_T(KC_Z)
#define KC_CLSH RCTL_T(KC_SLSH)
#define KC_RSPC LT(_SYM, KC_SPC)
#define KC_BSM1 LT(1, KC_BSPC)
#define KC_GUTA GUI_T(KC_TAB)
#define KC_CLGV CTL_T(KC_GRV)
#define KC_BSPN LT(_NUM, KC_SPC)
#define KC_FESC LT(_FUN, KC_ESC)
#define KC_SESC LSFT_T(KC_ESC)
#define KC_STIL LSFT_T(KC_TILD)
#define KC_SSLS RSFT_T(KC_BSLS)
#define KC_WL C(G(KC_LEFT))
#define KC_WR C(G(KC_RIGHT))
#define KC_WD C(G(KC_D))
#define KC_ENTN LT(_NAV, KC_ENT)
#define KC_ATAB A(KC_TAB)
#define KC_AGRV RALT(KC_GRV)
#define KC_TART RALT(KC_TILD)
#define KC_MOUT LT(_MOUSE,KC_T)
/*qwerty*/
#define KC_AGUI LGUI_T(KC_A)
#define KC_SALT LALT_T(KC_S)
#define KC_DSFT LSFT_T(KC_D)
#define KC_FCTL LCTL_T(KC_F)
#define KC_JRCT RCTL_T(KC_J) 
#define KC_KRST RSFT_T(KC_K)
#define KC_LLAT RALT_T(KC_L)
#define KC_GSCL RGUI_T(KC_SCLN)
#define KC_RGAT RALT_T(KC_G)
/*colemak*/
#define KC_AGUI LGUI_T(KC_A)
#define KC_EALT LALT_T(KC_R)
#define KC_SSFT LSFT_T(KC_S)
#define KC_TCTL LCTL_T(KC_T)
#define KC_NRCT RCTL_T(KC_N) 
#define KC_ERST RSFT_T(KC_E)
#define KC_ILAT LALT_T(KC_I)
#define KC_OSCL RGUI_T(KC_O)

  






const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_BASE] = LAYOUT( /* QWERTY */
    KC_Q,    KC_W,    KC_E,   KC_R, KC_MOUT,            KC_Y,    KC_U,  KC_I,    KC_O,      KC_P,
    KC_AGUI,KC_SALT,KC_DSFT,KC_FCTL,KC_RGAT,            KC_H, KC_JRCT, KC_KRST, KC_LLAT, KC_GSCL,
    KC_Z, KC_X,    KC_C,    KC_V,      KC_B,            KC_N,    KC_M,  KC_COMM, KC_DOT, KC_SLSH,
                           KC_FESC, KC_BSPN,            KC_RSPC, KC_ENTN
  ),


  [_COMK] = LAYOUT( /* COLEMAK */
    KC_Q,    KC_W,    KC_F,   KC_P,    KC_G,                    KC_J, KC_L, KC_U,    KC_Y,   KC_QUOT,
    KC_AGUI, KC_EALT, KC_SSFT,KC_TCTL, KC_D,                    KC_H, KC_NRCT, KC_ERST,KC_ILAT,KC_OSCL,
    KC_CSHZ, KC_X,    KC_C,   KC_V,    KC_B,                    KC_K, KC_M, KC_COMM, KC_DOT, KC_SLSH,
                           KC_TRNS, KC_TRNS,                    KC_TRNS, KC_TRNS
                    

  ),
  [_NUM] = LAYOUT( 
    KC_ESC,   KC_PERC, KC_CIRC, KC_AMPR, KC_LCBR, 			    KC_PSLS, KC_7, KC_8, KC_9, KC_BSPC,
		KC_TAB,   KC_MINS, KC_PLUS, KC_EQL,  KC_RCBR,		       	KC_PAST, KC_4, KC_5, KC_6, KC_PPLS,
		TG(_NAV), KC_PSLS, KC_ASTR, KC_TART, KC_GRV,		        KC_PMNS, KC_1, KC_2, KC_3, KC_PENT,
					               OSM(MOD_LSFT), TG(_NUM),			      KC_0, KC_SPC
  ),

  [_FUN] = LAYOUT( /* [> LOWER <] */
    KC_F1,   KC_F2,   KC_F3,   KC_F4,     KC_F5,         KC_VOLU, KC_WAKE,  KC_MENU,  KC_PWR,  KC_BSPC,
    KC_TAB,  KC_F6,   KC_F10,  KC_F11,   KC_F12,         KC_VOLD, KC_MPRV,  KC_MNXT,  KC_TRNS, TG(_MOUSE),
    KC_SESC, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,         KC_COPY,  KC_PSTE, KC_UNDO,  KC_CUT,  KC_ENT,
                               KC_TRNS, KC_TRNS,         KC_TRNS, QK_BOOT   
  ),

  [_SYM] = LAYOUT( /* [> RAISE <] */
    KC_PERC ,KC_CIRC ,KC_DLR  ,_______ ,_______,     _______,KC_LCBR ,KC_RCBR ,KC_AT   ,KC_HASH ,
    KC_SLSH ,KC_ASTR ,KC_MINS ,KC_PLUS ,KC_CAPS,     _______,KC_LPRN ,KC_RPRN ,KC_LT   ,KC_GT   ,
    KC_PIPE ,KC_AMPR ,KC_EXLM ,KC_EQL  ,CEDILHA,     _______,KC_LBRC ,KC_RBRC ,KC_TILD ,KC_GRV  ,
                               _______, KC_LGUI,     _______, _______
  ),


 /* [_ACT] = LAYOUT_split_3x5_2(
			XXXXXXX, BR_CCED, XXXXXXX, XXXXXXX, XXXXXXX,    XXXXXXX, XXXXXXX, BR_UACT, BR_ATIL, BR_OTIL,
			XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,    XXXXXXX, XXXXXXX, BR_IACT, BR_AACT, BR_OACT,
			XXXXXXX, XXXXXXX, XXXXXXX, BR_ECIR, XXXXXXX,    XXXXXXX, XXXXXXX, BR_AGRV, BR_ACIR, BR_OCIR,
			                           BR_EACT, XXXXXXX,    XXXXXXX, XXXXXXX, 
	),*/

  [_NAV] = LAYOUT( /* [> RAISE <] */
    KC_ESC,  KC_PGUP,   KC_END,    TG(_GAME), KC_ATAB,     KC_PSCR,  KC_WL, KC_UP, KC_WR , KC_BSPC,
    KC_TAB,  KC_PGDN,   KC_HOME,    DF(_COMK),TG(_NUM),    KC_DEL,  KC_LEFT,  KC_DOWN,KC_RIGHT , KC_WD,
    KC_LCTL,  XXXXXXX, XXXXXXX ,   DF(_BASE), TG(_NAV),    KC_COPY,  KC_PSTE, KC_UNDO, KC_CUT,  XXXXXXX,
                                    _______, _______,     KC_LGUI, _______
  ),

[_GAME] = LAYOUT_split_3x5_2( /* [> game <] */
    KC_TAB,  KC_Q, KC_W, KC_E, KC_R,             KC_Y, KC_U, KC_I, KC_O,      TG(_GAME),
    KC_LSFT, KC_A, KC_S, KC_D, KC_F,             KC_H, KC_J, KC_K, KC_L,      KC_STSC,
    KC_LCTL, KC_Z, KC_X, KC_C, KC_V,             KC_N, KC_M, KC_COMM, KC_DOT, KC_CLSH ,
            KC_ESC,LT(_WEAP,KC_SPC),             _______, _______
  ),
[_WEAP] = LAYOUT_split_3x5_2( /* [> armas <] */
    KC_ESC,  KC_1, KC_2,  KC_3,  KC_4,            KC_Y,  KC_U,  KC_I,  KC_O, KC_BSPC,
    KC_LSFT, KC_5, KC_F1, KC_F2, KC_F3,           KC_H,  KC_J,  KC_K,  KC_L,  KC_STSC,
    KC_LCTL, KC_F4, KC_F5, KC_F6, KC_M,           KC_N,  KC_M,  KC_COMM, KC_DOT, RCTL_T(KC_SLSH),
                     DF(_BASE), _______,           _______, _______
  ), 

[_MOUSE] = LAYOUT_split_3x5_2( /* [> armas <] */
    TG(_MOUSE), KC_MYCM, KC_CALC,   KC_WL,     KC_WR,           KC_WH_U, KC_BTN1,  KC_MS_U,  KC_BTN2, KC_BSPC,
    TG(_NAV),   TG(_NUM),TG(_GAME), KC_WD,   KC_BRIU,           KC_WH_D, KC_MS_L,  KC_MS_D,  KC_MS_R, XXXXXXX,
    XXXXXXX, XXXXXXX, XXXXXXX,      XXXXXXX, KC_BRID,           KC_WBAK, KC_WFWD,  KC_WSTP,  KC_WREF, XXXXXXX,
                                  DF(_BASE), _______,           _______, _______
  ),        

};

// Tap Dance Definitions
qk_tap_dance_action_t tap_dance_actions[] = {
    // Tap once for Space, twice for Tab
    [TD_SPC_TAB] = ACTION_TAP_DANCE_DOUBLE(KC_SPC, KC_TAB)
};





bool process_record_user(uint16_t keycode, keyrecord_t* record) {
    switch (keycode) {
        // ç key
        case CEDILHA:
            if (record->event.pressed) {
                register_code(KC_QUOT);
                unregister_code(KC_QUOT);
                register_code(KC_C);
                unregister_code(KC_C);
            }
            break;
            return false;

        // ã key
        case AO:
            if (record->event.pressed) {
                register_code(KC_LSFT);
                register_code(KC_GRV);
                unregister_code(KC_LSFT);
                unregister_code(KC_GRV);
                register_code(KC_A);
                unregister_code(KC_A);
                
            }
            break;
            return false;

        // direct " key
        case ASPAS:
            if (record->event.pressed) {
                register_code(KC_LSFT);
                register_code(KC_QUOT);
                register_code(KC_SPC);
                unregister_code(KC_SPC);
                unregister_code(KC_QUOT);
                unregister_code(KC_LSFT);
            }
            break;
            return false;

        // Luna jumping on space
       case KC_CCED:
            if (record->event.pressed) {
                SEND_STRING("Ç ");
            }
            break;
            return false;

            
    }
    return true;

}


