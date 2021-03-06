EESchema Schematic File Version 2
LIBS:power
LIBS:device
LIBS:switches
LIBS:relays
LIBS:motors
LIBS:transistors
LIBS:conn
LIBS:linear
LIBS:regul
LIBS:74xx
LIBS:cmos4000
LIBS:adc-dac
LIBS:memory
LIBS:xilinx
LIBS:microcontrollers
LIBS:dsp
LIBS:microchip
LIBS:analog_switches
LIBS:motorola
LIBS:texas
LIBS:intel
LIBS:audio
LIBS:interface
LIBS:digital-audio
LIBS:philips
LIBS:display
LIBS:cypress
LIBS:siliconi
LIBS:opto
LIBS:atmel
LIBS:contrib
LIBS:valves
LIBS:KiCadCustomLibraries
LIBS:Heater12VControl-cache
EELAYER 25 0
EELAYER END
$Descr A4 11693 8268
encoding utf-8
Sheet 1 1
Title ""
Date ""
Rev ""
Comp ""
Comment1 ""
Comment2 ""
Comment3 ""
Comment4 ""
$EndDescr
$Comp
L Conn_01x02 HEAT1
U 1 1 59B297ED
P 5100 1650
F 0 "HEAT1" H 5100 1750 50  0000 C CNN
F 1 "Heater" H 5300 1600 50  0000 C CNN
F 2 "Pin_Headers:Pin_Header_Straight_1x02_Pitch2.54mm" H 5100 1650 50  0001 C CNN
F 3 "" H 5100 1650 50  0001 C CNN
	1    5100 1650
	1    0    0    -1  
$EndComp
$Comp
L GND #PWR1
U 1 1 59B298EE
P 3550 1950
F 0 "#PWR1" H 3550 1700 50  0001 C CNN
F 1 "GND" H 3550 1800 50  0000 C CNN
F 2 "" H 3550 1950 50  0001 C CNN
F 3 "" H 3550 1950 50  0001 C CNN
	1    3550 1950
	1    0    0    -1  
$EndComp
$Comp
L Q_NMOS_GSD Q2
U 1 1 59B2A260
P 4300 2650
F 0 "Q2" H 4500 2700 50  0000 L CNN
F 1 "SI2308" H 4500 2600 50  0000 L CNN
F 2 "TO_SOT_Packages_SMD:SOT-23" H 4500 2750 50  0001 C CNN
F 3 "" H 4300 2650 50  0001 C CNN
	1    4300 2650
	-1   0    0    -1  
$EndComp
$Comp
L Conn_01x02 TEMP1
U 1 1 59B2A3BB
P 5100 1050
F 0 "TEMP1" H 5100 1150 50  0000 C CNN
F 1 "Temp sensor" H 5400 1000 50  0000 C CNN
F 2 "Pin_Headers:Pin_Header_Straight_1x02_Pitch2.54mm" H 5100 1050 50  0001 C CNN
F 3 "" H 5100 1050 50  0001 C CNN
	1    5100 1050
	1    0    0    -1  
$EndComp
$Comp
L GND #PWR6
U 1 1 59B2A562
P 4900 1150
F 0 "#PWR6" H 4900 900 50  0001 C CNN
F 1 "GND" H 4900 1000 50  0000 C CNN
F 2 "" H 4900 1150 50  0001 C CNN
F 3 "" H 4900 1150 50  0001 C CNN
	1    4900 1150
	1    0    0    -1  
$EndComp
$Comp
L R R4
U 1 1 59B2A57F
P 4550 1050
F 0 "R4" V 4630 1050 50  0000 C CNN
F 1 "4.7K" V 4550 1050 50  0000 C CNN
F 2 "Resistors_SMD:R_0603" V 4480 1050 50  0001 C CNN
F 3 "" H 4550 1050 50  0001 C CNN
	1    4550 1050
	0    1    1    0   
$EndComp
$Comp
L VCC #PWR5
U 1 1 59B2A615
P 4400 900
F 0 "#PWR5" H 4400 750 50  0001 C CNN
F 1 "VCC" H 4400 1040 50  0000 C CNN
F 2 "" H 4400 900 50  0001 C CNN
F 3 "" H 4400 900 50  0001 C CNN
	1    4400 900 
	1    0    0    -1  
$EndComp
Wire Wire Line
	4400 900  4400 1050
Wire Wire Line
	4700 1050 4900 1050
Connection ~ 4750 1050
$Comp
L Q_PMOS_GDS Q1
U 1 1 5A1FDB48
P 4200 1750
F 0 "Q1" V 4100 1850 50  0000 L CNN
F 1 "AON6403" V 4450 1600 50  0000 L CNN
F 2 "KiCadCustomLibs:DFN-8-1EP_6x5mm" H 4400 1850 50  0001 C CNN
F 3 "" H 4200 1750 50  0001 C CNN
	1    4200 1750
	0    1    -1   0   
$EndComp
$Comp
L R R2
U 1 1 5A1FDF45
P 4200 2200
F 0 "R2" H 4300 2200 50  0000 C CNN
F 1 "1K" V 4200 2200 50  0000 C CNN
F 2 "Resistors_SMD:R_0603" V 4130 2200 50  0001 C CNN
F 3 "" H 4200 2200 50  0001 C CNN
	1    4200 2200
	1    0    0    -1  
$EndComp
$Comp
L R R1
U 1 1 5A1FE14B
P 3850 1800
F 0 "R1" H 3950 1800 50  0000 C CNN
F 1 "100K" V 3850 1800 50  0000 C CNN
F 2 "Resistors_SMD:R_0603" V 3780 1800 50  0001 C CNN
F 3 "" H 3850 1800 50  0001 C CNN
	1    3850 1800
	1    0    0    -1  
$EndComp
$Comp
L R R3
U 1 1 5A1FE630
P 4400 3000
F 0 "R3" V 4480 3000 50  0000 C CNN
F 1 "10K" V 4400 3000 50  0000 C CNN
F 2 "Resistors_SMD:R_0603" V 4330 3000 50  0001 C CNN
F 3 "" H 4400 3000 50  0001 C CNN
	1    4400 3000
	0    1    1    0   
$EndComp
$Comp
L R R5
U 1 1 5A1FE79F
P 4750 2650
F 0 "R5" V 4830 2650 50  0000 C CNN
F 1 "100" V 4750 2650 50  0000 C CNN
F 2 "Resistors_SMD:R_0603" V 4680 2650 50  0001 C CNN
F 3 "" H 4750 2650 50  0001 C CNN
	1    4750 2650
	0    1    1    0   
$EndComp
Wire Wire Line
	3550 1650 4000 1650
Connection ~ 3850 1650
Wire Wire Line
	4200 1950 4200 2050
Wire Wire Line
	4200 2000 3850 2000
Wire Wire Line
	3850 2000 3850 1950
Connection ~ 4200 2000
Wire Wire Line
	4200 2350 4200 2450
Wire Wire Line
	4500 2650 4600 2650
Wire Wire Line
	4550 2650 4550 3000
Connection ~ 4550 2650
Wire Wire Line
	4250 3000 4200 3000
Wire Wire Line
	4200 2850 4200 3100
$Comp
L GND #PWR3
U 1 1 5A1FEF82
P 4200 3100
F 0 "#PWR3" H 4200 2850 50  0001 C CNN
F 1 "GND" H 4200 2950 50  0000 C CNN
F 2 "" H 4200 3100 50  0001 C CNN
F 3 "" H 4200 3100 50  0001 C CNN
	1    4200 3100
	1    0    0    -1  
$EndComp
Connection ~ 4200 3000
Wire Wire Line
	4900 1650 4400 1650
$Comp
L GND #PWR7
U 1 1 5A1FF502
P 4900 1750
F 0 "#PWR7" H 4900 1500 50  0001 C CNN
F 1 "GND" H 4900 1600 50  0000 C CNN
F 2 "" H 4900 1750 50  0001 C CNN
F 3 "" H 4900 1750 50  0001 C CNN
	1    4900 1750
	1    0    0    -1  
$EndComp
$Comp
L Arduino_Nano_Header J4
U 1 1 5A1FFBDE
P 6250 3550
F 0 "J4" H 6250 4350 60  0000 C CNN
F 1 "Arduino_Nano_Header" H 6250 2750 60  0000 C CNN
F 2 "Modules:Arduino_Nano" H 6450 2650 60  0001 C CNN
F 3 "" H 6250 3550 60  0000 C CNN
	1    6250 3550
	1    0    0    -1  
$EndComp
$Comp
L VCC #PWR13
U 1 1 5A1FFE27
P 6900 3150
F 0 "#PWR13" H 6900 3000 50  0001 C CNN
F 1 "VCC" H 6900 3290 50  0000 C CNN
F 2 "" H 6900 3150 50  0001 C CNN
F 3 "" H 6900 3150 50  0001 C CNN
	1    6900 3150
	1    0    0    -1  
$EndComp
Wire Wire Line
	6600 3150 6900 3150
Wire Wire Line
	4750 1050 4750 700 
Text Label 4750 700  3    60   ~ 0
Temp
Wire Wire Line
	6600 3950 6900 3950
Text Label 6900 3950 2    60   ~ 0
Temp
Wire Wire Line
	4900 2650 5400 2650
$Comp
L GND #PWR10
U 1 1 5A20085B
P 5650 3050
F 0 "#PWR10" H 5650 2800 50  0001 C CNN
F 1 "GND" H 5650 2900 50  0000 C CNN
F 2 "" H 5650 3050 50  0001 C CNN
F 3 "" H 5650 3050 50  0001 C CNN
	1    5650 3050
	1    0    0    -1  
$EndComp
Wire Wire Line
	5900 3150 5800 3150
Wire Wire Line
	5800 3150 5800 3050
Wire Wire Line
	5800 3050 5650 3050
$Comp
L GND #PWR12
U 1 1 5A2009BC
P 6700 2950
F 0 "#PWR12" H 6700 2700 50  0001 C CNN
F 1 "GND" H 6700 2800 50  0000 C CNN
F 2 "" H 6700 2950 50  0001 C CNN
F 3 "" H 6700 2950 50  0001 C CNN
	1    6700 2950
	1    0    0    -1  
$EndComp
Wire Wire Line
	6600 2950 6700 2950
Text Label 5400 2650 2    60   ~ 0
Heat
$Comp
L Conn_01x04 LCD1
U 1 1 5A201342
P 7500 3550
F 0 "LCD1" H 7500 3750 50  0000 C CNN
F 1 "LCD" H 7500 3250 50  0000 C CNN
F 2 "Pin_Headers:Pin_Header_Straight_1x04_Pitch2.54mm" H 7500 3550 50  0001 C CNN
F 3 "" H 7500 3550 50  0001 C CNN
	1    7500 3550
	1    0    0    -1  
$EndComp
$Comp
L GND #PWR15
U 1 1 5A201514
P 7300 3750
F 0 "#PWR15" H 7300 3500 50  0001 C CNN
F 1 "GND" H 7300 3600 50  0000 C CNN
F 2 "" H 7300 3750 50  0001 C CNN
F 3 "" H 7300 3750 50  0001 C CNN
	1    7300 3750
	1    0    0    -1  
$EndComp
$Comp
L VCC #PWR14
U 1 1 5A201552
P 7100 3650
F 0 "#PWR14" H 7100 3500 50  0001 C CNN
F 1 "VCC" H 7100 3790 50  0000 C CNN
F 2 "" H 7100 3650 50  0001 C CNN
F 3 "" H 7100 3650 50  0001 C CNN
	1    7100 3650
	1    0    0    -1  
$EndComp
Wire Wire Line
	7100 3650 7300 3650
Wire Wire Line
	6600 3450 7200 3450
Wire Wire Line
	7200 3450 7200 3550
Wire Wire Line
	7200 3550 7300 3550
Wire Wire Line
	6600 3550 6950 3550
Wire Wire Line
	6950 3550 6950 3400
Wire Wire Line
	6950 3400 7300 3400
Wire Wire Line
	7300 3400 7300 3450
$Comp
L +12V #PWR2
U 1 1 5A201AE5
P 3600 1650
F 0 "#PWR2" H 3600 1500 50  0001 C CNN
F 1 "+12V" H 3600 1790 50  0000 C CNN
F 2 "" H 3600 1650 50  0001 C CNN
F 3 "" H 3600 1650 50  0001 C CNN
	1    3600 1650
	1    0    0    -1  
$EndComp
Connection ~ 3600 1650
$Comp
L +12V #PWR11
U 1 1 5A201B59
P 6600 2500
F 0 "#PWR11" H 6600 2350 50  0001 C CNN
F 1 "+12V" H 6600 2640 50  0000 C CNN
F 2 "" H 6600 2500 50  0001 C CNN
F 3 "" H 6600 2500 50  0001 C CNN
	1    6600 2500
	1    0    0    -1  
$EndComp
$Comp
L D D1
U 1 1 5A201D3A
P 6600 2650
F 0 "D1" H 6600 2750 50  0000 C CNN
F 1 "D" H 6600 2550 50  0000 C CNN
F 2 "Diodes_SMD:D_SOD-123F" H 6600 2650 50  0001 C CNN
F 3 "" H 6600 2650 50  0001 C CNN
	1    6600 2650
	0    -1   -1   0   
$EndComp
Wire Wire Line
	6600 2800 6600 2850
$Comp
L Rotary_Encoder_Switch SW1
U 1 1 5A203BA2
P 4750 3850
F 0 "SW1" H 4750 4110 50  0000 C CNN
F 1 "Rotary_Encoder" H 4750 4250 50  0000 C CNN
F 2 "KiCadCustomLibs:SF-ROTARY-ENCODER" H 4650 4010 50  0001 C CNN
F 3 "" H 4750 4110 50  0001 C CNN
	1    4750 3850
	-1   0    0    -1  
$EndComp
Wire Wire Line
	5050 3750 5400 3750
Wire Wire Line
	5400 3750 5400 3350
Wire Wire Line
	5400 3350 5900 3350
Wire Wire Line
	5050 3950 5500 3950
Wire Wire Line
	5500 3450 5500 4350
Wire Wire Line
	5500 3450 5900 3450
$Comp
L GND #PWR4
U 1 1 5A203FE0
P 4300 3750
F 0 "#PWR4" H 4300 3500 50  0001 C CNN
F 1 "GND" H 4300 3600 50  0000 C CNN
F 2 "" H 4300 3750 50  0001 C CNN
F 3 "" H 4300 3750 50  0001 C CNN
	1    4300 3750
	1    0    0    -1  
$EndComp
$Comp
L GND #PWR8
U 1 1 5A204015
P 5150 4050
F 0 "#PWR8" H 5150 3800 50  0001 C CNN
F 1 "GND" H 5150 3900 50  0000 C CNN
F 2 "" H 5150 4050 50  0001 C CNN
F 3 "" H 5150 4050 50  0001 C CNN
	1    5150 4050
	1    0    0    -1  
$EndComp
Wire Wire Line
	5050 3850 5150 3850
Wire Wire Line
	5150 3850 5150 4050
Wire Wire Line
	5900 3650 5600 3650
Text Label 5600 3650 0    60   ~ 0
Heat
Wire Wire Line
	4300 3750 4450 3750
Wire Wire Line
	4450 3950 4450 4250
Wire Wire Line
	4450 4250 5900 4250
$Comp
L C_Small C1
U 1 1 5A2120D3
P 5100 4450
F 0 "C1" H 5110 4520 50  0000 L CNN
F 1 "22n" H 5110 4370 50  0000 L CNN
F 2 "Capacitors_SMD:C_0603" H 5100 4450 50  0001 C CNN
F 3 "" H 5100 4450 50  0001 C CNN
	1    5100 4450
	1    0    0    -1  
$EndComp
$Comp
L C_Small C3
U 1 1 5A2121CD
P 5500 4450
F 0 "C3" H 5510 4520 50  0000 L CNN
F 1 "22n" H 5510 4370 50  0000 L CNN
F 2 "Capacitors_SMD:C_0603" H 5500 4450 50  0001 C CNN
F 3 "" H 5500 4450 50  0001 C CNN
	1    5500 4450
	1    0    0    -1  
$EndComp
$Comp
L C_Small C2
U 1 1 5A21222B
P 5300 4450
F 0 "C2" H 5310 4520 50  0000 L CNN
F 1 "22n" H 5310 4370 50  0000 L CNN
F 2 "Capacitors_SMD:C_0603" H 5300 4450 50  0001 C CNN
F 3 "" H 5300 4450 50  0001 C CNN
	1    5300 4450
	1    0    0    -1  
$EndComp
Wire Wire Line
	5100 4350 5100 4250
Connection ~ 5100 4250
Wire Wire Line
	5300 4350 5300 3750
Connection ~ 5300 3750
Connection ~ 5500 3950
Wire Wire Line
	5100 4550 5100 4600
Wire Wire Line
	5100 4600 5500 4600
Wire Wire Line
	5300 4600 5300 4550
Wire Wire Line
	5500 4600 5500 4550
Connection ~ 5300 4600
$Comp
L GND #PWR9
U 1 1 5A2126AB
P 5300 4600
F 0 "#PWR9" H 5300 4350 50  0001 C CNN
F 1 "GND" H 5300 4450 50  0000 C CNN
F 2 "" H 5300 4600 50  0001 C CNN
F 3 "" H 5300 4600 50  0001 C CNN
	1    5300 4600
	1    0    0    -1  
$EndComp
$Comp
L Conn_01x01 12V
U 1 1 5A2130CC
P 3350 1650
F 0 "12V" H 3350 1750 50  0000 C CNN
F 1 "PWR" H 3350 1550 50  0000 C CNN
F 2 "Pin_Headers:Pin_Header_Angled_1x01_Pitch2.54mm" H 3350 1650 50  0001 C CNN
F 3 "" H 3350 1650 50  0001 C CNN
	1    3350 1650
	-1   0    0    1   
$EndComp
$Comp
L Conn_01x01 GND
U 1 1 5A21339E
P 3350 1950
F 0 "GND" H 3350 2050 50  0000 C CNN
F 1 "PWR" H 3350 1850 50  0000 C CNN
F 2 "Pin_Headers:Pin_Header_Angled_1x01_Pitch2.54mm" H 3350 1950 50  0001 C CNN
F 3 "" H 3350 1950 50  0001 C CNN
	1    3350 1950
	-1   0    0    1   
$EndComp
$EndSCHEMATC
