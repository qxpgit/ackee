/*


*/

#include <Arduino.h>
const PinDescription g_APinDescription[]=
{
// seriali 
/*
 * +------------+------------------+--------+-----------------+--------------------------------------------------------------------------------------------------------
 * | Pin number | Serial(modem)    |  PIN   | Label/Name      | Comments Modem Fibocom Seriale su SERCOM1
 * +------------+------------------+--------+-----------------+--------------------------------------------------------------------------------------------------------
 * | 0          |                  |  PA16  | TX_Modem        | EIC/EXTINT[0]                  
 * | 1          |                  |  PA17  | RX_Modem    	  | EIC/EXTINT[1] 
 * +------------+------------------+--------+-----------------+--------------------------------------------------------------------------------------------------------
 */
    { PORTA, 16, PIO_SERCOM, PIN_ATTR_DIGITAL, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_0 }, // TX: SERCOM1/PAD[0]
	{ PORTA, 17, PIO_SERCOM, PIN_ATTR_DIGITAL, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_1 }, // RX: SERCOM1/PAD[1]
  
/* +------------+------------------+--------+-----------------+--------------------------------------------------------------------------------------------------------
 * | Pin number | SPI              |  PIN   | Label/Name      | Comments        SPI_EXT0 J2
 * +------------+------------------+--------+-----------------+--------------------------------------------------------------------------------------------------------
 * | 2         |                  |  PA04   | MOSI/EXT1_16    | EIC/EXTINT[6]             ADC/AIN[4]  AC/AIN[0]  PTC/Y[4] *SERCOM0_ALT/PAD[2]  TCC0/WO[0]
 * | 3         |                  |  PA07   | MISO/EXT1_17    | EIC/EXTINT[4]             ADC/AIN[7]  AC/AIN[3]  PTC/Y[2] *SERCOM0_ALT/PAD[0]  TCC1/WO[1]
 * | 4         |                  |  PA05   | SCK/EXT1_18     | EIC/EXTINT[7]             ADC/AIN[5]  AC/AIN[1]  PTC/Y[5] *SERCOM0_ALT/PAD[3]  TCC0/WO[1]  
 * | 5         |                  |  PA06   | SS_A/EXT1_15    | EIC/EXTINT[5]             ADC/AIN[6]  AC/AIN[2]  PTC/Y[3] *SERCOM0_ALT/PAD[1]  TCC1/WO[0]				 
 * +------------+------------------+--------+-----------------+--------------------------------------------------------------------------------------------------------
 */
  { PORTA,  4, PIO_SERCOM_ALT, (PIN_ATTR_DIGITAL|PIN_ATTR_PWM|PIN_ATTR_TIMER), No_ADC_Channel, PWM0_CH0, TCC0_CH0, EXTERNAL_INT_4 }, // SERCOM0_ALT/PAD[0]
  { PORTA,  7, PIO_SERCOM_ALT, (PIN_ATTR_DIGITAL|PIN_ATTR_PWM|PIN_ATTR_TIMER), No_ADC_Channel, PWM1_CH1, TCC1_CH1, EXTERNAL_INT_7 }, // SERCOM0_ALT/PAD[3] 
  { PORTA,  5, PIO_SERCOM_ALT, (PIN_ATTR_DIGITAL|PIN_ATTR_PWM|PIN_ATTR_TIMER), No_ADC_Channel, PWM0_CH1, TCC0_CH1, EXTERNAL_INT_5 }, // SERCOM0_ALT/PAD[1]
  { PORTA,  6, PIO_SERCOM_ALT, (PIN_ATTR_DIGITAL|PIN_ATTR_PWM|PIN_ATTR_TIMER), No_ADC_Channel, PWM1_CH0, TCC1_CH0, EXTERNAL_INT_6 }, // SERCOM0_ALT/PAD[2]
 
/* +------------+------------------+--------+-----------------+--------------------------------------------------------------------------------------------------------
 * | Pin number | SPI1              |  PIN   | Label/Name      | Comments   SPI1_EXT2 J2
 * +------------+------------------+--------+-----------------+--------------------------------------------------------------------------------------------------------
 * | 6         |                  |  PA12   | MOSI/EXT1_12    | EIC/EXTINT[12]             No_ADC_Channel   *SERCOM2/PAD[0]  TCC2/WO[0]
 * | 7         |                  |  PA15   | MISO/EXT1_15    | EIC/EXTINT[15]             No_ADC_Channel   *SERCOM2/PAD[3]  TC3/WO[1]
 * | 8         |                  |  PA13   | SCK/EXT1_13     | EIC/EXTINT[13]             No_ADC_Channel   *SERCOM2/PAD[1]  TCC2/WO[1]  
 * | 9         |                  |  PA14   | SS_A/EXT1_14    | EIC/EXTINT[14]             No_ADC_Channel   *SERCOM2/PAD[2]  TC3/WO[0]
 * +------------+------------------+--------+-----------------+--------------------------------------------------------------------------------------------------------
 */
  { PORTA,  12, PIO_SERCOM, (PIN_ATTR_DIGITAL|PIN_ATTR_TIMER), No_ADC_Channel, NOT_ON_PWM, TCC2_CH0, EXTERNAL_INT_12 }, // SERCOM2/PAD[0]
  { PORTA,  15, PIO_SERCOM, (PIN_ATTR_DIGITAL|PIN_ATTR_TIMER), No_ADC_Channel, NOT_ON_PWM, TC3_CH1, EXTERNAL_INT_15 },  // SERCOM2/PAD[3] 
  { PORTA,  13, PIO_SERCOM, (PIN_ATTR_DIGITAL|PIN_ATTR_TIMER), No_ADC_Channel, NOT_ON_PWM, TCC2_CH1, EXTERNAL_INT_13 }, // SERCOM2/PAD[1]
  { PORTA,  14, PIO_SERCOM, (PIN_ATTR_DIGITAL|PIN_ATTR_TIMER), No_ADC_Channel, NOT_ON_PWM, TC3_CH0, EXTERNAL_INT_14 },  // SERCOM2/PAD[2]

 /* +------------+------------------+--------+-----------------+--------------------------------------------------------------------------------------------------------
 * | Pin number | SPI2             |  PIN   | Label/Name      | Comments        SPI2_EXT1 J1
 * +------------+------------------+--------+-----------------+--------------------------------------------------------------------------------------------------------
 * | 10         |                  |  PA22   | MOSI/EXT1_6    | EIC/EXTINT[6]             No_ADC_Channel *SERCOM3/PAD[0]      TC4/WO[0]
 * | 11         |                  |  PA21   | MISO/EXT1_13   | EIC/EXTINT[5]             No_ADC_Channel *SERCOM3_ALT/PAD[3]  TC7/WO[1]
 * | 12         |                  |  PA23   | SCK/EXT1_7     | EIC/EXTINT[7]             No_ADC_Channel *SERCOM3/PAD[1]      TC4/WO[1]  
 * | 13         |                  |  PA20   | SS_A/EXT1_12   | EIC/EXTINT[4]             No_ADC_Channel *SERCOM3_ALT/PAD[2]  TC7/WO[0]				 
 * +------------+------------------+--------+-----------------+--------------------------------------------------------------------------------------------------------
 */
  { PORTA,  22, PIO_SERCOM,     (PIN_ATTR_DIGITAL|PIN_ATTR_TIMER), No_ADC_Channel, NOT_ON_PWM, TC4_CH0, EXTERNAL_INT_6 }, // SERCOM3/PAD[0]
  { PORTA,  21, PIO_SERCOM_ALT, (PIN_ATTR_DIGITAL|PIN_ATTR_TIMER), No_ADC_Channel, NOT_ON_PWM, TC7_CH1, EXTERNAL_INT_5 }, // SERCOM3_ALT/PAD[3] 
  { PORTA,  23, PIO_SERCOM,     (PIN_ATTR_DIGITAL|PIN_ATTR_TIMER), No_ADC_Channel, NOT_ON_PWM, TC4_CH1, EXTERNAL_INT_7 }, // SERCOM3/PAD[1]
  { PORTA,  24, PIO_SERCOM_ALT, (PIN_ATTR_DIGITAL|PIN_ATTR_TIMER), No_ADC_Channel, NOT_ON_PWM, TC7_CH0, EXTERNAL_INT_4 }, // SERCOM0_ALT/PAD[2]
	
/* +------------+------------------+--------+-----------------+--------------------------------------------------------------------------------------------------------
 * | Pin number | SPI3-RADIO       |  PIN   | Label/Name      | Comments SPI FOR AT86RF212B
 * +------------+------------------+--------+-----------------+--------------------------------------------------------------------------------------------------------
 * | 14         |                  |  PB12  | MOSI/EXT3_12    | EIC/EXTINT[12] SERCOM4/PAD[0] *TC4/WO[0]  
 * | 15         |                  |  PB15  | MISO/EXT3_15    | EIC/EXTINT[13] SERCOM4/PAD[3] *TC5/WO[1]  
 * | 16         |                  |  PB13  | SCK/EXT3_13     | EIC/EXTINT[14] SERCOM4/PAD[1]  TC4/WO[1]  
 * | 17         |                  |  PB14  | SS_A/EXT3_14    | EIC/EXTINT[15] SERCOM4/PAD[2]  TC5/WO[0] 
 * +------------+------------------+--------+-----------------+--------------------------------------------------------------------------------------------------------
 */
  { PORTB, 12, PIO_SERCOM, (PIN_ATTR_DIGITAL|PIN_ATTR_PWM|PIN_ATTR_TIMER), No_ADC_Channel, PWM4_CH0, TC4_CH0, EXTERNAL_INT_12 }, // SERCOM4/PAD[0]
  { PORTB, 15, PIO_SERCOM, (PIN_ATTR_DIGITAL|PIN_ATTR_PWM|PIN_ATTR_TIMER), No_ADC_Channel, PWM5_CH0, TC5_CH0, EXTERNAL_INT_15 }, // SERCOM4/PAD[3]
  { PORTB, 13, PIO_SERCOM, (PIN_ATTR_DIGITAL|PIN_ATTR_PWM|PIN_ATTR_TIMER), No_ADC_Channel, PWM5_CH1, TC5_CH1, EXTERNAL_INT_13 }, // SERCOM4/PAD[1]
  { PORTB, 14, PIO_SERCOM, (PIN_ATTR_DIGITAL|PIN_ATTR_PWM|PIN_ATTR_TIMER), No_ADC_Channel, PWM4_CH1, TC4_CH1, EXTERNAL_INT_14 }, // SERCOM4/PAD[2]
  
  
 /* +------------+-----------------+--------+-----------------+--------------------------------------------------------------------------------------------------------
 * | Pin number | SPI3-EEPROM-RTC  |  PIN   | Label/Name      | Comments SPI FOR EEPROM AND RTC
 * +------------+------------------+--------+-----------------+--------------------------------------------------------------------------------------------------------
 * | 18         |                  |  PB30  | MOSI/EXT3_14    | EIC/EXTINT[14] SERCOM5_ALT/PAD[0] *TC4/WO[0] 
 * | 19         |                  |  PB23  | MISO/EXT3_7     | EIC/EXTINT[7] SERCOM5_ALT/PAD[3] *TC5/WO[1]  
 * | 20         |                  |  PB31  | SCK/EXT3_15     | EIC/EXTINT[15] SERCOM5_ALT/PAD[1]  TC4/WO[1]  
 * | 21         |                  |  PB22  | SS_A/EXT3_6     | EIC/EXTINT[6] SERCOM5_ALT/PAD[2]  TC5/WO[0]  // SS EEPROM
 * | 22         |                  |  PB11  | SS_A/EXT3_11    | EIC/EXTINT[11] SS_alternative  TC5/WO[1]  // SS RTC
 * +------------+------------------+--------+-----------------+--------------------------------------------------------------------------------------------------------
 */
  { PORTB, 30, PIO_SERCOM_ALT, (PIN_ATTR_DIGITAL|PIN_ATTR_PWM|PIN_ATTR_TIMER), No_ADC_Channel, PWM4_CH0, TC4_CH0, EXTERNAL_INT_14 }, // SERCOM5_ALT/PAD[0]
  { PORTB, 23, PIO_SERCOM_ALT, (PIN_ATTR_DIGITAL|PIN_ATTR_PWM|PIN_ATTR_TIMER), No_ADC_Channel, PWM5_CH0, TC5_CH0, EXTERNAL_INT_7 }, // SERCOM5_ALT/PAD[3]
  { PORTB, 31, PIO_SERCOM_ALT, (PIN_ATTR_DIGITAL|PIN_ATTR_PWM|PIN_ATTR_TIMER), No_ADC_Channel, PWM5_CH1, TC5_CH1, EXTERNAL_INT_15 }, // SERCOM5_ALT/PAD[1]
  { PORTB, 22, PIO_SERCOM_ALT, (PIN_ATTR_DIGITAL|PIN_ATTR_PWM|PIN_ATTR_TIMER), No_ADC_Channel, PWM4_CH1, TC4_CH1, EXTERNAL_INT_6 }, // SERCOM5_ALT/PAD[2]
  { PORTB, 11, PIO_DIGITAL,    (PIN_ATTR_DIGITAL|PIN_ATTR_PWM|PIN_ATTR_TIMER), No_ADC_Channel, PWM5_CH1, TC5_CH1, EXTERNAL_INT_11 }, // SERCOM5_ALT/PAD[2]	
	
// PIN DIGITALI 
// LED

/* +------------+------------------+--------+-----------------+--------------------------------------------------------------------------------------------------------
 * | Pin number | Digital          |  PIN   | Label/Name      | Comments (* is for default peripheral in use)
 * +------------+------------------+--------+-----------------+--------------------------------------------------------------------------------------------------------
 * | 23         |                  |  PB05  | CPULED_BLU      | EXTINT[5] 
 * | 24         |                  |  PB06  | CPULED_RED      | EXTINT[6] 
 * | 25         |                  |  PB07  | CPULED_GREEN    | EXTINT[7] 
 * +------------+------------------+--------+-----------------+--------------------------------------------------------------------------------------------------------
 */
 
 { PORTB, 5, PIO_DIGITAL, PIN_ATTR_DIGITAL, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_5 },
 { PORTB, 6, PIO_DIGITAL, PIN_ATTR_DIGITAL, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_6 },
 { PORTB, 7, PIO_DIGITAL, PIN_ATTR_DIGITAL, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_7 },

//RADIO
/* +------------+------------------+--------+-----------------+--------------------------------------------------------------------------------------------------------
 * | Pin number | Digital          |  PIN   | Label/Name      | Comments (* is for default peripheral in use)
 * +------------+------------------+--------+-----------------+--------------------------------------------------------------------------------------------------------
 * | 26         |                  |  PB16  | IRQ_AT86        | EXTINT[0] 
 * | 27         |                  |  PB17  | HGM      		  | EXTINT[1] 
 * | 28         |                  |  PA27  | RST_AT86        | EXTINT[15] 
 * | 29         |                  |  PA28  | SLP_AT86        | EXTINT[8] 
 * +------------+------------------+--------+-----------------+--------------------------------------------------------------------------------------------------------
 */
 
 { PORTB, 16, PIO_DIGITAL, PIN_ATTR_DIGITAL, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_0 },
 { PORTB, 17, PIO_DIGITAL, PIN_ATTR_DIGITAL, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_1 },
 { PORTA, 27, PIO_DIGITAL, PIN_ATTR_DIGITAL, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_15 },
 { PORTA, 28, PIO_DIGITAL, PIN_ATTR_DIGITAL, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_8 },

 // MODEM
 
 /* +------------+------------------+--------+-----------------+--------------------------------------------------------------------------------------------------------
 * | Pin number | Digital          |  PIN   | Label/Name      | Comments (* is for default peripheral in use)
 * +------------+------------------+--------+-----------------+--------------------------------------------------------------------------------------------------------
 * | 30         |                  |  PA18  | CPU_PWR_G510    | EXTINT[2] 
 * | 31         |                  |  PA19  | CPU_RST_G510    | EXTINT[3] 
 * | 32         |                  |  PB02  | CPU_WK_G510     | EXTINT[2] 
 * | 33         |                  |  PB03  | UART1_DCD_G510  | EXTINT[3] 
 * | 34         |                  |  PB04  | UART1_RST_G510  | EXTINT[4] 
 * | 35         |                  |  PB08  | CPU_LPG_G510    | EXTINT[8] 
 * | 36         |                  |  PB10  | EN_G510VSIM     | EXTINT[10] 
 * +------------+------------------+--------+-----------------+--------------------------------------------------------------------------------------------------------
 */
 
 { PORTA, 18, PIO_DIGITAL, PIN_ATTR_DIGITAL, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_2 },
 { PORTA, 19, PIO_DIGITAL, PIN_ATTR_DIGITAL, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_3 },
 { PORTB, 2, PIO_DIGITAL, PIN_ATTR_DIGITAL, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_2 },
 { PORTB, 3, PIO_DIGITAL, PIN_ATTR_DIGITAL, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_3 },
 { PORTB, 4, PIO_DIGITAL, PIN_ATTR_DIGITAL, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_4 },
 { PORTB, 8, PIO_DIGITAL, PIN_ATTR_DIGITAL, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_8 },
 { PORTB, 10, PIO_DIGITAL, PIN_ATTR_DIGITAL, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_10 },

 
//RTC

/* +------------+------------------+--------+-----------------+--------------------------------------------------------------------------------------------------------
 * | Pin number | Digital          |  PIN   | Label/Name      | Comments (* is for default peripheral in use)
 * +------------+------------------+--------+-----------------+--------------------------------------------------------------------------------------------------------
 * | 37         |                  |  PB00  | IRQ_RTC         | EXTINT[0] 
 * +------------+------------------+--------+-----------------+--------------------------------------------------------------------------------------------------------
 */	
{ PORTB, 0, PIO_DIGITAL, PIN_ATTR_DIGITAL, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_0 },
 
//ANALOG 
 
 //EXTERNAL
 /* +------------+------------------+--------+-----------------+--------------------------------------------------------------------------------------------------------
 * | Pin number | Digital          |  PIN   | Label/Name      | Comments (* is for default peripheral in use)
 * +------------+------------------+--------+-----------------+--------------------------------------------------------------------------------------------------------
 * | 38         |                  |  PA08  | J1-PIN7         | NO_EXTINT 	 *ADC/AIN[16]    
 * | 39         |                  |  PA09  | J1-PIN8         | EXTINT[9] 	 *ADC/AIN[17]    
 * | 40         |                  |  PA10  | J1-PIN9         | EXTINT[10] 	 *ADC/AIN[18]    
 * | 41         |                  |  PA11  | J1-PIN10        | EXTINT[11] 	 *ADC/AIN[19]    
 * | 42         |                  |  PB01  | J1-PIN6         | EXTINT[1] 	 *ADC/AIN[9]    
 * | 43         |                  |  PB09  | J1-PIN5         | EXTINT[9] 	 *ADC/AIN[3]    
 * | 44         |                  |  PA02  | VBAT            | EXTINT[2] 	 *ADC/AIN[0]    
 * | 45         |                  |  PA03  | EXT_VREF2.5     | EXTINT[3]  	 *ADC/AIN[1]    
 * +------------+------------------+--------+-----------------+--------------------------------------------------------------------------------------------------------
 */	
 
  { PORTA, 8, PIO_ANALOG, PIN_ATTR_ANALOG, ADC_Channel16, NOT_ON_PWM, NOT_ON_TIMER,EXTERNAL_INT_NONE },  
  { PORTA, 9, PIO_ANALOG, PIN_ATTR_ANALOG, ADC_Channel17, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_9 }, 
  { PORTA, 10, PIO_ANALOG, PIN_ATTR_ANALOG, ADC_Channel18, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_10 },  
  { PORTA, 11, PIO_ANALOG, PIN_ATTR_ANALOG, ADC_Channel19, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_11 },  
  { PORTB, 1, PIO_ANALOG, PIN_ATTR_ANALOG, ADC_Channel9, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_1 },  
  { PORTB, 9, PIO_ANALOG, PIN_ATTR_ANALOG, ADC_Channel3, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_9 },  
  { PORTA, 2, PIO_ANALOG, PIN_ATTR_ANALOG, ADC_Channel0, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_2 },  
  { PORTA, 3, PIO_ANALOG, PIN_ATTR_ANALOG, ADC_Channel1, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_3 }, 
  
 /* +------------+------------------+--------+-----------------+--------------------------------------------------------------------------------------------------------
 * | Pin number | USB              |  PIN   | Label/Name      | Comments (* is for default peripheral in use)
 * +------------+------------------+--------+-----------------+--------------------------------------------------------------------------------------------------------
 * | 46         |                  |  PA25  | USB_POSITIVE    | *USB/DP
 * | 47         |                  |  PA24  | USB_NEGATIVE    | *USB/DM
 * +------------+------------------+--------+-----------------+--------------------------------------------------------------------------------------------------------
 */
  { PORTA, 25, PIO_COM, PIN_ATTR_NONE, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_NONE }, // USB/DP
  { PORTA, 24, PIO_COM, PIN_ATTR_NONE, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_NONE }, // USB/DM
 
 };

const void* g_apTCInstances[TCC_INST_NUM+TC_INST_NUM]={ TCC0, TCC1, TCC2, TC3, TC4, TC5, TC6, TC7 } ;

// Multi-serial objects instantiation
SERCOM sercom0( SERCOM0 ) ;
SERCOM sercom1( SERCOM1 ) ;
SERCOM sercom2( SERCOM2 ) ;
SERCOM sercom3( SERCOM3 ) ;
SERCOM sercom4( SERCOM4 ) ;
SERCOM sercom5( SERCOM5 ) ;

Uart Serial( &sercom1, PIN_SERIAL_RX, PIN_SERIAL_TX, PAD_SERIAL_RX, PAD_SERIAL_TX ) ;

void SERCOM1_Handler(void)
{
  Serial.IrqHandler();
}

/*
Uart Serial1( &sercom0, PIN_SERIAL1_RX, PIN_SERIAL1_TX, PAD_SERIAL1_RX, PAD_SERIAL1_TX ) ;

void SERCOM0_Handler(void)
{
  Serial1.IrqHandler();
}
*/
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




































