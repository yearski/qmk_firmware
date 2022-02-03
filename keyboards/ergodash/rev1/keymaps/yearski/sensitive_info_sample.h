/*
This file is a template for "sensitive_info.h".

The intention of this file is to store sensitive information as MACROS which will be
included in compiled qmk firmware but can thus be excluded from public repositories, etc.

Add `#define USE_SENSITIVE_INFO_SAMPLE` to config.h to compile with sensitive_info_sample.h
instead of sensitive_info.h, see #ifdef in keymap.c
*/

#pragma once


#define SENSITIVE_DOMAIN_C  "domain.net.test"
#define SENSITIVE_DOMAIN_CC "sub.domain.net.test"
#define SENSITIVE_EMAIL_EG  "name@domain.net.test"
#define SENSITIVE_EMAIL_EK  "first_last@work.com.test"
#define SENSITIVE_EMAIL_ES  "ntname@sub.work.com.test"
#define SENSITIVE_EMAIL_EY  "user@gmail.com.test"
#define SENSITIVE_SIG_G     "-Name"
