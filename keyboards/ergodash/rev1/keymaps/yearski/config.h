/*
This is the c configuration file for the keymap
*/

#pragma once


/* Use I2C or Serial, not both */
#define USE_SERIAL
// #define USE_I2C


/* Select hand configuration */
#define MASTER_LEFT
// #define MASTER_RIGHT
// #define EE_HANDS


/* Use the sensitive_info_sample.h for testing, etc. */
// #define USE_SENSITIVE_INFO_SAMPLE


/* key combination for Command feature - Left Shift+Ctrl+Alt
     see https://github.com/qmk/qmk_firmware/blob/master/docs/feature_command.md  */
#define IS_COMMAND() ( get_mods() == (MOD_BIT(KC_LSHIFT) | MOD_BIT(KC_LCTL) | MOD_BIT(KC_LALT)) )


#define LEADER_PER_KEY_TIMING
#define LEADER_TIMEOUT 200
#define LEADER_NO_TIMEOUT

#define TAPPING_TOGGLE 1

#define _QWERTY 0
#define _NUM 1
#define LAYR_NUM TT(1)
#define _SYM 2
#define LAYR_SYM OSL(2)
#define _FN 3
#define LAYR_FN OSL(3)
#define _RHDIR 16
