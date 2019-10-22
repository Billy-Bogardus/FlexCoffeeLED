/*
 * File:   BitBangWS2812b.c
 * Author: Bill
 *
 * Created on October 21, 2019, 3:56 PM
 */

#include "BitBangWS2812b.h"

void WS_Word(int A,int B,int C)
{
   //order received is red green and blue
   //Below is the order we need to send the bytes. However, it needs to be sent most significant bit first
   ///Green B   Red A     Blue C
   ///0      7  8     15 16     23      
   ///01234567  01234567  01234567
    
    int Bx = 0;
    for(int i=23; i!=-1; i--)
    {
        if(i>15)//send Blue bit
        {
            int x = i - 16;
            Bx = 1 & ( B >> x );
        }
        else if ( i > 7 )//send Red bit
        {
            int x = i - 8;
            Bx = 0b00000001 & ( A >> x );
        }
        else if ( i >= 0 )//send Blue bit
        {
            int x = i;
            Bx = 0b00000001 & ( C >> x );
        }
        else //the code has broken, send a one
        {
            Bx = 1;
        }
        WS_Write(Bx);//write a bit
    }        
}


void WS_Write( int A )
{
    if(A)//send a 1
    {
        LATAbits.LATA2 = 1;//must stay high >0.35us
        NOP();
        NOP();
        NOP();
        LATAbits.LATA2 = 0;
    }
    else //send a 0
    {
        LATAbits.LATA2 = 1;//must stay high <0.35us
        LATAbits.LATA2 = 0;
        //NOP();//These NOP statements are not really needed for the WS2812 to work.
        //NOP();
        //NOP();
    }
    
}


//WSLoop function for bitbanging WS2812B controlls
void WSLoop(void)
{
    GIE = 0;
    
    WS_Word(0x09, 0x00, 0x00); //Red
    WS_Word(0x00, 0x09, 0x00); //Green
    WS_Word(0x00, 0x00, 0x09); //Blue
    WS_Word(0x09, 0x09, 0x00); //Yellow
    WS_Word(0x09, 0x00, 0x09); //Magenta
    WS_Word(0x00, 0x09, 0x09); //Cyan
    
    __delay_ms(WSReset);
    __delay_ms(250);
    
    WS_Word(0x00, 0x09, 0x09); //Cyan
    WS_Word(0x09, 0x00, 0x00); //Red
    WS_Word(0x00, 0x09, 0x00); //Green
    WS_Word(0x00, 0x00, 0x09); //Blue
    WS_Word(0x09, 0x09, 0x00); //Yellow
    WS_Word(0x09, 0x00, 0x09); //Magenta
    
    __delay_ms(WSReset);
    __delay_ms(250);
    
    WS_Word(0x09, 0x00, 0x09); //Magenta
    WS_Word(0x00, 0x09, 0x09); //Cyan
    WS_Word(0x09, 0x00, 0x00); //Red
    WS_Word(0x00, 0x09, 0x00); //Green
    WS_Word(0x00, 0x00, 0x09); //Blue
    WS_Word(0x09, 0x09, 0x00); //Yellow
    
    __delay_ms(WSReset);
    __delay_ms(250);
    
    WS_Word(0x09, 0x09, 0x00); //Yellow
    WS_Word(0x09, 0x00, 0x09); //Magenta
    WS_Word(0x00, 0x09, 0x09); //Cyan
    WS_Word(0x09, 0x00, 0x00); //Red
    WS_Word(0x00, 0x09, 0x00); //Green
    WS_Word(0x00, 0x00, 0x09); //Blue
    
    __delay_ms(WSReset);
    __delay_ms(250);
    
    WS_Word(0x00, 0x00, 0x09); //Blue
    WS_Word(0x09, 0x09, 0x00); //Yellow
    WS_Word(0x09, 0x00, 0x09); //Magenta
    WS_Word(0x00, 0x09, 0x09); //Cyan
    WS_Word(0x09, 0x00, 0x00); //Red
    WS_Word(0x00, 0x09, 0x00); //Green
    
    __delay_ms(WSReset);
    __delay_ms(250);
    
    WS_Word(0x00, 0x09, 0x00); //Green
    WS_Word(0x00, 0x00, 0x09); //Blue
    WS_Word(0x09, 0x09, 0x00); //Yellow
    WS_Word(0x09, 0x00, 0x09); //Magenta
    WS_Word(0x00, 0x09, 0x09); //Cyan
    WS_Word(0x09, 0x00, 0x00); //Red
    
    __delay_ms(WSReset);
    __delay_ms(250);
    
    
    GIE =1;
    
}

void WS_White(void)
{
    GIE = 0;
    
    WS_Word(0xff, 0xff, 0xff); //white
    WS_Word(0xff, 0xff, 0xff); //white
    WS_Word(0xff, 0xff, 0xff); //white
    
    WS_Word(0xff, 0xff, 0xff); //white
    WS_Word(0xff, 0xff, 0xff); //white
    WS_Word(0xff, 0xff, 0xff); //white
    
    __delay_ms(WSReset);
}