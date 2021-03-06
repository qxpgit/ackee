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
#define PINS_COUNT           (48ul)
#define NUM_DIGITAL_PINS     (38ul)
#define NUM_ANALOG_INPUTS    (8ul)
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

// LED(s)
#define PIN_LED_BLU          (23ul)
#define PIN_LED_RED          (24ul)
#define PIN_LED_GREEN        (25ul)

// MODEM G510
#define CPU_PWR_G510    (30ul) 
#define CPU_RST_G510    (31ul)
#define CPU_WK_G510     (32ul)
#define UART1_DCD_G510  (33ul)
#define UART1_RST_G510  (34ul)
#define  CPU_LPG_G510   (35ul)
#define  EN_G510VSIM    (36ul) 

// RADDIO AT86RF212B

#define PIN_SPI_SLEEP_TR 	(29u)
#define PIN_SPI_RESET	(28u)
#define PIN_SPI_IRQ	(26u)	
#define PIN_HGM             (27u)
 
/*
 * Analog pins
 */
#define PIN_A0               (38ul)
#define PIN_A1               (39ul)
#define PIN_A2               (40ul)
#define PIN_A3               (41ul)
#define PIN_A4               (42ul)
#define PIN_A5               (43ul)
#define PIN_VBAT             (44ul)
#define PIN_VREF             (45ul)


static const uint8_t A0  = PIN_A0 ;
static const uint8_t A1  = PIN_A1 ;
static const uint8_t A2  = PIN_A2 ;
static const uint8_t A3  = PIN_A3 ;
static const uint8_t A4  = PIN_A4 ;
static const uint8_t A5  = PIN_A5 ;

#define ADC_RESOLUTION		12

#define PIN_SERIAL_RX       (1ul)
#define PIN_SERIAL_TX       (0ul)
#define PAD_SERIAL_RX       (SERCOM_RX_PAD_1)
#define PAD_SERIAL_TX       (UART_TX_PAD_0)

#define PIN_SERIAL1_RX       (4ul)
#define PIN_SERIAL1_TX       (2ul)
#define PAD_SERIAL1_RX       (SERCOM_RX_PAD_1)
#define PAD_SERIAL1_TX       (UART_TX_PAD_0)
/*
 * SPI Interfaces
 * first interface is radio 
  */
#define SPI_INTERFACES_COUNT 3

#define PIN_SPI_MOSI        (14ul)
#define PIN_SPI_MISO        (15ul)
#define PIN_SPI_SCK         (16ul)
#define PIN_SPI_SS          (17ul)
#define PERIPH_SPI          sercom4
#define PAD_SPI_TX          SPI_PAD_0_SCK_1
#define PAD_SPI_RX          SERCOM_RX_PAD_3

static const uint8_t SS	  = PIN_SPI_SS ;
static const uint8_t MOSI = PIN_SPI_MOSI ;
static const uint8_t MISO = PIN_SPI_MISO ;
static const uint8_t SCK  = PIN_SPI_SCK ;

#define PIN_SPI1_MOSI        (6ul)
#define PIN_SPI1_MISO        (7ul)
#define PIN_SPI1_SCK         (8ul)
#define PIN_SPI1_SS          (9ul)
#define PERIPH_SPI1          sercom2
#define PAD_SPI1_TX          SPI_PAD_0_SCK_1
#define PAD_SPI1_RX          SERCOM_RX_PAD_3

static const uint8_t SS1	  = PIN_SPI1_SS ;
static const uint8_t MOSI1 = PIN_SPI1_MOSI ;
static const uint8_t MISO1 = PIN_SPI1_MISO ;
static const uint8_t SCK1  = PIN_SPI1_SCK ;

#define PIN_SPI2_MOSI         (10ul)
#define PIN_SPI2_MISO         (11ul)
#define PIN_SPI2_SCK          (12ul)
#define PIN_SPI2_SS           (13ul)
#define PERIPH_SPI2           sercom3
#define PAD_SPI2_TX           SPI_PAD_0_SCK_1
#define PAD_SPI2_RX           SERCOM_RX_PAD_3

static const uint8_t SS2	  = PIN_SPI2_SS ;
static const uint8_t MOSI2 = PIN_SPI2_MOSI ;
static const uint8_t MISO2 = PIN_SPI2_MISO ;
static const uint8_t SCK2  = PIN_SPI2_SCK ;

/*#define PIN_SPI3_MOSI         (2ul)
#define PIN_SPI3_MISO         (3ul)
#define PIN_SPI3_SCK          (4ul)
#define PIN_SPI3_SS           (5ul)
#define PERIPH_SPI3           sercom0
#define PAD_SPI3_TX           SPI_PAD_0_SCK_1
#define PAD_SPI3_RX           SERCOM_RX_PAD_3

static const uint8_t SS3   = PIN_SPI3_SS ;
static const uint8_t MOSI3 = PIN_SPI3_MOSI ;
static const uint8_t MISO3 = PIN_SPI3_MISO ;
static const uint8_t SCK3  = PIN_SPI3_SCK ;

#define PIN_SPI4_MOSI         (18ul)
#define PIN_SPI4_MISO         (19ul)
#define PIN_SPI4_SCK          (20ul)
#define PIN_SPI4_SS           (21ul)
#define PIN_SPI4_SSSEC        (22ul)
#define PERIPH_SPI4           sercom5
#define PAD_SPI4_TX           SPI_PAD_0_SCK_1
#define PAD_SPI4_RX           SERCOM_RX_PAD_3

static const uint8_t SS4   = PIN_SPI4_SS ;
static const uint8_t MOSI4 = PIN_SPI4_MOSI ;
static const uint8_t MISO4 = PIN_SPI4_MISO ;
static const uint8_t SCK4  = PIN_SPI4_SCK ;*/




/*
 * Wire Interfaces
 */
#define WIRE_INTERFACES_COUNT 0

/*#define PIN_WIRE_SCL         (12ul)
#define PIN_WIRE_SDA         (10ul)
#define PERIPH_WIRE          sercom3
#define WIRE_IT_HANDLER      SERCOM3_Handler

static const uint8_t SDA = PIN_WIRE_SDA;
static const uint8_t SCL = PIN_WIRE_SCL;*/

/*
 * USB
 */
#define PIN_USB_DP           (46ul)
#define PIN_USB_DM           (47ul)
#define PIN_USB_HOST_ENABLE  (12ul)
#define PIN_USB_VBUS         PIN_USB_HOST_ENABLE
#define PIN_USB_ID           (45ul)

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
extern Uart Serial1;

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
#define SERIAL_PORT_MONITOR         SerialUSB
// Serial has no physical pins broken out, so it's not listed as HARDWARE port
#define SERIAL_PORT_HARDWARE        SerialUSB
#define SERIAL_PORT_HARDWARE_OPEN   SerialUSB

#endif