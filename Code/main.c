/**
  Generated Main Source File

  Company:
    Microchip Technology Inc.

  File Name:
    main.c

  Summary:
    This is the main file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  Description:
    This header file provides implementations for driver APIs for all modules selected in the GUI.
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.77
        Device            :  PIC16F18426
        Driver Version    :  2.00
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

#include "mcc_generated_files/mcc.h"
//#include <pic16f1826.h>
#include <xc.h>
#include <htc.h> 
#include <stdint.h>
#define _XTAL_FREQ 32000000

#define WSReset 60.000 //Time in milli Seconds
#define WSPulse0H 0.400
#define WSPulse0L 0.850
#define WSPulse1H 0.800
#define WSPulse1L 0.450
#define WSTotal 1.250
#define WSERROR 0.150

// declare variables
void WS_Word(char A, char B, char C);
void WS_Write( int A );
void WSLoop(void);

void WS_Word(char A, char B, char C)
{
   ///Green B   Red A    Blue C
   ///0      7  8     15 16     23      
   ///01234567  01234567  01234567
    
    int Bx = 0;
    for(int i=23; i!=-1; i--)
    {
        if(i>15)
        {
            int x = i - 16;
            Bx = 1 & ( C >> x );
        }
        else if ( i > 7 )
        {
            int x = i - 8;
            Bx = 0b00000001 & ( A >> x );
        }
        else if ( i >= 0 )
        {
            int x = i;
            Bx = 0b00000001 & ( B >> x );
        }
        else
        {
            Bx = 1;
        }
        WS_Write(Bx);
    }        
}

void WS_Write( int A )
{
    if(A)
    {
        LATAbits.LATA2 = 1;
        NOP();
        NOP();
        NOP();
        ///__delay_ms(WSPulse1H);
        LATAbits.LATA2 = 0;
        ///__delay_ms(WSPulse1L);
    }
    else
    {
        LATAbits.LATA2 = 1;
        ///__delay_ms(WSPulse0H);
        LATAbits.LATA2 = 0;
        NOP();
        NOP();
        NOP();
        ///__delay_ms(WSPulse0L);
    }
    
}


//WSLoop function for bitbanging WS2812B controlls
void WSLoop(void)
{
///    __delay_ns();
    
    
    
    WS_Word(0x05, 0x00, 0x00); //Red
    WS_Word(0x00, 0x05, 0x00); //Green
    WS_Word(0x00, 0x00, 0x05); //Blue
    WS_Word(0x05, 0x05, 0x05); //Red
    WS_Word(0x05, 0x00, 0x05); //Green
    WS_Word(0x00, 0x05, 0x05); //Blue
    
    
    //delay
    __delay_ms(WSReset);
    
    //delay
    //__delay_ms(WSReset);
}

/*
                         Main application
 */
void main(void)
{
    // initialize the device
    SYSTEM_Initialize();

    // When using interrupts, you need to set the Global and Peripheral Interrupt Enable bits
    // Use the following macros to:

    // Enable the Global Interrupts
    //INTERRUPT_GlobalInterruptEnable();

    // Enable the Peripheral Interrupts
    //INTERRUPT_PeripheralInterruptEnable();

    // Disable the Global Interrupts
    //INTERRUPT_GlobalInterruptDisable();

    // Disable the Peripheral Interrupts
    //INTERRUPT_PeripheralInterruptDisable();

    while (1)
    {
        GIE = 0;
        //LATAbits.LATA2 = 0;
        WSLoop();//try my code
        // Add your application code
        
        GIE =1;
    }
}
/**
 End of File
*/