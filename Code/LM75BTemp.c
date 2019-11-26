/*
 * File:   LM75BTemp.c
 * Author: Bill
 *
 * Created on October 21, 2019, 5:00 PM
 */
#include "LM75BTemp.h"


signed int LM758BintoInt(signed int Raw, bool CorF = 1)
{
    signed int s = Raw & 0b1000000000000000;
    signed int temp = Raw & 0x7F;
    temp = temp >> 5;
    temp = temp | s;
    return temp/8;
    
}

