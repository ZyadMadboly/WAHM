/*
 * CPU_CONFIG.h
 *
 * Created: 2/7/2021 4:47:59 AM
 *  Author: khaled
 */ 


#ifndef CPU_CONFIG_H_
#define CPU_CONFIG_H_

#undef F_CPU
#define F_CPU 16000000

#include <avr/io.h>
#include <util/delay.h>
#include <avr/interrupt.h> //Predefined library - define interrupts vectors

#include "BIT_MATH.h"
#include "STD_TYPE.h"


#endif /* CPU_CONFIG_H_ */