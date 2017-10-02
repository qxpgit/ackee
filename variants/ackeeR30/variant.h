/*
  Copyright (c) 2014-2015 Arduino LLC.  All right reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
  See the GNU Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/

#ifndef _VARIANT_ARDUINO_ZERO_
#define _VARIANT_ARDUINO_ZERO_

/*----------------------------------------------------------------------------
 *        Definitions
 *----------------------------------------------------------------------------*/


/*
  Copyright (c) 2014-2015 Arduino LLC.  All right reserved.
  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.
  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
  See the GNU Lesser General Public License for more details.
  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/

#pragma once

/*----------------------------------------------------------------------------
 *        Definitions
 *----------------------------------------------------------------------------*/

/** Frequency of the board main oscillator */
#define VARIANT_MAINOSC       (32768ul)

/** Master clock frequency */
#define VARIANT_MCK           (48000000ul)

/*----------------------------------------------------------------------------
 *        Headers
 *----------------------------------------------------------------------------*/

#include "WVariant.h"

#ifdef __cplusplus
#include "SERCOM.h"
#include "Uart.h"
#endif // __cplusplus

#ifdef __cplusplus
extern "C"
{
#endif // __cplusplus

/*----------------------------------------------------------------------------
 *        Pins
 *----------------------------------------------------------------------------*/

// Number of pins defined in PinDescription array
#define PINS_COUNT           (34ul)
#define NUM_DIGITAL_PINS     (22ul)
#define NUM_ANALOG_INPUTS    (2ul)
#define NUM_ANALOG_OUTPUTS   (0ul)

#define digitalPinToPort(P)        ( &(PORT->Group[g_APinDescription[P].ulPort]) )
#define digitalPinToBitMask(P)     ( 1 << g_APinDescription[P].ulPin )
//#define analogInPinToBit(P)        ( )
#define portOutputRegister(port)   ( &(port->OUT.reg) )
#define portInputRegister(port)    ( &(port->IN.reg) )
#define portModeRegister(port)     ( &(port->DIR.reg) )
#define digitalPinHasPWM(P)        ( g_APinDescription[P].ulPWMChannel != NOT_ON_PWM || g_APinDescription[P].ulTCChannel != NOT_ON_TIMER )

/*
 * digitalPinToTimer(..) is AVR-specific and is not defined for SAMD
 * architecture. If you need to check if a pin supports PWM you must
 * use digitalPinHasPWM(..).
 *
 * https://github.com/arduino/Arduino/issues/1833
 */
// #define digitalPinToTimer(P)

// Interrupts
#define digitalPinToInterrupt(P)   ( g_APinDescription[P].ulExtInt )

// Digtal PIN
#define EN_GSM_VBAT         (2ul)
#define EN_GPS_VBAT           (3ul)
#define PWRKEY           (6ul)
#define GNSS_EN          (7ul)
#define EN_SIM868_VSIM (8ul)
#define RF_SYNC          (9ul)
#define PPS_1             (12ul)
#define EN_PWR_EXT       (13ul)
#define SYNC_ALIM        (18ul)
#define EN_RF_GND       (19ul)
#define LED_BUILTIN		EN_RF_GND



/*
 * Analog pins
 */
#define PIN_A0               (18ul)
#define PIN_A1               (19ul)



static const uint8_t A0  = PIN_A0 ;
static const uint8_t A1  = PIN_A1 ;

#define ADC_RESOLUTION		12

/*
 * Serial interfaces
  #define PIN_SERIAL_RX       (1ul)
#define PIN_SERIAL_TX       (0ul)
#define PAD_SERIAL_RX       (SERCOM_RX_PAD_0)
#define PAD_SERIAL_TX       (UART_TX_PAD_2)
 
 */
//Serial (GMS)
#define PIN_SERIAL_RX       (1ul)
#define PIN_SERIAL_TX       (0ul)
#define PAD_SERIAL_RX       (SERCOM_RX_PAD_1)
#define PAD_SERIAL_TX       (UART_TX_PAD_0)
//Serial GPS
#define PIN_SERIAL1_RX       (5ul)
#define PIN_SERIAL1_TX       (4ul)
#define PAD_SERIAL1_RX       (SERCOM_RX_PAD_1)
#define PAD_SERIAL1_TX       (UART_TX_PAD_0)

//Serial GSM2
#define PIN_SERIAL2_RX       (17ul)
#define PIN_SERIAL2_TX       (16ul)
#define PAD_SERIAL2_RX       (SERCOM_RX_PAD_1)
#define PAD_SERIAL2_TX       (UART_TX_PAD_0)


/*
 * SPI Interfaces
 */
#define SPI_INTERFACES_COUNT 2

#define PIN_SPI1_MOSI        (14ul)
#define PIN_SPI1_MISO        (15ul)
#define PIN_SPI1_SCK         (16ul)
#define PIN_SPI1_SS          (17ul)
#define PERIPH_SPI1          sercom5
#define PAD_SPI1_TX          SPI_PAD_0_SCK_1
#define PAD_SPI1_RX          SERCOM_RX_PAD_3


static const uint8_t SS1	  = PIN_SPI1_SS ;
static const uint8_t MOSI1 = PIN_SPI1_MOSI ;
static const uint8_t MISO1 = PIN_SPI1_MISO ;
static const uint8_t SCK1  = PIN_SPI1_SCK ;

 // "internal" SPI, used for AT86RF233 only!
#define PIN_SPI_MISO         (29u)
#define PIN_SPI_MOSI         (30u)
#define PIN_SPI_SCK          (28u)
#define PIN_SPI_SEL          (31u)
#define PERIPH_SPI           sercom4
#define PAD_SPI_TX           SPI_PAD_2_SCK_3
#define PAD_SPI_RX           SERCOM_RX_PAD_0

static const uint8_t SS   = PIN_SPI_SEL ;
static const uint8_t MOSI = PIN_SPI_MOSI ;
static const uint8_t MISO = PIN_SPI_MISO ;
static const uint8_t SCK  = PIN_SPI_SCK ;

#define PIN_SPI_SLEEP_TR 	(33u)
#define PIN_SPI_RESET	(26u)
#define PIN_SPI_IRQ	(32u)
#define PIN_SPI_SS	PIN_SPI_SEL	
#define PIN_RF1             (34u)
#define PIN_RF2             (35u)

/*
 * Wire Interfaces
 */
#define WIRE_INTERFACES_COUNT 1

#define PIN_WIRE_SDA         (16u)
#define PIN_WIRE_SCL         (17u)
#define PERIPH_WIRE          sercom5
#define WIRE_IT_HANDLER      SERCOM5_Handler

static const uint8_t SDA = PIN_WIRE_SDA;
static const uint8_t SCL = PIN_WIRE_SCL;
/*
 * USB
 */
#define PIN_USB_DP           (22ul)
#define PIN_USB_DM           (23ul)
#define PIN_USB_HOST_ENABLE  (24ul)
#define PIN_USB_VBUS         PIN_USB_HOST_ENABLE
#define PIN_USB_ID           (25ul)

#ifdef __cplusplus
}
#endif

/*----------------------------------------------------------------------------
 *        Arduino objects - C++ only
 *----------------------------------------------------------------------------*/

#ifdef __cplusplus

/*	=========================
 *	===== SERCOM DEFINITION
 *	=========================
 */
extern SERCOM sercom0;
extern SERCOM sercom1;
extern SERCOM sercom2;
extern SERCOM sercom3;
extern SERCOM sercom4;
extern SERCOM sercom5;

extern Uart Serial;
//GPS No monterisi
extern Uart Serial1;

extern Uart Serial2;

#endif

// These serial port names are intended to allow libraries and architecture-neutral
// sketches to automatically default to the correct port name for a particular type
// of use.  For example, a GPS module would normally connect to SERIAL_PORT_HARDWARE_OPEN,
// the first hardware serial port whose RX/TX pins are not dedicated to another use.
//
// SERIAL_PORT_MONITOR        Port which normally prints to the Arduino Serial Monitor
//
// SERIAL_PORT_USBVIRTUAL     Port which is USB virtual serial
//
// SERIAL_PORT_LINUXBRIDGE    Port which connects to a Linux system via Bridge library
//
// SERIAL_PORT_HARDWARE       Hardware serial port, physical RX & TX pins.
//
// SERIAL_PORT_HARDWARE_OPEN  Hardware serial ports which are open for use.  Their RX & TX
//                            pins are NOT connected to anything by default.
#define SERIAL_PORT_USBVIRTUAL      SerialUSB
#define SERIAL_PORT_MONITOR         Serial
// Serial has no physical pins broken out, so it's not listed as HARDWARE port
#define SERIAL_PORT_HARDWARE        Serial
#define SERIAL_PORT_HARDWARE_OPEN   Serial

#endif