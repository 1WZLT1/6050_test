#include "moto_control.h"
#include "stdio.h"


void Moto_forward_run()	//�������������ת
{
	HAL_GPIO_WritePin(AIN1_GPIO_Port,AIN1_Pin,GPIO_PIN_SET);
	HAL_GPIO_WritePin(AIN2_GPIO_Port,AIN2_Pin,GPIO_PIN_RESET);
	HAL_GPIO_WritePin(BIN1_GPIO_Port,BIN1_Pin,GPIO_PIN_RESET);
	HAL_GPIO_WritePin(BIN2_GPIO_Port,BIN2_Pin,GPIO_PIN_SET);
}

void Moto_back_run()
{
	HAL_GPIO_WritePin(AIN1_GPIO_Port,AIN1_Pin,GPIO_PIN_RESET);
	HAL_GPIO_WritePin(AIN2_GPIO_Port,AIN2_Pin,GPIO_PIN_SET);
	HAL_GPIO_WritePin(BIN1_GPIO_Port,BIN1_Pin,GPIO_PIN_SET);
	HAL_GPIO_WritePin(BIN2_GPIO_Port,BIN2_Pin,GPIO_PIN_RESET);
}

void Moto_stop()
{
	HAL_GPIO_WritePin(AIN1_GPIO_Port,AIN1_Pin,GPIO_PIN_RESET);
	HAL_GPIO_WritePin(AIN2_GPIO_Port,AIN2_Pin,GPIO_PIN_RESET);
	HAL_GPIO_WritePin(BIN1_GPIO_Port,BIN1_Pin,GPIO_PIN_RESET);
	HAL_GPIO_WritePin(BIN2_GPIO_Port,BIN2_Pin,GPIO_PIN_RESET);
}

void Moto_turn_left()
{
	HAL_GPIO_WritePin(AIN1_GPIO_Port,AIN1_Pin,GPIO_PIN_RESET);
	HAL_GPIO_WritePin(AIN2_GPIO_Port,AIN2_Pin,GPIO_PIN_SET);
	HAL_GPIO_WritePin(BIN1_GPIO_Port,BIN1_Pin,GPIO_PIN_RESET);
	HAL_GPIO_WritePin(BIN2_GPIO_Port,BIN2_Pin,GPIO_PIN_SET);
}


void Moto_turn_right()
{
	HAL_GPIO_WritePin(AIN1_GPIO_Port,AIN1_Pin,GPIO_PIN_SET);
	HAL_GPIO_WritePin(AIN2_GPIO_Port,AIN2_Pin,GPIO_PIN_RESET);
	HAL_GPIO_WritePin(BIN1_GPIO_Port,BIN1_Pin,GPIO_PIN_SET);
	HAL_GPIO_WritePin(BIN2_GPIO_Port,BIN2_Pin,GPIO_PIN_RESET);
}

