EESchema Schematic File Version 4
EELAYER 29 0
EELAYER END
$Descr A 11000 8500
encoding utf-8
Sheet 1 1
Title "Flexible Coffee Cup Buddy"
Date "2019-04-01"
Rev "0.0.0"
Comp "Billy Bogardus"
Comment1 ""
Comment2 ""
Comment3 ""
Comment4 ""
$EndDescr
$Comp
L Worldsemi:WS2812B LED1
U 1 1 5CA305D3
P 2450 2400
F 0 "LED1" H 2450 2625 50  0000 C CNN
F 1 "WS2812B" H 2450 2534 50  0000 C CNN
F 2 "LEDs:LED_WS2812B-PLCC4" H 2450 2100 50  0001 C CNN
F 3 "http://www.world-semi.com/uploads/soft/150522/1-150522091P5.pdf" H 2450 2350 50  0001 C CNN
	1    2450 2400
	1    0    0    -1  
$EndComp
$Comp
L Worldsemi:WS2812B LED2
U 1 1 5CA30A27
P 3600 2350
F 0 "LED2" H 3600 2575 50  0000 C CNN
F 1 "WS2812B" H 3600 2484 50  0000 C CNN
F 2 "LEDs:LED_WS2812B-PLCC4" H 3600 2050 50  0001 C CNN
F 3 "http://www.world-semi.com/uploads/soft/150522/1-150522091P5.pdf" H 3600 2300 50  0001 C CNN
	1    3600 2350
	1    0    0    -1  
$EndComp
$Comp
L Worldsemi:WS2812B LED3
U 1 1 5CA30CEE
P 4550 2350
F 0 "LED3" H 4550 2575 50  0000 C CNN
F 1 "WS2812B" H 4550 2484 50  0000 C CNN
F 2 "LEDs:LED_WS2812B-PLCC4" H 4550 2050 50  0001 C CNN
F 3 "http://www.world-semi.com/uploads/soft/150522/1-150522091P5.pdf" H 4550 2300 50  0001 C CNN
	1    4550 2350
	1    0    0    -1  
$EndComp
$Comp
L SamacSys_Parts:MCP9904T-AE_9Q IC?
U 1 1 5CA31B08
P 2000 1350
F 0 "IC?" H 2900 1615 50  0000 C CNN
F 1 "MCP9904T-AE_9Q" H 2900 1524 50  0000 C CNN
F 2 "SON50P300X300X90-11N-D" H 3650 1450 50  0001 L CNN
F 3 "https://mouser.componentsearchengine.com/Datasheets/1/MCP9904T-AE_9Q.pdf" H 3650 1350 50  0001 L CNN
F 4 "Board Mount Temperature Sensors Quad Temp Sensor Addressable Alerts" H 3650 1250 50  0001 L CNN "Description"
F 5 "0.9" H 3650 1150 50  0001 L CNN "Height"
F 6 "" H 3650 1050 50  0001 L CNN "Mouser Part Number"
F 7 "" H 3650 950 50  0001 L CNN "Mouser Price/Stock"
F 8 "Microchip" H 3650 850 50  0001 L CNN "Manufacturer_Name"
F 9 "MCP9904T-AE/9Q" H 3650 750 50  0001 L CNN "Manufacturer_Part_Number"
	1    2000 1350
	1    0    0    -1  
$EndComp
$Comp
L SamacSys_Parts:PIC18F25K80-I_SO IC?
U 1 1 5CA342D5
P 1700 2900
F 0 "IC?" H 3800 3165 50  0000 C CNN
F 1 "PIC18F25K80-I_SO" H 3800 3074 50  0000 C CNN
F 2 "SOIC127P1030X265-28N" H 5750 3000 50  0001 L CNN
F 3 "https://componentsearchengine.com/Datasheets/1/PIC18F25K80-I_SO.pdf" H 5750 2900 50  0001 L CNN
F 4 "MCU, 32kB Flash,ECAN,12-bit ADC, CTMU" H 5750 2800 50  0001 L CNN "Description"
F 5 "2.65" H 5750 2700 50  0001 L CNN "Height"
F 6 "579-PIC18F25K80-I/SO" H 5750 2600 50  0001 L CNN "Mouser Part Number"
F 7 "https://www.mouser.com/Search/Refine.aspx?Keyword=579-PIC18F25K80-I%2FSO" H 5750 2500 50  0001 L CNN "Mouser Price/Stock"
F 8 "Microchip" H 5750 2400 50  0001 L CNN "Manufacturer_Name"
F 9 "PIC18F25K80-I/SO" H 5750 2300 50  0001 L CNN "Manufacturer_Part_Number"
	1    1700 2900
	1    0    0    -1  
$EndComp
$Comp
L Transistor_BJT:2N3904 Q?
U 1 1 5CA36038
P 4650 1350
F 0 "Q?" H 4840 1396 50  0000 L CNN
F 1 "2N3904" H 4840 1305 50  0000 L CNN
F 2 "Package_TO_SOT_THT:TO-92_Inline" H 4850 1275 50  0001 L CIN
F 3 "https://www.fairchildsemi.com/datasheets/2N/2N3904.pdf" H 4650 1350 50  0001 L CNN
	1    4650 1350
	1    0    0    -1  
$EndComp
$Comp
L Transistor_BJT:2N3904 Q?
U 1 1 5CA36887
P 5350 1300
F 0 "Q?" H 5540 1346 50  0000 L CNN
F 1 "2N3904" H 5540 1255 50  0000 L CNN
F 2 "Package_TO_SOT_THT:TO-92_Inline" H 5550 1225 50  0001 L CIN
F 3 "https://www.fairchildsemi.com/datasheets/2N/2N3904.pdf" H 5350 1300 50  0001 L CNN
	1    5350 1300
	1    0    0    -1  
$EndComp
$Comp
L Transistor_BJT:2N3904 Q?
U 1 1 5CA36C01
P 6100 1300
F 0 "Q?" H 6290 1346 50  0000 L CNN
F 1 "2N3904" H 6290 1255 50  0000 L CNN
F 2 "Package_TO_SOT_THT:TO-92_Inline" H 6300 1225 50  0001 L CIN
F 3 "https://www.fairchildsemi.com/datasheets/2N/2N3904.pdf" H 6100 1300 50  0001 L CNN
	1    6100 1300
	1    0    0    -1  
$EndComp
$EndSCHEMATC
