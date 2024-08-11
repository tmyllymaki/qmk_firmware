#pragma once
#include "keycodes.h"
// clang-format off

// Aliases
#define SE_7    KC_7    // 7
#define SE_8    KC_8    // 8
#define SE_9    KC_9    // 9
#define SE_DIAE KC_RBRC // ¨ (dead)
                       
#define CUSTOM_TILD A(SE_DIAE) // ~ (dead)
                           
#define CUSTOM_LCBR S(A(SE_8))    // {
#define CUSTOM_RCBR S(A(SE_9))    // }
                              
#define CUSTOM_LBRC A(SE_8)    // [
#define CUSTOM_RBRC A(SE_9)    // ]
#define CUSTOM_PIPE A(SE_7)    // |