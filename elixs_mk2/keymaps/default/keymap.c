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
     *                     00      10    20    30    40    50    01       11    21    31    41    51    02       12    22    32    42    52    xx     13       23      33      43       53     110      100   90    80    70    60    111      101      91    81    71    61    112            102      92      82       72    62    xx     103     93      83       73     63
     */
    [0] = LAYOUT_split_3x6(KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_LSFT, KC_A, KC_S, KC_D, KC_F, KC_G, KC_LCTL, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_NO, KC_LALT, KC_ENT, KC_SPC, KC_LWIN, MO(2), KC_LBRC, KC_P, KC_O, KC_I, KC_U, KC_Y, KC_QUOT, KC_SCLN, KC_L, KC_K, KC_J, KC_H, KC_MINS, KC_SLSH, KC_DOT, KC_COMM, KC_M, KC_N, KC_NO, KC_DEL, KC_ESC, KC_BSPC, MO(1), MO(3)),

    //                     00      10          20          30          40          50          01       11    21    31    41    51    02       12       22       32       42          52          xx     13       23      33      43       53     110            100         90          80          70          60          111            101   91    81    71    61    112      102         92          82          72          62          xx     103     93      83       73     63

    [1] = LAYOUT_split_3x6(KC_TAB, LSFT(KC_1), LSFT(KC_2), LSFT(KC_3), LSFT(KC_4), LSFT(KC_5), KC_LSFT, KC_1, KC_2, KC_3, KC_4, KC_5, KC_LCTL, KC_RBRC, KC_SLSH, S(KC_7), S(KC_RBRC), S(KC_BSLS), KC_NO, KC_LALT, KC_ENT, KC_SPC, KC_LWIN, MO(2), ALGR(KC_RBRC), LSFT(KC_0), LSFT(KC_9), LSFT(KC_8), LSFT(KC_7), LSFT(KC_6), ALGR(KC_MINS), KC_0, KC_9, KC_8, KC_7, KC_6, KC_BSLS, ALGR(KC_0), ALGR(KC_9), ALGR(KC_8), ALGR(KC_7), ALGR(KC_Q), KC_NO, KC_DEL, KC_ESC, KC_BSPC, MO(1), MO(3)),

    //                     00      10     20     30     40     50             01       11       21          31             41       51       02       12     22     32     42     52     xx     13       23      33      43       53     110    100    90       80     70       60       111    101    91        81     71       61       112    102    92     82     72     62     xx     103     93      83       73     63

    [2] = LAYOUT_split_3x6(KC_TAB, KC_NO, KC_NO, KC_NO, KC_NO, LSFT(KC_MINS), KC_LSFT, KC_NUBS, S(KC_NUBS), ALGR(KC_NUBS), MS_BTN1, MS_BTN2, KC_LCTL, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_LALT, KC_ENT, KC_SPC, KC_LWIN, MO(2), KC_NO, KC_NO, MS_RGHT, MS_UP, MS_DOWN, MS_LEFT, KC_NO, KC_NO, KC_RIGHT, KC_UP, KC_DOWN, KC_LEFT, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_DEL, KC_ESC, KC_BSPC, MO(1), MO(3)),

    //                     00      10     20     30     40     50     01       11     21     31     41     51     02       12     22     32     42       52       xx     13       23      33      43       53     110            100    90     80     70     60     111     101     91     81     71     61     112    102    92     82     72     62     xx     103     93      83       73     63

    [3] = LAYOUT_split_3x6(KC_TAB, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_LSFT, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_LCTL, KC_NO, KC_NO, KC_NO, KC_CAPS, KC_ALGR, KC_NO, KC_LALT, KC_ENT, KC_SPC, KC_LWIN, MO(2), QK_BOOTLOADER, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_F11, KC_F10, KC_F9, KC_F8, KC_F7, KC_F6, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_DEL, KC_ESC, KC_BSPC, MO(1), MO(3))};
/*
 * */
