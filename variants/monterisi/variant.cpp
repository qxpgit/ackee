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
 * | Pin number | Serial1          |  PIN   | Label/Name      | Comments (* is for default peripheral in use)
 * +------------+------------------+--------+-----------------+--------------------------------------------------------------------------------------------------------
 * | 0          |                  |  PA12  | RX         	  | EIC/EXTINT[12] SERCOM2/PAD[0]  SERCOM4_ALT/PAD[0] *TCC2/WO[0]  TCC0_ALT/WO[6]  AC/CMP[0]
 * | 1          |                  |  PA13  | TX    		  | EIC/EXTINT[13] SERCOM2/PAD[1]  SERCOM4_ALT/PAD[1] *TCC2/WO[1]  TCC0_ALT/WO[7]  AC/CMP[1]
 * +------------+------------------+--------+-----------------+--------------------------------------------------------------------------------------------------------
 */
    { PORTA, 12, PIO_SERCOM_ALT, (PIN_ATTR_DIGITAL|PIN_ATTR_PWM|PIN_ATTR_TIMER), No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_12 }, // TX: SERCOM4/PAD[0]
	{ PORTA, 13, PIO_SERCOM_ALT, (PIN_ATTR_DIGITAL|PIN_ATTR_PWM|PIN_ATTR_TIMER), No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_13 }, // RX: SERCOM4/PAD[1]
/* +------------+------------------+--------+-----------------+--------------------------------------------------------------------------------------------------------
 * | Pin number | LEDs & button    |  PIN   | Label/Name      | Comments (* is for default peripheral in use)
 * +------------+------------------+--------+-----------------+--------------------------------------------------------------------------------------------------------
 * | 2          | N/A              |  PB07  |                 |EIC/EXTINT[7]  ADC/AIN[15]  PTC/Y[13]
 * | 3          | N/A              |  PA02  |                 |EIC/EXTINT[2]  *ADC/AIN[0]   PTC/Y[0]
 * +------------+------------------+--------+-----------------+--------------------------------------------------------------------------------------------------------
 */
   { PORTB,  7, PIO_DIGITAL, PIN_ATTR_DIGITAL, ADC_Channel15, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_7 },
   { PORTA,  2, PIO_DIGITAL, PIN_ATTR_DIGITAL, ADC_Channel0, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_2 }, // ADC/AIN[0] and also DAC/VOUT

/* +------------+------------------+--------+-----------------+--------------------------------------------------------------------------------------------------------
 * | Pin number | Digital          |  PIN   | Label/Name      | Comments (* is for default peripheral in use)
 * +------------+------------------+--------+-----------------+--------------------------------------------------------------------------------------------------------
 * | 4          |                  |  PB30  | 	              | EIC/EXTINT[14] STCC0/WO[0] TCC1/WO[2]
 * | 5          |                  |  PB02  | 		          | EIC/EXTINT[2]  ADC/AIN[14]  PTC/Y[12]
 * | 6          |                  |  PB23  | 	  	          | EIC/EXTINT[7]  ADC/AIN[12]  PTC/Y[10]
 * | 7          |                  |  PB06  | 	              | EIC/EXTINT[6]  ADC/AIN[13]  PTC/Y[11]
 * | 8          |                  |  PB17  |                 | EIC/EXTINT[1]   SERCOM5/PAD[0] TCC0/WO[4]  TCC1_ALT/WO[0]
 * | 9          |                  |  PB22  |                 | EIC/EXTINT[6]   SERCOM5/PAD[2] TC7/WO[0]  TCC1_ALT/WO[0]
 * | 10         |                  |  PA31  |  	              | EIC/EXTINT[11] SERCOM1_ALT/PAD[3] TCC1/WO[1] 
 * | 11         |                  |  PA01  | 		          | EIC/EXTINT[1] SERCOM1_ALT/PAD[1] TCC2/WO[1] 
 * | 12         |                  |  PA28  |                 | EIC/EXTINT[8] 
 * | 13         |                  |  PA30  |        		  | EIC/EXTINT[10] SERCOM1_ALT/PAD[2] TCC1/WO[0] 
 * +------------+------------------+--------+-----------------+--------------------------------------------------------------------------------------------------------
 */
  { PORTB, 30, PIO_DIGITAL, (PIN_ATTR_DIGITAL|PIN_ATTR_PWM|PIN_ATTR_TIMER), No_ADC_Channel, PWM0_CH0, TCC0_CH0, EXTERNAL_INT_14 }, // TCC0/WO[0]
  { PORTB,  2, PIO_ANALOG, PIN_ATTR_ANALOG, ADC_Channel10, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_2 },
  { PORTB,  23, PIO_DIGITAL, PIN_ATTR_DIGITAL, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_7 },
  { PORTB,  6, PIO_DIGITAL, PIN_ATTR_DIGITAL, ADC_Channel14, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_6 },
  { PORTB, 17, PIO_DIGITAL, (PIN_ATTR_DIGITAL|PIN_ATTR_PWM|PIN_ATTR_TIMER), No_ADC_Channel, PWM5_CH0, TC5_CH0, EXTERNAL_INT_1},
  { PORTB, 22, PIO_DIGITAL, (PIN_ATTR_DIGITAL|PIN_ATTR_PWM|PIN_ATTR_TIMER), No_ADC_Channel, PWM5_CH1, TC5_CH1, EXTERNAL_INT_6 },
  { PORTA, 31, PIO_DIGITAL, PIN_ATTR_DIGITAL, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_11},
  { PORTA, 1, PIO_DIGITAL, PIN_ATTR_DIGITAL, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_1 },
  { PORTA, 28, PIO_DIGITAL, PIN_ATTR_DIGITAL, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_8 },
  { PORTA, 30, PIO_DIGITAL, PIN_ATTR_DIGITAL, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_10 },

/* +------------+------------------+--------+-----------------+--------------------------------------------------------------------------------------------------------
 * | Pin number | Digital/PWM      |  PIN   | Label/Name      | Comments (* is for default peripheral in use)
 * +------------+------------------+--------+-----------------+--------------------------------------------------------------------------------------------------------
 * | 14         | 			       |  PA10  | 		          | EIC/EXTINT[10]  *ADC/AIN[18]           PTC/X[2]  SERCOM0/PAD[2]   TCC0/WO[2]  TCC1_ALT/WO[0]
 * | 15         | 			       |  PB03  | 		          | EIC/EXTINT[3]  ADC/AIN[11]  PTC/Y[9]  SERCOM5_ALT/PAD[1] *TC6/WO[1]
 * | 16         | 			       |  PA00  | 		          | EIC/EXTINT[0] SERCOM1_ALT/PAD[0] TCC2/WO[0]
 * | 17         | 			       |  PA14  | 	EN_ESP        | EIC/EXTINT[13]  SERCOM2/PAD[1]  SERCOM4_ALT/PAD[1] TCC2/WO[1]
 * | 18         |			       |  PB09  | 	 	          | EIC/EXTINT[9] ADC/AIN[3] PTC/Y[15] *SERCOM4_ALT/PAD[1] TC4/WO[1]
 * | 19         | 			       |  PB08  | 		          | EIC/EXTINT[8] ADC/AIN[2] PTC/Y[14] *SERCOM4_ALT/PAD[0] TC4/WO[0]
 * +------------+------------------+--------+-----------------+--------------------------------------------------------------------------------------------------------
 */
  { PORTA, 10, PIO_DIGITAL, (PIN_ATTR_DIGITAL),ADC_Channel18, PWM6_CH0, TC6_CH0, EXTERNAL_INT_10 }, // ADC/AIN[18]
  { PORTB,  3, PIO_DIGITAL, (PIN_ATTR_DIGITAL|PIN_ATTR_PWM|PIN_ATTR_TIMER), ADC_Channel11, PWM6_CH1, TC6_CH1, EXTERNAL_INT_3 },
  { PORTA, 0,  PIO_DIGITAL, PIN_ATTR_DIGITAL, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_0 }, // TC4/WO[0]
  { PORTA, 14, PIO_DIGITAL, (PIN_ATTR_DIGITAL|PIN_ATTR_PWM|PIN_ATTR_TIMER), No_ADC_Channel, PWM2_CH1, TCC2_CH1, EXTERNAL_INT_13 }, // TC4/WO[1] // EN_ESP
  { PORTB, 9, PIO_TIMER, (PIN_ATTR_DIGITAL|PIN_ATTR_PWM|PIN_ATTR_TIMER), No_ADC_Channel, PWM4_CH1, TC4_CH1, EXTERNAL_INT_9 }, // TCC2/WO[0]
  { PORTB, 8, PIO_TIMER, (PIN_ATTR_DIGITAL|PIN_ATTR_PWM|PIN_ATTR_TIMER), No_ADC_Channel, PWM4_CH0, TC4_CH0, EXTERNAL_INT_8 }, // TCC2/WO[1]
/*
 * +------------+------------------+--------+-----------------+--------------------------------------------------------------------------------------------------------
 * | Pin number | Analog pins      |  PIN   | Label/Name      | Comments (* is for default peripheral in use)
 * +------------+------------------+--------+-----------------+--------------------------------------------------------------------------------------------------------
 * | 20         |                  |  PB00  | 		          | EIC/EXTINT[0] *ADC/AIN[8] PTC/Y[6] SERCOM5_ALT/PAD[2]  TC6/WO[0]
 * | 21         |                  |  PB01  | 		          | EIC/EXTINT[1] *ADC/AIN[9] PTC/Y[7] SERCOM5_ALT/PAD[3]  TC6/WO[1]
 * | 22         |                  |  PA03  | 		          | EIC/EXTINT[2]  ADC/AIN[10]  PTC/Y[8]  SERCOM5_ALT/PAD[0] *TC6/WO[0]
 * | 23         |                  |  PA11  | 		          | EIC/EXTINT[11] *ADC/AIN[19]  PTC/X[3]  SERCOM0/PAD[3]  SERCOM2_ALT/PAD[3]  TCC0/WO[3]  TCC1_ALT/WO[1]
 * | 24         |                  |  PA15  |RST_ESP          | EIC/EXTINT[15] SERCOM2/PAD[3] SERCOM4_ALT/PAD[3] TC3/WO[1]  TCC0/WO[5] GCLK_IO[1]		
 * | 25         |                  |  PA08  |			      | NMI  *ADC/AIN[16]  PTC/X[2]  SERCOM0/PAD[0]  SERCOM2_ALT/PAD[0]  TCC0/WO[0]  TCC1_ALT/WO[2] 
 * +------------+------------------+--------+-----------------+--------------------------------------------------------------------------------------------------------
 */
  { PORTB,  0, PIO_ANALOG, PIN_ATTR_ANALOG, ADC_Channel8, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_0 }, // ADC/AIN[8]
  { PORTB,  1, PIO_ANALOG, PIN_ATTR_ANALOG, ADC_Channel9, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_1 }, // ADC/AIN[9]
  { PORTA,  3, PIO_ANALOG, PIN_ATTR_ANALOG, ADC_Channel1, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_3 }, // ADC/AIN[1] (AREF)
  { PORTA, 11, PIO_DIGITAL, PIN_ATTR_DIGITAL, ADC_Channel19, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_11 },  // ADC/AIN[19]
  { PORTA, 15, PIO_DIGITAL, (PIN_ATTR_DIGITAL|PIN_ATTR_PWM|PIN_ATTR_TIMER), No_ADC_Channel, PWM3_CH1, TC3_CH1, EXTERNAL_INT_15 }, //RST_ESP 
  { PORTA,  8, PIO_SERCOM_ALT, PIN_ATTR_DIGITAL, ADC_Channel16, PWM0_CH0, TCC0_CH0, EXTERNAL_INT_NMI }, // SDA:SERCOM2_ALT/PAD[0]
/*
 * +------------+------------------+--------+-----------------+--------------------------------------------------------------------------------------------------------
 * | Pin number | Serial           |  PIN   | Label/Name      | Comments (* is for default peripheral in use)
 * +------------+------------------+--------+-----------------+--------------------------------------------------------------------------------------------------------
 * | 26         |                  |  PA20  |    GPIO15_ESP   | EIC/EXTINT[4]  PTC/X[8]  SERCOM5/PAD[2]  SERCOM3_ALT/PAD[2]  TC7/WO[0]  TCC0_ALT/WO[6]  I2S/SCK[0]  GCLK_IO[4]
 * | 27         |                  |  PA21  | 			      | EIC/EXTINT[5]  PTC/X[9]  SERCOM5/PAD[3]  SERCOM3_ALT/PAD[3]  TC7/WO[1]  TCC0_ALT/WO[7]  I2S/FS[0]  GCLK_IO[5]
 * | 28			|			       |  PA22  | 				  | EIC/EXTINT[6]  PTC/X[10] *SERCOM3/PAD[0]  SERCOM5_ALT/PAD[0]  TC4/WO[0]  TCC0_ALT/WO[4]
 * | 29         |                  |  PA23  | 		          | EIC/EXTINT[7]  PTC/X[11] *SERCOM3/PAD[1]  SERCOM5_ALT/PAD[1]  TC4/WO[1]  TCC0_ALT/WO[5]
 * +------------+------------------+--------+-----------------+--------------------------------------------------------------------------------------------------------
 */
 { PORTA, 20, PIO_SERCOM_ALT, (PIN_ATTR_DIGITAL|PIN_ATTR_PWM|PIN_ATTR_TIMER), No_ADC_Channel, PWM7_CH0, TC7_CH0, EXTERNAL_INT_4 }, //GPIO15_ESP
 { PORTA, 21, PIO_SERCOM_ALT, (PIN_ATTR_DIGITAL|PIN_ATTR_PWM|PIN_ATTR_TIMER), No_ADC_Channel, PWM7_CH1, TC7_CH1, EXTERNAL_INT_5 },
 { PORTA, 22, PIO_SERCOM, (PIN_ATTR_DIGITAL|PIN_ATTR_PWM|PIN_ATTR_TIMER), No_ADC_Channel, PWM4_CH0, TC4_CH0, EXTERNAL_INT_6 }, // TX: SERCOM3/PAD[0] 
 { PORTA, 23, PIO_SERCOM,(PIN_ATTR_DIGITAL|PIN_ATTR_PWM|PIN_ATTR_TIMER), No_ADC_Channel, PWM4_CH1, TC4_CH1, EXTERNAL_INT_7 }, // RX: SERCOM3/PAD[1]

/* +------------+------------------+--------+-----------------+--------------------------------------------------------------------------------------------------------
 * | Pin number | Serial2          |  PIN   | Label/Name      | Comments (* is for default peripheral in use)
 * +------------+------------------+--------+-----------------+--------------------------------------------------------------------------------------------------------
 * | 30         |                  |  PB10  | 				  | EIC/EXTINT[11] *SERCOM4/PAD[3]  TC5/WO[1]  TCC0/WO[5]  I2S/SCK[1]  GCLK_IO[5]
 * | 31         |                  |  PB11  | 				  | EIC/EXTINT[10] *SERCOM4/PAD[2]  TC5/WO[0]  TCC0/WO[4]  I2S/MCK[1]  GCLK_IO[4]
 * +------------+------------------+--------+-----------------+--------------------------------------------------------------------------------------------------------
 */
  { PORTB, 10, PIO_DIGITAL, (PIN_ATTR_DIGITAL|PIN_ATTR_PWM|PIN_ATTR_TIMER), No_ADC_Channel, PWM5_CH1, TC5_CH1, EXTERNAL_INT_11 }, // RX: SERCOM4/PAD[3]
  { PORTB, 11, PIO_DIGITAL, (PIN_ATTR_DIGITAL|PIN_ATTR_PWM|PIN_ATTR_TIMER), No_ADC_Channel, PWM5_CH0, TC5_CH0, EXTERNAL_INT_10 }, // TX: SERCOM4/PAD[2]

/*
 * +------------+------------------+--------+-----------------+--------------------------------------------------------------------------------------------------------
 * | Pin number | Wire             |  PIN   | Label/Name      | Comments (* is for default peripheral in use)
 * +------------+------------------+--------+-----------------+--------------------------------------------------------------------------------------------------------
 * | 32         |                  |  PA09  | 		          | EIC/EXTINT[9]  ADC/AIN[17]  PTC/X[1]  SERCOM0/PAD[1] *SERCOM2_ALT/PAD[1]  TCC0/WO[1]  TCC1/WO[3]
 * | 33         |                  |  PB05  | 	   	          | EIC/EXTINT[5]             ADC/AIN[13]            PTC/Y[11]
 * +------------+------------------+--------+-----------------+--------------------------------------------------------------------------------------------------------
 */
  { PORTA,  9, PIO_DIGITAL, (PIN_ATTR_DIGITAL), ADC_Channel17, NOT_ON_PWM, TCC0_CH1, EXTERNAL_INT_9 }, // SCL:SERCOM2_ALT/PAD[1]
  { PORTB,  5, PIO_ANALOG, (PIN_ATTR_ANALOG), ADC_Channel13, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_5 }, // GPIO for alternate SPI/SS
/* +------------+------------------+--------+-----------------+--------------------------------------------------------------------------------------------------------
 * | Pin number | SPI              |  PIN   | Label/Name      | Comments (* is for default peripheral in use)
 * +------------+------------------+--------+-----------------+--------------------------------------------------------------------------------------------------------
 * | 34         |                  |  PA06  | MOSI/EXT1_16    | EIC/EXTINT[6]             ADC/AIN[6]  AC/AIN[2]  PTC/Y[4] *SERCOM0_ALT/PAD[2]  TCC1/WO[0]
 * | 35         |                  |  PA04  | MISO/EXT1_17    | EIC/EXTINT[4]  ADC/VREFB  ADC/AIN[4]  AC/AIN[0]  PTC/Y[2] *SERCOM0_ALT/PAD[0]  TCC0/WO[0]
 * | 36         |                  |  PA07  | SCK/EXT1_18     | EIC/EXTINT[7]             ADC/AIN[7]  AC/AIN[3]  PTC/Y[5] *SERCOM0_ALT/PAD[3]  TCC1/WO[1]  I2S/SD[0]
 * | 37         |                  |  PA05  | SS_A/EXT1_15    | EIC/EXTINT[5]             ADC/AIN[5]  AC/AIN[1]  PTC/Y[3] *SERCOM0_ALT/PAD[1]  TCC0/WO[1]
 * | 38         |                  |  PB04  | SS_B/EXT1_10    | EIC/EXTINT[4]             ADC/AIN[12]            PTC/Y[11]
 * +------------+------------------+--------+-----------------+--------------------------------------------------------------------------------------------------------
 */
  { PORTA,  6, PIO_SERCOM_ALT, (PIN_ATTR_DIGITAL|PIN_ATTR_PWM|PIN_ATTR_TIMER), No_ADC_Channel, PWM1_CH0, TCC1_CH0, EXTERNAL_INT_6 }, // SERCOM0_ALT/PAD[2]
  { PORTA,  4, PIO_SERCOM_ALT, (PIN_ATTR_DIGITAL|PIN_ATTR_PWM|PIN_ATTR_TIMER), No_ADC_Channel, PWM0_CH0, TCC0_CH0, EXTERNAL_INT_4 }, // SERCOM0_ALT/PAD[0]
  { PORTA,  7, PIO_SERCOM_ALT, (PIN_ATTR_DIGITAL|PIN_ATTR_PWM|PIN_ATTR_TIMER), No_ADC_Channel, PWM1_CH1, TCC1_CH1, EXTERNAL_INT_7 }, // SERCOM0_ALT/PAD[3]
  { PORTA,  5, PIO_SERCOM_ALT, (PIN_ATTR_DIGITAL|PIN_ATTR_PWM|PIN_ATTR_TIMER), No_ADC_Channel, PWM0_CH1, TCC0_CH1, EXTERNAL_INT_5 }, // SERCOM0_ALT/PAD[1]
  { PORTB,  4, PIO_ANALOG, (PIN_ATTR_ANALOG), ADC_Channel12, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_4 }, // TC6/WO[0]
/* +------------+------------------+--------+-----------------+--------------------------------------------------------------------------------------------------------
 * | Pin number | SPI1             |  PIN   | Label/Name      | Comments (* is for default peripheral in use)
 * +------------+------------------+--------+-----------------+--------------------------------------------------------------------------------------------------------
 * | 39         |                  |  PA18  | MOSI/EXT2_16    | EIC/EXTINT[2]  PTC/X[6] *SERCOM1/PAD[2]  SERCOM3_ALT/PAD[2]  TC3/WO[0]  TCC0_ALT/WO[2]  AC/CMP[0]
 * | 40         |                  |  PA16  | MISO/EXT2_17    | EIC/EXTINT[0]  PTC/X[4] *SERCOM1/PAD[0]  SERCOM3_ALT/PAD[0]  TCC2/WO[0]  TCC0_ALT/WO[6]  GCLK_IO[2]
 * | 41         |                  |  PA19  | SCK/EXT2_18     | EIC/EXTINT[3]  PTC/X[7] *SERCOM1/PAD[3]  SERCOM3_ALT/PAD[3]  TC3/WO[1]  TCC0_ALT/WO[3]  I2S/SD[0]  AC/CMP[1]
 * | 42         |                  |  PA17  | SS_A/EXT2_15    | EIC/EXTINT[1]  PTC/X[5] *SERCOM1/PAD[1]  SERCOM3_ALT/PAD[1]  TCC2/WO[1]  TCC0/WO[7]  GCLK_IO[3]
 * | 43         |                  |  PB16  | SS_B/EXT2_10    | EIC/EXTINT[0]  PTC/X[15]  SERCOM4/PAD[3]  TC6/WO[0]  GCLK_IO[2]
 * +------------+------------------+--------+-----------------+--------------------------------------------------------------------------------------------------------
 */
  { PORTA, 18, PIO_SERCOM, (PIN_ATTR_DIGITAL|PIN_ATTR_PWM|PIN_ATTR_TIMER), No_ADC_Channel, PWM3_CH0, TC3_CH0, EXTERNAL_INT_2 }, // SERCOM1/PAD[2]
  { PORTA, 16, PIO_SERCOM, (PIN_ATTR_DIGITAL|PIN_ATTR_PWM|PIN_ATTR_TIMER), No_ADC_Channel, PWM2_CH0, TCC2_CH0, EXTERNAL_INT_0 }, // SERCOM1/PAD[0]
  { PORTA, 19, PIO_SERCOM, (PIN_ATTR_DIGITAL|PIN_ATTR_PWM|PIN_ATTR_TIMER), No_ADC_Channel, PWM3_CH1, TC3_CH1, EXTERNAL_INT_3 }, // SERCOM1/PAD[3]
  { PORTA, 17, PIO_SERCOM, (PIN_ATTR_DIGITAL|PIN_ATTR_PWM|PIN_ATTR_TIMER), No_ADC_Channel, PWM2_CH1, TCC2_CH1, EXTERNAL_INT_1 }, // SERCOM1/PAD[1]
  { PORTB, 16, PIO_DIGITAL, (PIN_ATTR_DIGITAL|PIN_ATTR_PWM|PIN_ATTR_TIMER), No_ADC_Channel, PWM6_CH0, TC6_CH0, EXTERNAL_INT_0 }, // GPIO for alternate SPI/SS

/* +------------+------------------+--------+-----------------+--------------------------------------------------------------------------------------------------------
 * | Pin number | SPI2             |  PIN   | Label/Name      | Comments (* is for default peripheral in use)
 * +------------+------------------+--------+-----------------+--------------------------------------------------------------------------------------------------------
 * | 44         |                  |  PB12  | MOSI/EXT3_16    | EIC/EXTINT[12]              PTC/X[12]  SERCOM4/PAD[0] *TC4/WO[0]  TCC0_ALT/WO[6]  I2S/FS[1]  GCLK_IO[6]
 * | 45         |                  |  PB13  | MISO/EXT3_17    | EIC/EXTINT[13]              PTC/X[13]  SERCOM4/PAD[1] *TC4/WO[1]  TCC0_ALT/WO[7]             GCLK_IO[7]
 * | 46         |                  |  PB14  | SCK/EXT3_18     | EIC/EXTINT[14]  PTC/X[14]  SERCOM4/PAD[2]  TC5/WO[0]  GCLK_IO[0]
 * | 47         |                  |  PB15  | SS_A/EXT3_15    | EIC/EXTINT[15]  PTC/X[15]  SERCOM4/PAD[3]  TC5/WO[1]  GCLK_IO[1]
 * | 48         |                  |  PA27  | SS_B/EXT3_10    | EIC/EXTINT[15]  GCLK_IO[0]
 * +------------+------------------+--------+-----------------+--------------------------------------------------------------------------------------------------------
 */
  { PORTB, 12, PIO_SERCOM, (PIN_ATTR_DIGITAL|PIN_ATTR_PWM|PIN_ATTR_TIMER), No_ADC_Channel, PWM7_CH0, TC7_CH0, EXTERNAL_INT_6 }, // SERCOM5_ALT/PAD[2]
  { PORTB, 13, PIO_SERCOM, (PIN_ATTR_DIGITAL|PIN_ATTR_PWM|PIN_ATTR_TIMER), No_ADC_Channel, PWM6_CH0, TC6_CH0, EXTERNAL_INT_0 }, // SERCOM5/PAD[0]
  { PORTB, 14, PIO_SERCOM, (PIN_ATTR_DIGITAL|PIN_ATTR_PWM|PIN_ATTR_TIMER), No_ADC_Channel, PWM7_CH1, TC7_CH1, EXTERNAL_INT_7 }, // SERCOM5_ALT/PAD[3]
  { PORTB, 15, PIO_SERCOM, (PIN_ATTR_DIGITAL|PIN_ATTR_PWM|PIN_ATTR_TIMER), No_ADC_Channel, PWM6_CH1, TC6_CH1, EXTERNAL_INT_1 }, // SERCOM5/PAD[1]
  { PORTA, 27, PIO_DIGITAL, PIN_ATTR_DIGITAL, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_15 }, // GPIO for alternate SPI/SS

/* +------------+------------------+--------+-----------------+--------------------------------------------------------------------------------------------------------
 * | Pin number | USB              |  PIN   | Label/Name      | Comments (* is for default peripheral in use)
 * +------------+------------------+--------+-----------------+--------------------------------------------------------------------------------------------------------
 * | 49         |                  |  PA25  | USB_POSITIVE    | *USB/DP
 * | 50         |                  |  PA24  | USB_NEGATIVE    | *USB/DM
 * | 51         |                  |  PB31  | GPI0_ESP        | USB/VBUS
 * | 52         |                  |  PA03  | USB_ID          | USB/ID
 * +------------+------------------+--------+-----------------+--------------------------------------------------------------------------------------------------------
 */
  { PORTA, 25, PIO_COM, PIN_ATTR_NONE, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_NONE }, // USB/DP
  { PORTA, 24, PIO_COM, PIN_ATTR_NONE, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_NONE }, // USB/DM
  { PORTB, 31, PIO_DIGITAL, PIN_ATTR_DIGITAL, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_11 }, // USB/VBUS   //GPI0_ESP
  //{ PORTB, 3, PIO_DIGITAL, PIN_ATTR_NONE, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_NONE }, // USB/ID
};

const void* g_apTCInstances[TCC_INST_NUM+TC_INST_NUM]={ TCC0, TCC1, TCC2, TC3, TC4, TC5, TC6, TC7 } ;

// Multi-serial objects instantiation
SERCOM sercom0( SERCOM0 ) ;
SERCOM sercom1( SERCOM1 ) ;
SERCOM sercom2( SERCOM2 ) ;
SERCOM sercom3( SERCOM3 ) ;
SERCOM sercom4( SERCOM4 ) ;
SERCOM sercom5( SERCOM5 ) ;

Uart Serial( &sercom4, PIN_SERIAL_RX, PIN_SERIAL_TX, PAD_SERIAL_RX, PAD_SERIAL_TX ) ;

void SERCOM4_Handler(void)
{
  Serial.IrqHandler();
}



/*

Uart Serial( &sercom2, PIN_SERIAL_RX, PIN_SERIAL_TX, PAD_SERIAL_RX, PAD_SERIAL_TX ) ;

void SERCOM2_Handler(void)
{
  Serial.IrqHandler();
}



*/
/*
Uart Serial2( &sercom4, PIN_SERIAL2_RX, PIN_SERIAL2_TX, PAD_SERIAL2_RX, PAD_SERIAL2_TX ) ;
void SERCOM4_Handler(void)
{
  Serial2.IrqHandler();
}*/