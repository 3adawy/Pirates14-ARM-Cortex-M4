
#ifndef SERVE_H_
#define SERVE_H_

#include "MemMap.h"
#include "MotorInit.h"
#include "Motion.h"

extern unsigned long State ;


void Serve();
void GPIOD_Handler(void);

#endif