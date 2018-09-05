/*
  Copyright (c) 2015 Atmel Corp./Thibaut VIARD. All right reserved.
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

#include <Arduino.h>

/*
 * Pins descriptions
 */
const PinDescription g_APinDescription[]=
{
/* 
 * +------------+------------------+--------+-----------------+--------------------------------------------------------------------------------------------------------
 * | Pin number | Serial          |  PIN   | Label/Name      | Comments (* is for default peripheral in use)
 * +------------+------------------+--------+-----------------+--------------------------------------------------------------------------------------------------------
 * | 0          |                  |  PA04  | TX         	  | EIC/EXTINT[12]                           SERCOM0_ALT/PAD_ *TCC2/WO[0]  TCC0_ALT/WO[6]  AC/CMP[0]
 * | 1          |                  |  PA05  | RX    		  | 
 * +------------+------------------+--------+-----------------+--------------------------------------------------------------------------------------------------------
 */
    { PORTA, 04, PIO_SERCOM_ALT, PIN_ATTR_DIGITAL, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_4 }, // TX: SERCOM0/PAD[0]
	{ PORTA, 05, PIO_SERCOM_ALT, PIN_ATTR_DIGITAL, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_5 }, // RX: SERCOM0/PAD[1]
  
/* 
 * +------------+------------------+--------+-----------------+--------------------------------------------------------------------------------------------------------
 * | Pin number | Digital          |  PIN   | Label/Name      | Comments (* is for default peripheral in use)
 * +------------+------------------+--------+-----------------+--------------------------------------------------------------------------------------------------------
 * | 2          |                  |  PA06  | EN_GSM          | 
 * | 3          |                  |  PA07  | EN_GPS    	  | 
 * +------------+------------------+--------+-----------------+--------------------------------------------------------------------------------------------------------
 */
   
   { PORTA,  6, PIO_DIGITAL, PIN_ATTR_DIGITAL, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_6 },
   { PORTA,  7, PIO_DIGITAL, PIN_ATTR_DIGITAL, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_7 },
   
   /* 
 * +------------+------------------+--------+-----------------+--------------------------------------------------------------------------------------------------------
 * | Pin number | Serial1          |  PIN   | Label/Name      | Comments (* is for default peripheral in use)
 * +------------+------------------+--------+-----------------+--------------------------------------------------------------------------------------------------------
 * | 4          |                  |  PA04  | TX         	  | EIC/EXTINT[12]                           SERCOM2_ALT/PAD_ *TCC2/WO[0]  TCC0_ALT/WO[6]  AC/CMP[0]
 * | 5          |                  |  PA05  | RX    		  | 
 * +------------+------------------+--------+-----------------+--------------------------------------------------------------------------------------------------------
 */
    { PORTA, 8, PIO_SERCOM_ALT, PIN_ATTR_DIGITAL, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_NONE }, // TX: SERCOM2/PAD[0]
	{ PORTA, 9, PIO_SERCOM_ALT, PIN_ATTR_DIGITAL, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_9 }, // RX: SERCOM2/PAD[1]
  /* 
 * +------------+------------------+--------+-----------------+--------------------------------------------------------------------------------------------------------
 * | Pin number | Digital          |  PIN   | Label/Name      | Comments (* is for default peripheral in use)
 * +------------+------------------+--------+-----------------+--------------------------------------------------------------------------------------------------------
 * | 6          |                  |  PA12  | PWRKEY          | 
 * | 7          |                  |  PA13  | GNNS_EN    	  | 
 * | 8          |                  |  PA14  | EN_PWR_EXT      | 
 * | 9          |                  |  PA15  | BMI160IRQ2/output4 	  | 
 * +------------+------------------+--------+-----------------+--------------------------------------------------------------------------------------------------------
 */
   { PORTA,  12, PIO_DIGITAL, PIN_ATTR_DIGITAL, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_12 },
   { PORTA,  13, PIO_DIGITAL, PIN_ATTR_DIGITAL, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_13 },
   { PORTA,  14, PIO_DIGITAL, PIN_ATTR_DIGITAL, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_14 },
   { PORTA,  15, PIO_DIGITAL, PIN_ATTR_DIGITAL, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_15 },
    /* 
 * +------------+------------------+--------+-----------------+--------------------------------------------------------------------------------------------------------
 * | Pin number | EXT SPI2         |  PIN   | Label/Name      | Comments (* is for default peripheral in use)
 * +------------+------------------+--------+-----------------+--------------------------------------------------------------------------------------------------------
 * | 10         |                  |  PA16  | MOSI         	  |SERCOM3_ALT/PAD[0]                           SERCOM2_ALT/PAD_ *TCC2/WO[0]  TCC0_ALT/WO[6]  AC/CMP[0]
 * | 11         |                  |  PA17  | SCK    		  |SERCOM3_ALT/PAD[1] 
 * | 12         |                  |  PA18  | CS              |SERCOM3_ALT/PAD[2]
 * | 13         |                  |  PA19  | MISO      	  |SERCOM3_ALT/PAD[3]
 * +------------+------------------+--------+-----------------+--------------------------------------------------------------------------------------------------------
 */
    { PORTA,  16, PIO_SERCOM_ALT, PIN_ATTR_DIGITAL, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_NONE }, // TX: SERCOM2/PAD[0]
	{ PORTA,  17, PIO_SERCOM_ALT, PIN_ATTR_DIGITAL, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_1 }, // RX: SERCOM2/PAD[1]
    { PORTA,  18, PIO_SERCOM_ALT, PIN_ATTR_DIGITAL, ADC_Channel6, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_2 },
    { PORTA,  19, PIO_SERCOM_ALT, PIN_ATTR_DIGITAL, ADC_Channel7, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_3 },
    
  /* +------------+------------------+--------+-----------------+--------------------------------------------------------------------------------------------------------
 * | Pin number | SPI1             |  PIN   | Label/Name      | Comments (* is for default peripheral in use)
 * +------------+------------------+--------+-----------------+--------------------------------------------------------------------------------------------------------
 * | 14         |                  |  PA22  | MOSI            | EIC/EXTINT[2]  PTC/X[6] *SERCOM3/PAD[0]  SERCOM5_ALT/PAD[0]  TC4/WO[0]  TCC0_ALT/WO[4]  GCLK_IO[6]
 * | 15         |                  |  PB23  | MISO            | EIC/EXTINT[0]  PTC/X[4] *SERCOM1/PAD[0]  SERCOM5_ALT/PAD[3]  
 * | 16         |                  |  PA23  | SCK             | EIC/EXTINT[3]  PTC/X[7] *                SERCOM5_ALT/PAD[1]  TC4/WO[1]  TCC0_ALT/WO[5]  I2S/SD[0]  AC/CMP[1]
 * | 17         |                  |  PB22  | CS              | EIC/EXTINT[1]  PTC/X[5] *                SERCOM5_ALT/PAD[2]  
 */
  { PORTA, 22, PIO_SERCOM_ALT, PIN_ATTR_DIGITAL, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_6 }, 
   { PORTB, 23, PIO_SERCOM_ALT, PIN_ATTR_DIGITAL, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_7 }, // SERCOM5_ALT/PAD[3]
 // { PORTB, 23, PIO_SERCOM_ALT, (PIN_ATTR_DIGITAL), No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_6 },
  { PORTA, 23, PIO_SERCOM_ALT, (PIN_ATTR_DIGITAL|PIN_ATTR_PWM|PIN_ATTR_TIMER), No_ADC_Channel, PWM0_CH5, TCC0_CH5, EXTERNAL_INT_7 }, 
  { PORTB, 22, PIO_SERCOM_ALT, (PIN_ATTR_DIGITAL), No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_6 }, 
  
  /* 
 * +------------+------------------+--------+-----------------+--------------------------------------------------------------------------------------------------------
 * | Pin number | Digital          |  PIN   | Label/Name      | Comments (* is for default peripheral in use)
 * +------------+------------------+--------+-----------------+--------------------------------------------------------------------------------------------------------
 * | 18         |                  |  PA27  | BMI160INT1      | 
 * | 19         |                  |  PA28  | EN_REF_GND      | 
 * +------------+------------------+--------+-----------------+--------------------------------------------------------------------------------------------------------
 */
   
   { PORTA,  27, PIO_DIGITAL, PIN_ATTR_DIGITAL, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_15 },
   { PORTA,  28, PIO_DIGITAL, PIN_ATTR_DIGITAL, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_8 },
   
   /* 
 * +------------+------------------+--------+-----------------+--------------------------------------------------------------------------------------------------------
 * | Pin number | Analog           |  PIN   | Label/Name      | Comments (* is for default peripheral in use)
 * +------------+------------------+--------+-----------------+--------------------------------------------------------------------------------------------------------
 * | 20         |                  |  PB02  | INPUT0           | 
 * | 21         |                  |  PB03  | INPUT1     | 
 * +------------+------------------+--------+-----------------+--------------------------------------------------------------------------------------------------------
 */
   
	{ PORTB, 2, PIO_ANALOG, PIN_ATTR_ANALOG, ADC_Channel10, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_2 },  
	{ PORTB, 3, PIO_DIGITAL, PIN_ATTR_DIGITAL, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_3 }, 
   
   /* 
 * +------------+------------------+--------+-----------------+--------------------------------------------------------------------------------------------------------
 * | Pin number | TImer           |  PIN   | Label/Name       | Comments (* is for default peripheral in use)
 * +------------+------------------+--------+-----------------+--------------------------------------------------------------------------------------------------------
 * | 22         |                  |  PA30  | SWCLK           | 
 * | 23         |                  |  PA31  | SWDIO           | 
 * +------------+------------------+--------+-----------------+--------------------------------------------------------------------------------------------------------
 */  
  { PORTA, 30, PIO_TIMER, (PIN_ATTR_DIGITAL|PIN_ATTR_PWM|PIN_ATTR_TIMER), No_ADC_Channel, PWM1_CH0, TCC1_CH0, EXTERNAL_INT_11 },
  { PORTA, 31, PIO_TIMER, (PIN_ATTR_DIGITAL|PIN_ATTR_PWM|PIN_ATTR_TIMER), No_ADC_Channel, PWM1_CH1, TCC1_CH1, EXTERNAL_INT_10 }, 
  /*
  +------------+------------------+--------+-----------------+--------------------------------------------------------------------------------------------------------
 * | Pin number | USB              |  PIN   | Label/Name      | Comments (* is for default peripheral in use)
 * +------------+------------------+--------+-----------------+--------------------------------------------------------------------------------------------------------
 * | 24         |                  |  PA25  | USB_POSITIVE    | *USB/DP
 * | 25         |                  |  PA24  | USB_NEGATIVE    | *USB/DM
 * +------------+------------------+--------+-----------------+--------------------------------------------------------------------------------------------------------
 */
 { PORTA, 25, PIO_COM, PIN_ATTR_NONE, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_NONE }, // USB/DP
 { PORTA, 24, PIO_COM, PIN_ATTR_NONE, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_NONE }, // USB/DM
/* +------------+------------------+--------+-----------------+--------------------------------------------------------------------------------------------------------
 * + Pin number +  ZERO Board pin  |  PIN   | Label/Name      | Comments (* is for default peripheral in use)
 * +------------+------------------+--------+-----------------+--------------------------------------------------------------------------------------------------------
 * |            | Digital Low      |        |                 |
 * +------------+------------------+--------+-----------------+--------------------------------------------------------------------------------------------------------
 * | 26         | 0                |  PA11  | AT86RF233_DIG4  | EIC/EXTINT[11] ADC/AIN[19]           PTC/X[3]  SERCOM0/PAD[3]  SERCOM2/PAD[3]  TCC0/WO[3]  TCC1/WO[1]
 * | 27         | 1                |  PA10  | AT86RF233_DIG3  | EIC/EXTINT[10] ADC/AIN[18]           PTC/X[2]  SERCOM0/PAD[2]                  TCC0/WO[2]  TCC1/WO[0]
  */
  { PORTA, 11, PIO_SERCOM, (PIN_ATTR_DIGITAL), No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_11 }, // AT86RF233 DIG4
  { PORTA, 10, PIO_SERCOM, (PIN_ATTR_DIGITAL), No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_10 }, // AT86RF233 DIG3

  // ----- Special SAMR pins! ------
  { PORTB, 15, PIO_TIMER, PIN_ATTR_NONE, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_NONE }, // #28 PB15 == AT86_RESETN
  { PORTC, 16, PIO_TIMER, PIN_ATTR_NONE, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_NONE }, // #29 PC16 == AT86_CLKM
  { PORTC, 18, PIO_TIMER_ALT, PIN_ATTR_NONE, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_NONE }, // #30 PC18 == AT86_SCLK sercom4.3
  { PORTC, 19, PIO_TIMER_ALT, PIN_ATTR_NONE, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_NONE }, // #31 PC19 == AT86_MISO sercom4.0
  { PORTB, 30, PIO_TIMER_ALT, PIN_ATTR_NONE, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_NONE }, // #32 PB30 == AT86_MOSI sercom4.2
  { PORTB, 31, PIO_TIMER_ALT, PIN_ATTR_NONE, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_NONE }, // #33 PB31 == AT86_SEL sercom4.1
  { PORTB, 00, PIO_TIMER, PIN_ATTR_NONE, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_0 }, // #34 PB00 = AT86_IRQ
  { PORTA, 20, PIO_TIMER_ALT, (PIN_ATTR_DIGITAL|PIN_ATTR_PWM|PIN_ATTR_TIMER_ALT), No_ADC_Channel, PWM0_CH6, TCC0_CH6, EXTERNAL_INT_4 }, // used for AT86RF SLP_TR #35
  { PORTB, 16, PIO_TIMER_ALT, (PIN_ATTR_DIGITAL|PIN_ATTR_TIMER_ALT), No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_0 }, // DIG1 #36
  { PORTB, 17, PIO_TIMER_ALT, (PIN_ATTR_DIGITAL|PIN_ATTR_TIMER_ALT), No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_1 }, // DIG2#37
}	;


const void* g_apTCInstances[TCC_INST_NUM+TC_INST_NUM]={ TCC0, TCC1, TCC2, TC3, TC4, TC5 } ;

// Multi-serial objects instantiation
SERCOM sercom0( SERCOM0 ) ;
SERCOM sercom1( SERCOM1 ) ;
SERCOM sercom2( SERCOM2 ) ;
SERCOM sercom3( SERCOM3 ) ;
SERCOM sercom4( SERCOM4 ) ;
SERCOM sercom5( SERCOM5 ) ;

Uart Serial( &sercom0, PIN_SERIAL_RX, PIN_SERIAL_TX, PAD_SERIAL_RX, PAD_SERIAL_TX ) ;

void SERCOM0_Handler(void)
{
  Serial.IrqHandler();
}


Uart Serial1( &sercom2, PIN_SERIAL1_RX, PIN_SERIAL1_TX, PAD_SERIAL1_RX, PAD_SERIAL1_TX ) ;

void SERCOM2_Handler(void)
{
  Serial1.IrqHandler();
}

/* Uart Serial2( &sercom3, PIN_SERIAL2_RX, PIN_SERIAL2_TX, PAD_SERIAL2_RX, PAD_SERIAL2_TX ) ;

void SERCOM3_Handler(void)
{
  Serial2.IrqHandler();
} */