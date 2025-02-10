// Copyright 2022 Diego Palacios (@diepala)
// SPDX-License-Identifier: GPL-2.0

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
//    ┌────────────┬───┬───┬───┬──────┬───────┐                ┌───────┬──────┬───┬───┬───┬─────────────┐
//    │    tab     │ q │ w │ e │  r   │   t   │                │   y   │  u   │ i │ o │ p │    bspc     │
//    ├────────────┼───┼───┼───┼──────┼───────┤                ├───────┼──────┼───┼───┼───┼─────────────┤
//    │ LT(1, esc) │ a │ s │ d │  f   │   g   │                │   h   │  j   │ k │ l │ ; │      '      │
//    ├────────────┼───┼───┼───┼──────┼───────┤                ├───────┼──────┼───┼───┼───┼─────────────┤
//    │    lctl    │ z │ x │ c │  v   │   b   │                │   n   │  m   │ , │ . │ / │ RSFT_T(ent) │
//    └────────────┴───┴───┴───┼──────┼───────┼──────┐   ┌─────┼───────┼──────┼───┴───┴───┴─────────────┘
//                             │ lalt │ MO(2) │ lsft │   │ spc │ MO(3) │ lgui │                          
//                             └──────┴───────┴──────┘   └─────┴───────┴──────┘                          
[0] = LAYOUT_split_3x6_3(
  KC_TAB        , KC_Q , KC_W , KC_E , KC_R    , KC_T  ,                        KC_Y  , KC_U    , KC_I    , KC_O   , KC_P    , KC_BSPC       ,
  LT(1, KC_ESC) , KC_A , KC_S , KC_D , KC_F    , KC_G  ,                        KC_H  , KC_J    , KC_K    , KC_L   , KC_SCLN , KC_QUOT       ,
  KC_LCTL       , KC_Z , KC_X , KC_C , KC_V    , KC_B  ,                        KC_N  , KC_M    , KC_COMM , KC_DOT , KC_SLSH , RSFT_T(KC_ENT),
                                       KC_LALT , MO(2) , KC_LSFT ,     KC_SPC , MO(3) , KC_LGUI                                              
),

//    ┌──────┬─────────┬─────────┬─────────┬─────────┬─────────┐                ┌─────────┬─────────┬──────┬──────┬────┬─────────────┐
//    │ tab  │ LGUI(1) │ LGUI(2) │ LGUI(3) │ LGUI(4) │ LGUI(5) │                │ LGUI(6) │ LGUI(7) │ home │ end  │ no │ LCTL(bspc)  │
//    ├──────┼─────────┼─────────┼─────────┼─────────┼─────────┤                ├─────────┼─────────┼──────┼──────┼────┼─────────────┤
//    │      │   no    │   no    │   del   │   no    │   no    │                │  left   │  down   │  up  │ rght │ no │     no      │
//    ├──────┼─────────┼─────────┼─────────┼─────────┼─────────┤                ├─────────┼─────────┼──────┼──────┼────┼─────────────┤
//    │ lctl │   no    │   no    │   no    │   no    │   no    │                │   no    │   no    │  no  │  no  │ no │ RSFT_T(ent) │
//    └──────┴─────────┴─────────┴─────────┼─────────┼─────────┼──────┐   ┌─────┼─────────┼─────────┼──────┴──────┴────┴─────────────┘
//                                         │  lalt   │         │ lsft │   │ spc │         │         │                                 
//                                         └─────────┴─────────┴──────┘   └─────┴─────────┴─────────┘                                 
[1] = LAYOUT_split_3x6_3(
  KC_TAB  , LGUI(KC_1) , LGUI(KC_2) , LGUI(KC_3) , LGUI(KC_4) , LGUI(KC_5) ,                        LGUI(KC_6) , LGUI(KC_7) , KC_HOME , KC_END   , KC_NO , LCTL(KC_BSPC) ,
  KC_TRNS , KC_NO      , KC_NO      , KC_DEL     , KC_NO      , KC_NO      ,                        KC_LEFT    , KC_DOWN    , KC_UP   , KC_RIGHT , KC_NO , KC_NO         ,
  KC_LCTL , KC_NO      , KC_NO      , KC_NO      , KC_NO      , KC_NO      ,                        KC_NO      , KC_NO      , KC_NO   , KC_NO    , KC_NO , RSFT_T(KC_ENT),
                                                   KC_LALT    , KC_TRNS    , KC_LSFT ,     KC_SPC , KC_TRNS    , KC_TRNS                                                 
),

//    ┌──────┬───┬───┬───┬──────┬─────┐               ┌─────┬────┬───┬───┬────┬──────┐
//    │  ~   │ 1 │ 2 │ 3 │  4   │  5  │               │  6  │ 7  │ 8 │ 9 │ 0  │ bspc │
//    ├──────┼───┼───┼───┼──────┼─────┤               ├─────┼────┼───┼───┼────┼──────┤
//    │  no  │ ! │ @ │ # │  $   │  %  │               │  ^  │ *  │ - │ + │ no │  `   │
//    ├──────┼───┼───┼───┼──────┼─────┤               ├─────┼────┼───┼───┼────┼──────┤
//    │ lctl │ \ │ & │ | │  no  │ no  │               │ no  │ _  │ , │ . │ /  │  =   │
//    └──────┴───┴───┴───┼──────┼─────┼──────┐   ┌────┼─────┼────┼───┴───┴────┴──────┘
//                       │ lalt │     │ lsft │   │ no │     │ no │                    
//                       └──────┴─────┴──────┘   └────┴─────┴────┘                    
[2] = LAYOUT_split_3x6_3(
  KC_TILD , KC_1    , KC_2    , KC_3    , KC_4    , KC_5    ,                       KC_6    , KC_7    , KC_8    , KC_9    , KC_0    , KC_BSPC,
  KC_NO   , KC_EXLM , KC_AT   , KC_HASH , KC_DLR  , KC_PERC ,                       KC_CIRC , KC_ASTR , KC_MINS , KC_PLUS , KC_NO   , KC_GRV ,
  KC_LCTL , KC_BSLS , KC_AMPR , KC_PIPE , KC_NO   , KC_NO   ,                       KC_NO   , KC_UNDS , KC_COMM , KC_DOT  , KC_SLSH , KC_EQL ,
                                          KC_LALT , KC_TRNS , KC_LSFT ,     KC_NO , KC_TRNS , KC_NO                                          
),

//    ┌──────┬────┬─────┬─────┬──────┬─────┐               ┌────┬─────┬───┬───┬────┬────┐
//    │  ~   │ f1 │ f2  │ f3  │  f4  │ no  │               │ no │ no  │ ( │ ) │ no │ no │
//    ├──────┼────┼─────┼─────┼──────┼─────┤               ├────┼─────┼───┼───┼────┼────┤
//    │  no  │ f5 │ f6  │ f7  │  f8  │ no  │               │ no │ no  │ { │ } │ no │ `  │
//    ├──────┼────┼─────┼─────┼──────┼─────┤               ├────┼─────┼───┼───┼────┼────┤
//    │ lctl │ f9 │ f10 │ f11 │ f12  │ no  │               │ no │ no  │ [ │ ] │ no │ no │
//    └──────┴────┴─────┴─────┼──────┼─────┼──────┐   ┌────┼────┼─────┼───┴───┴────┴────┘
//                            │ lalt │     │ lsft │   │ no │ no │     │                  
//                            └──────┴─────┴──────┘   └────┴────┴─────┘                  
[3] = LAYOUT_split_3x6_3(
  KC_TILD , KC_F1 , KC_F2  , KC_F3  , KC_F4   , KC_NO   ,                       KC_NO , KC_NO   , KC_LPRN , KC_RPRN , KC_NO , KC_NO ,
  KC_NO   , KC_F5 , KC_F6  , KC_F7  , KC_F8   , KC_NO   ,                       KC_NO , KC_NO   , KC_LCBR , KC_RCBR , KC_NO , KC_GRV,
  KC_LCTL , KC_F9 , KC_F10 , KC_F11 , KC_F12  , KC_NO   ,                       KC_NO , KC_NO   , KC_LBRC , KC_RBRC , KC_NO , KC_NO ,
                                      KC_LALT , KC_TRNS , KC_LSFT ,     KC_NO , KC_NO , KC_TRNS                                     
)
};

