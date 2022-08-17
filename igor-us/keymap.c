// this is the style you want to emulate.
// This is the canonical layout file for the Quantum project. If you want to add another keyboard,
// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.

#include QMK_KEYBOARD_H
/*#include "sendstring_brazilian_abnt2.h"*/

/*
#ifdef COMBO_ENABLE
#    include "combos.h"
#endif*/

enum ferris_tap_dances {
  TD_SPC_TAB
};


enum ferris_layers {
  _BASE,
  _COLK,
  _CONFIG,
  _NUM,
  _FUN,
  _MOUSE,
  _NAV,
  _SYM,
  _GAME,
  _WEAP
};

enum custom_keycodes {
    CEDILHA,            // ç direct key
    AO,                 // ã direct key
    ASPAS,              // " direct key
    KC_CCED,
    QUEST,

};

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
#define KC_ENBS LT(_NAV, KC_BSPC)
#define KC_ATAB A(KC_TAB)
#define KC_AGRV RALT(KC_GRV)
#define KC_TART RALT(KC_TILD)
#define KC_QQST RALT(KC_W)

/*qwerty*/
#define HM_A LGUI_T(KC_A)
#define HM_S LALT_T(KC_S)
#define HM_D RSFT_T(KC_D)
#define HM_F LCTL_T(KC_F)
#define HM_G RALT_T(KC_G)


#define HM_H LALT_T(KC_H)
#define HM_J RCTL_T(KC_J) 
#define HM_K RSFT_T(KC_K)
#define HM_L RALT_T(KC_L)
#define HMLN RGUI_T(KC_SCLN)

#define HM_E LT(_CONFIG, KC_E)
#define MT_T LT(_MOUSE,KC_T)
/*colemak*/
#define CL_A LGUI_T(KC_A)
#define CL_R LALT_T(KC_R)
#define CL_S LSFT_T(KC_S)
#define CL_T LCTL_T(KC_T)
#define CL_D RALT_T(KC_D)


#define CL_N RCTL_T(KC_N) 
#define CL_E RSFT_T(KC_E)
#define CL_I RALT_T(KC_I)
#define CL_H LALT_T(KC_H)
#define CL_O RGUI_T(KC_O)


#define CL_F LT(_CONFIG, KC_F) 
#define MT_G LT(_MOUSE,KC_T)



const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_BASE] = LAYOUT( /* QWERTY */
    KC_Q,    KC_W,  HM_E,   KC_R,     MT_T,             KC_Y,    KC_U,  KC_I,    KC_O,      KC_P,
    HM_A,  HM_S,   HM_D,    HM_F,      HM_G,            HM_H,    HM_J,  HM_K,    HM_L,      HMLN,
    KC_Z, KC_X,    KC_C,    KC_V,      KC_B,            KC_N,    KC_M,  KC_COMM, KC_DOT, KC_SLSH,
                           KC_FESC, KC_BSPN,            KC_RSPC, KC_ENBS
  ),

  [_COLK] = LAYOUT(
    KC_Q,    KC_W,    CL_F,    KC_P,    MT_G,       KC_J,    KC_L,    KC_U,    KC_Y,    KC_SCLN,
    CL_A,    CL_R,    CL_S,    CL_T,    CL_D,       CL_H,    CL_N,    CL_E,    CL_I,     CL_O,
    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,       KC_K,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,
                           KC_FESC, KC_BSPN,            KC_RSPC, KC_ENBS
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
    KC_PERC ,KC_CIRC ,KC_LCBR, KC_DLR ,KC_QUES,      KC_UNDS,KC_LCBR ,KC_RCBR ,KC_AT   ,KC_HASH ,
    KC_SLSH ,KC_ASTR ,KC_MINS ,KC_PLUS ,KC_CAPS,     KC_TILD,KC_LPRN ,KC_RPRN ,KC_LT   ,KC_GT   ,
    KC_PIPE ,KC_AMPR ,KC_EXLM ,KC_EQL  ,KC_COLN,     KC_QUOT,KC_LBRC ,KC_RBRC ,KC_TILD ,KC_GRV  ,
                               KC_QQST, KC_LGUI,     _______, _______
  ),

  [_NAV] = LAYOUT( /* [> RAISE <] */
    KC_ESC,  KC_PGUP,   KC_END,    KC_TRNS, KC_ATAB,     KC_PSCR,  KC_WL, KC_UP, KC_WR , KC_BSPC,
    KC_TAB,  KC_PGDN,   KC_HOME,   KC_TRNS,TG(_NUM),     KC_DEL,  KC_LEFT,  KC_DOWN,KC_RIGHT , KC_WD,
    KC_LCTL,  XXXXXXX, XXXXXXX ,   KC_TRNS, TG(_NAV),    KC_COPY,  KC_PSTE, KC_UNDO, KC_CUT,  XXXXXXX,
                             OSM(MOD_LSFT), _______,     KC_LGUI, _______
  ),

[_GAME] = LAYOUT_split_3x5_2( /* [> game <] */
    KC_TAB,  KC_Q, KC_W, KC_E, KC_R,             KC_Y, KC_U, KC_I, KC_O,      TG(_GAME),
    KC_LSFT, KC_A, KC_S, KC_D, KC_F,             KC_H, KC_J, KC_K, KC_L,      _______,
    KC_LCTL, KC_Z, KC_X, KC_C, KC_V,             KC_N, KC_M, KC_COMM, KC_DOT, _______ ,
            KC_ESC,LT(_WEAP,KC_SPC),             _______, _______
  ),
[_WEAP] = LAYOUT_split_3x5_2( /* [> armas <] */
    KC_ESC,  KC_1, KC_2,  KC_3,  KC_4,            KC_Y,  KC_U,  KC_I,  KC_O, KC_BSPC,
    KC_LSFT, KC_5, KC_F1, KC_F2, KC_F3,           KC_H,  KC_J,  KC_K,  KC_L,  _______,
    KC_LCTL, KC_F4, KC_F5, KC_F6, KC_M,           KC_N,  KC_M,  KC_COMM, KC_DOT, RCTL_T(KC_SLSH),
                     DF(_BASE), _______,           _______, _______
  ), 

[_MOUSE] = LAYOUT_split_3x5_2( /* [> armas <] */
    TG(_MOUSE), KC_MYCM, KC_CALC,   KC_WL,     KC_WR,           KC_WH_U, KC_BTN1,  KC_MS_U,  KC_BTN2, KC_BSPC,
    TG(_NAV),   TG(_NUM),TG(_GAME), KC_WD,   KC_BRIU,           KC_WH_D, KC_MS_L,  KC_MS_D,  KC_MS_R, XXXXXXX,
    XXXXXXX, XXXXXXX, XXXXXXX,      XXXXXXX, KC_BRID,           KC_WBAK, KC_WFWD,  KC_WSTP,  KC_WREF, XXXXXXX,
                                  DF(_BASE), _______,           _______, _______
  ),        


[_CONFIG] = LAYOUT( /* COLEMAK */
    QK_BOOT, RESET, KC_TRNS, TG(_GAME),DF(_COLK),                       KC_TRNS,KC_TRNS, KC_TRNS,KC_TRNS,KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,    KC_TRNS,                    KC_TRNS,KC_TRNS, KC_TRNS,KC_TRNS,KC_TRNS,
    KC_TRNS   ,KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS,                    KC_TRNS,KC_TRNS, KC_TRNS,KC_TRNS,KC_TRNS,
                                  KC_TRNS, DF(_BASE),                  KC_TRNS, KC_TRNS
                    
  )
};

// Tap Dance Definitions
qk_tap_dance_action_t tap_dance_actions[] = {
    // Tap once for Space, twice for Tab
    [TD_SPC_TAB] = ACTION_TAP_DANCE_DOUBLE(KC_SPC, KC_EXLM)
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


      case QUEST:
            if (record->event.pressed) {
                register_code(KC_QUOT);
                unregister_code(KC_QUOT);
                register_code(KC_C);
                unregister_code(KC_C);
            }
            break;
            return false;

            
    }
    return true;

};


#ifdef COMBO_ENABLE
enum combos {
COMBO_1,
COMBO_2,
COMBO_3,
COMBO_4,
COMBO_5,
COMBO_6,
COMBO_7,
COMBO_8,
COMBO_9,
COMBO_0,
COMBO_LPRN,
COMBO_RPRN,
COMBO_TILD,

COMBO_LCBR,
COMBO_RCBR,
COMBO_LT,
COMBO_GT,
COMBO_TAB,
COMBO_NUBS,
COMBO_CAPS,
COMBO_ENT,
COMBO_MINS,
COMBO_EQL,
COMBO_TIL,
COMBO_NUHS,
COMBO_ESC,
COMBO_GRV,
COMBO_BSPC,
};



const uint16_t PROGMEM combo_1[] = {KC_Q, HM_A, COMBO_END};
const uint16_t PROGMEM combo_2[] = {KC_W, HM_S, COMBO_END};
const uint16_t PROGMEM combo_3[] = {HM_E, HM_D, COMBO_END};
const uint16_t PROGMEM combo_4[] = {KC_R, HM_F, COMBO_END};
const uint16_t PROGMEM combo_5[] = {MT_T, KC_G, COMBO_END};
const uint16_t PROGMEM combo_6[] = {KC_Y, KC_H, COMBO_END};
const uint16_t PROGMEM combo_7[] = {KC_U, HM_J, COMBO_END};
const uint16_t PROGMEM combo_8[] = {KC_I, HM_K, COMBO_END};
const uint16_t PROGMEM combo_9[] = {KC_O, HM_L, COMBO_END};
const uint16_t PROGMEM combo_0[] = {KC_P, HMLN, COMBO_END};
const uint16_t PROGMEM combo_lprn[] = {HM_D, HM_F, COMBO_END};
const uint16_t PROGMEM combo_rprn[] = {HM_J, HM_K, COMBO_END};
const uint16_t PROGMEM combo_tild[] = {HM_A, HM_S, COMBO_END};
const uint16_t PROGMEM combo_rcbr[] = {KC_R, MT_T, COMBO_END};
const uint16_t PROGMEM combo_lcbr[] = {HM_F, HM_G, COMBO_END};

const uint16_t PROGMEM combo_lt[] = {HM_S, HM_D, COMBO_END};
const uint16_t PROGMEM combo_gt[] = {HM_K, HM_L, COMBO_END};
const uint16_t PROGMEM combo_tab[] = {KC_Q, KC_W, COMBO_END};
const uint16_t PROGMEM combo_nubs[] = {HM_A, KC_Z, COMBO_END};
const uint16_t PROGMEM combo_caps[] = {KC_Z, KC_X, KC_C, KC_V, COMBO_END};
const uint16_t PROGMEM combo_ent[] = { HM_L, HMLN, COMBO_END};
const uint16_t PROGMEM combo_mins[] = {KC_M, KC_COMM, COMBO_END};
const uint16_t PROGMEM combo_eql[] = {KC_COMM, KC_DOT,  COMBO_END};
const uint16_t PROGMEM combo_til[] = {HM_H, HM_J, COMBO_END};
const uint16_t PROGMEM combo_nuhs[] = {HM_L, KC_DOT, COMBO_END};
const uint16_t PROGMEM combo_esc[] = {HM_S, HM_D, HM_F, COMBO_END};
const uint16_t PROGMEM combo_grv[] = {HM_S, KC_X, COMBO_END};
const uint16_t PROGMEM combo_bspc[] = {KC_I, KC_O, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
    [COMBO_1] = COMBO(combo_1, KC_1),
    [COMBO_2] = COMBO(combo_2, KC_2),
    [COMBO_3] = COMBO(combo_3, KC_3),
    [COMBO_4] = COMBO(combo_4, KC_4),
    [COMBO_5] = COMBO(combo_5, KC_5),
    [COMBO_6] = COMBO(combo_6, KC_6),
    [COMBO_7] = COMBO(combo_7, KC_7),
    [COMBO_8] = COMBO(combo_8, KC_8),
    [COMBO_9] = COMBO(combo_9, KC_9),
    [COMBO_0] = COMBO(combo_0, KC_0),
    [COMBO_LPRN] = COMBO(combo_lprn, KC_LPRN),
    [COMBO_RPRN] = COMBO(combo_rprn, KC_RPRN),
    [COMBO_LCBR] = COMBO(combo_lcbr, KC_QUOT),
   
    [COMBO_TILD] = COMBO(combo_tild, KC_LBRC),
    [COMBO_RCBR] = COMBO(combo_rcbr, A(KC_TAB)),
    [COMBO_LT] = COMBO(combo_lt, KC_LT),
    [COMBO_GT] = COMBO(combo_gt, KC_GT),
    [COMBO_TAB] = COMBO(combo_tab, KC_TAB),
    [COMBO_NUBS] = COMBO(combo_nubs, KC_NUBS),
    [COMBO_CAPS] = COMBO(combo_caps, KC_CAPS),
    [COMBO_ENT] = COMBO(combo_ent, KC_ENT),
    [COMBO_MINS] = COMBO(combo_mins, KC_MINS),
    [COMBO_EQL] = COMBO(combo_eql, KC_EQL),
    [COMBO_TIL] = COMBO(combo_til, S(KC_QUOT)),
    [COMBO_NUHS] = COMBO(combo_nuhs, KC_NUHS),
    [COMBO_ESC] = COMBO(combo_esc, KC_ESC),
    [COMBO_GRV] = COMBO(combo_grv, KC_GRV),
    [COMBO_BSPC] = COMBO(combo_bspc, KC_BSPC),
};
#endif







