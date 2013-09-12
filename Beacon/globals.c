/*!
\file Beacon/globals.c
\brief Functions for zeroing and calibrating sensors

\author Yuan Gao
*/

#include "all.h"

volatile unsigned char allowTransmit=1; /*!< Boolean to allow telemetry transmission, used to avoid transmittig stuff when nothing is connected */

// *** LEDs and buttons stuff
volatile unsigned int flashVLED=0;		/*!< Boolean for flashing LED */
volatile unsigned int PRGTimer;			/*!< Timer for counting button push */
volatile unsigned char PRGLastState;	/*!< Boolean for last button state */
volatile unsigned int PRGPushTime;		/*!< Timer for counting button push */
volatile unsigned int PRGBlankTimer;	/*!< Timer for blanking button push (i.e. debounce) */

// *** Timers and counters
unsigned int sysMS=0;					/*!< System milliseconds since boot */
unsigned long long sysUS=0;				/*!< System microseconds since boot */
unsigned short heartbeatWatchdog=0;		/*!< Watchdog counter to indicate when base station is lost */
unsigned short gpsWatchdog=0;			/*!< Watchdog counter to indicate when GPS is lost */
