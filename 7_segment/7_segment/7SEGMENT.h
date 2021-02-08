/*
 * _7SEGMENT.h
 *
 * Created: 2/7/2021 4:54:09 AM
 *  Author: khaled
 */ 


#ifndef _7SEGMENT_H_
#define _7SEGMENT_H_

#include "7SEGMENT_CONFIG.h"

void _7SEG_init(void);
void _7SEG_RESET (void);
void _7SEG_ON (Uint8t num , Uint8t position);
void _7SEG_CLR (void); 
void _7SEG_DISPLAY(Uint8t left , Uint8t right , Uint16t time_);

#endif /* 7SEGMENT_H_ */