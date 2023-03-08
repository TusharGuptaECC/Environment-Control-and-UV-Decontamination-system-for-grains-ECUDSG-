#ifndef _CONFIGURATION_H_
#define _CONFIGURATION_H_

#include <TM4C123.h>
#include <stdint.h>

#ifdef ONBOARD_LEDS_H
#include "SonalKunj_onBoard_LEDs.h"
#endif

#ifdef UART_H
#include "SonalKunj_uart.h"
#endif

#ifdef DELAY_H
#include "SonalKunj_delay.h"
#endif

#ifdef NEXTION_H
#include "SonalKunj_nextion.h"
#endif

#ifdef ONBOARD_SWITCH_H
#include "SonalKunj_onBoard_switches.h"
#endif

#ifdef ADC_H
#include "SonalKunj_adc.h"
#endif

#ifdef PWM_H
#include "SonalKunj_pwm.h"
#endif

#ifdef WATCHDOG_H
#include "SonalKunj_watchdog.h"
#endif

#ifdef SYSTICK_H
#include "SonalKunj_systick.h"
#endif

#ifdef SLEEP_H
#include "SonalKunj_sleep.h"
#endif

#ifdef WIFI_H
#include "SonalKunj_wifi.h"
#endif

#endif