#ifndef __MOTO_CONTROL_H
#define __MOTO_CONTROL_H

#include "stdint.h"
#include "gpio.h"


typedef enum
{
	POSITION,
	SPEED,

}CONTROL_MODE;

typedef enum
{
	TURN_LEFT,
	TURN_RIGHT,
  FORWARD,
}TURN_DIRE;


extern float speed_destination[];

void Moto_forward_run(void);
void Moto_back_run(void);
void Moto_turn_left(void);
void Moto_turn_right(void);
void Moto_stop(void);

#endif

