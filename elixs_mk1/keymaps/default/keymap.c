// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┬───┬───┬───┐
     * │Esc│ Q │ W │ E │ R │ T │
     * ├───┼───┼───┼───┼───┼───┤
     * │Sft│ A │ S │ D │ F │ G │
     * ├───┼───┼───┼───┼───┼───┤
     * │Ctl│ < │ Y │ X │ C │ V │
     * ├───┼───┼───┼───┼───┼───┤
     * │ X │ X │ X │ X │ X │ X │
     * └───┴───┴───┴───┴───┴───┘
     *                     52x   42x   32x   22x   12x   02x      51x   41x   31x   21x   11x   01x      50x   40x   30x   20x   10x   00x     53x    43x      33x     23x     13x      xxx    xxx    103     93x     83x      73x    63x    112      102      92x     82x      72x   62x   111      101      91x   81x   71x   61x   110      100   90x   80x   70x   60x
     */
    [0] = LAYOUT_split_3x6(KC_B, KC_V, KC_C, KC_X, KC_Z, KC_LCTL, KC_G, KC_F, KC_D, KC_S, KC_A, KC_LSFT, KC_T, KC_R, KC_E, KC_W, KC_Q, KC_TAB, MO(2), KC_LWIN, KC_SPC, KC_ENT, KC_LALT, KC_NO, KC_NO, KC_DEL, KC_ESC, KC_BSPC, MO(1), MO(3), KC_MINS, KC_SLSH, KC_DOT, KC_COMM, KC_M, KC_N, KC_QUOT, KC_SCLN, KC_L, KC_K, KC_J, KC_H, KC_LBRC, KC_P, KC_O, KC_I, KC_U, KC_Y),

    //                     52x         42x         32x      22x      12x      02x      51x   41x   31x   21x   11x   01x      50x         40x         30x         20x         10x         00x     53x    43x      33x     23x     13x      xxx    xxx    103     93x           83x      73x    63x    112      102         92x         82x         72x         62x         111            101   91x   81x   71x   61x   110            100         90x         80x         70x         60x

    [1] = LAYOUT_split_3x6(S(KC_BSLS), S(KC_RBRC), S(KC_7), KC_SLSH, KC_RBRC, KC_LCTL, KC_5, KC_4, KC_3, KC_2, KC_1, KC_LSFT, LSFT(KC_5), LSFT(KC_4), LSFT(KC_3), LSFT(KC_2), LSFT(KC_1), KC_TAB, MO(2), KC_LWIN, KC_SPC, KC_ENT, KC_LALT, KC_NO, KC_NO, KC_DEL, LSA(KC_QUOT), KC_BSPC, KC_NO, MO(3), KC_BSLS, ALGR(KC_0), ALGR(KC_9), ALGR(KC_8), ALGR(KC_7), ALGR(KC_Q), ALGR(KC_MINS), KC_0, KC_9, KC_8, KC_7, KC_6, ALGR(KC_RBRC), LSFT(KC_0), LSFT(KC_9), LSFT(KC_8), LSFT(KC_7), LSFT(KC_6)),

    //                     52x    42x    32x    22x    12x    02x      51x     41x     31x            21x         11x      01x      50x          e40x    30x    20x    10x    00x     53x    43x      33x     23x     13x      xxx    xxx    103     93x     83x      73x    63x    112    102    92x    82x    72x    62x    111    101    91x       81x    71x      61x      110    100   90x       80x    70x      60x

    [2] = LAYOUT_split_3x6(KC_NO, KC_W, KC_NO, KC_NO, KC_NO, KC_LCTL, MS_BTN2, MS_BTN1, ALGR(KC_NUBS), S(KC_NUBS), KC_NUBS, KC_LSFT, LSFT(KC_MINS), KC_NO, KC_NO, KC_NO, KC_NO, KC_TAB, MO(2), KC_LWIN, KC_SPC, KC_ENT, KC_LALT, KC_NO, KC_NO, KC_DEL, KC_ESC, KC_BSPC, KC_NO, MO(3), KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_RIGHT, KC_UP, KC_DOWN, KC_LEFT, KC_NO, KC_NO, MS_RGHT, MS_UP, MS_DOWN, MS_LEFT),

    //                     52x      42x      32x    22x    12x     02x      51x    41x    31x    21x    11x    01x      50x    40x    30x    20x    10x    00x     53x    43x      33x     23x     13x      xxx    xxx    103     93x     83x      73x    63x    112    102    92x    82x    72x    62x    111     101     91x    81x    71x    61x    110            100    90x    80x    70x    60x

    [3] = LAYOUT_split_3x6(KC_ALGR, KC_CAPS, KC_NO, KC_NO, KC_F12, KC_LCTL, KC_F5, KC_F4, KC_F3, KC_F2, KC_F1, KC_LSFT, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TAB, MO(2), KC_LWIN, KC_SPC, KC_ENT, KC_LALT, KC_NO, KC_NO, KC_DEL, KC_ESC, KC_BSPC, KC_NO, MO(3), KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_F11, KC_F10, KC_F9, KC_F8, KC_F7, KC_F6, QK_BOOTLOADER, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO)};
/*
 * */
