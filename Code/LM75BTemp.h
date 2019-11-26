/* 
 * File:   
 * Author: 
 * Comments: This file is intended to read the LM758 I2C Temperature Sensor
 * Revision history: 
 */

// This is a guard condition so that contents of this file are not included
// more than once.  
#ifndef LM75BTEMP_HEADDER_H
#define	LM75BTEMP_HEADDER_H

#include <xc.h> // include processor files - each processor file is guarded.  
#include "i2c1.h"


#define ADDRESS0 0x90 //Bottom
#define ADDRESS2 0x94 //Middle
#define ADDRESS3 0x9A //Top

#define LM758_CONF 0x01 //POR 0x00
/*
 * 7:5 reserved 000
 * 4:3 OS fault queue programming
 * 00 -> 1
 * 01 -> 2
 * 10 -> 4
 * 11 -> 6
 * 
 * 2: OS_POL polarity selection
 * 0 -> active low
 * 1 -> active High
 * 
 * 1: OS_COMP_INT OS operation mode
 * 0 -> OS comparator
 * 1 -> OS interrupt
 * 
 * 0: SHUTDOWN device operation mode selection
 * 0 -> normal
 * 1 -> shutdown
 */
#define LM758_Temp 0x00 //read only POR -
/*
 * stores an 11 bit two's complement
 * MSB
 * 7: sign
 * 0 -> positive
 * 1 -> negative
 * 7:0 most significant byte
 * LSB
 * 7:5 least significant byte
 * 4:0 read but ignore in calculation
 * 
 * T in C = temp * 0.125(/8)
 * T in C = - ~temp * 0.125(/8)
 */
#define LM758_Tos  0x03 //Over tepm shutdown POR 0x5000
#define LM758_Thyst 0x02 //Hysteresis register POR 0x4B00

#endif	/* XC_HEADER_TEMPLATE_H */

/* 
 * Convert raw to integer for Celsius or Farenheit
 */
signed int LM758BintoInt(signed int Raw, bool CorF = 1);

