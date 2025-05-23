// Copyright 2022 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#define HAL_USE_ADC TRUE
#define HAL_USE_I2C TRUE
#define HAL_USE_SPI TRUE
#define HAL_USE_PWM TRUE

#include_next <halconf.h>
