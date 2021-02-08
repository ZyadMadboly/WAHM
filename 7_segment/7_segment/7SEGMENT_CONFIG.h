/*
 * _7SEGMENT_CONFIG.h
 *
 * Created: 2/7/2021 4:53:55 AM
 *  Author: khaled
 */ 

#ifndef _7SEGMENT_CONFIG_H_
#define _7SEGMENT_CONFIG_H_

#include "CPU_CONFIG.h"

#define A_PIN 4
#define B_PIN 5
#define C_PIN 6
#define D_PIN 7
#define EN_1_PIN 2
#define EN_2_PIN 1
#define DIP_PIN 3

#define _7SEG_A_DATA_DDR DDRA
#define _7SEG_A_DATA_PORT PORTA

#define _7SEG_B_DATA_DDR DDRA
#define _7SEG_B_DATA_PORT PORTA

#define _7SEG_C_DATA_DDR DDRA
#define _7SEG_C_DATA_PORT PORTA

#define _7SEG_D_DATA_DDR DDRA
#define _7SEG_D_DATA_PORT PORTA

#define _7SEG_EN1_DDR DDRB
#define _7SEG_EN1_PORT PORTB

#define _7SEG_EN2_DDR DDRB
#define _7SEG_EN2_PORT PORTB

#define _7SEG_DIP_DDR DDRB
#define _7SEG_DIP_PORT PORTB

#endif /* 7SEGMENT_CONFIG_H_ */