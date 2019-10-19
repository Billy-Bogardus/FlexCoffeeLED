/**
  @Generated Pin Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the Pin Manager file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  @Description
    This header file provides APIs for driver for .
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.77
        Device            :  PIC16F18426
        Driver Version    :  2.11
    The generated drivers are tested against the following:
        Compiler          :  XC8 2.05 and above
        MPLAB 	          :  MPLAB X 5.20	
*/

/*
    (c) 2018 Microchip Technology Inc. and its subsidiaries. 
    
    Subject to your compliance with these terms, you may use Microchip software and any 
    derivatives exclusively with Microchip products. It is your responsibility to comply with third party 
    license terms applicable to your use of third party software (including open source software) that 
    may accompany Microchip software.
    
    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER 
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY 
    IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS 
    FOR A PARTICULAR PURPOSE.
    
    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND 
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP 
    HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO 
    THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL 
    CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT 
    OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS 
    SOFTWARE.
*/

#ifndef PIN_MANAGER_H
#define PIN_MANAGER_H

/**
  Section: Included Files
*/

#include <xc.h>

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set IO_RA2 aliases
#define IO_RA2_TRIS                 TRISAbits.TRISA2
#define IO_RA2_LAT                  LATAbits.LATA2
#define IO_RA2_PORT                 PORTAbits.RA2
#define IO_RA2_WPU                  WPUAbits.WPUA2
#define IO_RA2_OD                   ODCONAbits.ODCA2
#define IO_RA2_ANS                  ANSELAbits.ANSA2
#define IO_RA2_SetHigh()            do { LATAbits.LATA2 = 1; } while(0)
#define IO_RA2_SetLow()             do { LATAbits.LATA2 = 0; } while(0)
#define IO_RA2_Toggle()             do { LATAbits.LATA2 = ~LATAbits.LATA2; } while(0)
#define IO_RA2_GetValue()           PORTAbits.RA2
#define IO_RA2_SetDigitalInput()    do { TRISAbits.TRISA2 = 1; } while(0)
#define IO_RA2_SetDigitalOutput()   do { TRISAbits.TRISA2 = 0; } while(0)
#define IO_RA2_SetPullup()          do { WPUAbits.WPUA2 = 1; } while(0)
#define IO_RA2_ResetPullup()        do { WPUAbits.WPUA2 = 0; } while(0)
#define IO_RA2_SetPushPull()        do { ODCONAbits.ODCA2 = 0; } while(0)
#define IO_RA2_SetOpenDrain()       do { ODCONAbits.ODCA2 = 1; } while(0)
#define IO_RA2_SetAnalogMode()      do { ANSELAbits.ANSA2 = 1; } while(0)
#define IO_RA2_SetDigitalMode()     do { ANSELAbits.ANSA2 = 0; } while(0)

// get/set SCL1 aliases
#define SCL1_TRIS                 TRISCbits.TRISC0
#define SCL1_LAT                  LATCbits.LATC0
#define SCL1_PORT                 PORTCbits.RC0
#define SCL1_WPU                  WPUCbits.WPUC0
#define SCL1_OD                   ODCONCbits.ODCC0
#define SCL1_ANS                  ANSELCbits.ANSC0
#define SCL1_SetHigh()            do { LATCbits.LATC0 = 1; } while(0)
#define SCL1_SetLow()             do { LATCbits.LATC0 = 0; } while(0)
#define SCL1_Toggle()             do { LATCbits.LATC0 = ~LATCbits.LATC0; } while(0)
#define SCL1_GetValue()           PORTCbits.RC0
#define SCL1_SetDigitalInput()    do { TRISCbits.TRISC0 = 1; } while(0)
#define SCL1_SetDigitalOutput()   do { TRISCbits.TRISC0 = 0; } while(0)
#define SCL1_SetPullup()          do { WPUCbits.WPUC0 = 1; } while(0)
#define SCL1_ResetPullup()        do { WPUCbits.WPUC0 = 0; } while(0)
#define SCL1_SetPushPull()        do { ODCONCbits.ODCC0 = 0; } while(0)
#define SCL1_SetOpenDrain()       do { ODCONCbits.ODCC0 = 1; } while(0)
#define SCL1_SetAnalogMode()      do { ANSELCbits.ANSC0 = 1; } while(0)
#define SCL1_SetDigitalMode()     do { ANSELCbits.ANSC0 = 0; } while(0)

// get/set SDA1 aliases
#define SDA1_TRIS                 TRISCbits.TRISC1
#define SDA1_LAT                  LATCbits.LATC1
#define SDA1_PORT                 PORTCbits.RC1
#define SDA1_WPU                  WPUCbits.WPUC1
#define SDA1_OD                   ODCONCbits.ODCC1
#define SDA1_ANS                  ANSELCbits.ANSC1
#define SDA1_SetHigh()            do { LATCbits.LATC1 = 1; } while(0)
#define SDA1_SetLow()             do { LATCbits.LATC1 = 0; } while(0)
#define SDA1_Toggle()             do { LATCbits.LATC1 = ~LATCbits.LATC1; } while(0)
#define SDA1_GetValue()           PORTCbits.RC1
#define SDA1_SetDigitalInput()    do { TRISCbits.TRISC1 = 1; } while(0)
#define SDA1_SetDigitalOutput()   do { TRISCbits.TRISC1 = 0; } while(0)
#define SDA1_SetPullup()          do { WPUCbits.WPUC1 = 1; } while(0)
#define SDA1_ResetPullup()        do { WPUCbits.WPUC1 = 0; } while(0)
#define SDA1_SetPushPull()        do { ODCONCbits.ODCC1 = 0; } while(0)
#define SDA1_SetOpenDrain()       do { ODCONCbits.ODCC1 = 1; } while(0)
#define SDA1_SetAnalogMode()      do { ANSELCbits.ANSC1 = 1; } while(0)
#define SDA1_SetDigitalMode()     do { ANSELCbits.ANSC1 = 0; } while(0)

/**
   @Param
    none
   @Returns
    none
   @Description
    GPIO and peripheral I/O initialization
   @Example
    PIN_MANAGER_Initialize();
 */
void PIN_MANAGER_Initialize (void);

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handling routine
 * @Example
    PIN_MANAGER_IOC();
 */
void PIN_MANAGER_IOC(void);



#endif // PIN_MANAGER_H
/**
 End of File
*/