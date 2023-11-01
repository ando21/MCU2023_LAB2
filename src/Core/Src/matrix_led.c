/*
 * matrix_led.c
 *
 *  Created on: Nov 1, 2023
 *      Author: ADMIN
 */


#include "main.h"
#include "matrix_led.h"

const int MAX_LED_MATRIX= 8;
int index_led_matrix= 0;
uint8_t matrix_buffer[8] = {0x18,0x3C,0x66,0x66,0x7E,0x66,0x66,0x66};
uint8_t hexCharacter[][8]= {
						{0x3C,0x66,0x66,0x6E,0x76,0x66,0x66,0x3C},//0
						{0x18,0x38,0x58,0x18,0x18,0x18,0x18,0x7E},//1
						{0x3C,0x66,0x66,0x0C,0x18,0x30,0x7E,0x7E},//2
						{0x7E,0x0C,0x18,0x3C,0x06,0x06,0x46,0x3C},//3
						{0x0C,0x18,0x30,0x6C,0x6C,0x7E,0x0C,0x0C},//4
						{0x7E,0x60,0x60,0x7C,0x06,0x06,0x46,0x3C},//5
						{0x04,0x08,0x10,0x38,0x6C,0x66,0x66,0x3C},//6
						{0x7E,0x46,0x0C,0x18,0x18,0x18,0x18,0x18},//7
						{0x3C,0x66,0x66,0x3C,0x66,0x66,0x66,0x3C},//8
						{0x3C,0x66,0x66,0x36,0x1C,0x08,0x10,0x20}};//9
uint8_t led_buffer[8]= {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
uint16_t ROW[8]= {ROW0_Pin, ROW1_Pin, ROW2_Pin, ROW3_Pin, ROW4_Pin, ROW5_Pin, ROW6_Pin, ROW7_Pin};
uint16_t ENM[8]= {ENM0_Pin, ENM1_Pin, ENM2_Pin, ENM3_Pin, ENM4_Pin, ENM5_Pin, ENM6_Pin, ENM7_Pin};
uint8_t temp0;
uint8_t temp1;

void updateLEDMatrix(int index)
{
	switch (index)
	{
		case 0:
			displayMatrixLed(hexCharacter[index]);
			break;
		case 1:
			displayMatrixLed(hexCharacter[index]);
			break;
		case 2:
			displayMatrixLed(hexCharacter[index]);
			break;
		case 3:
			displayMatrixLed(hexCharacter[index]);
			break;
		case 4:
			displayMatrixLed(hexCharacter[index]);
			break;
		case 5:
			displayMatrixLed(hexCharacter[index]);
			break;
		case 6:
			displayMatrixLed(hexCharacter[index]);
			break;
		case 7:
			displayMatrixLed(hexCharacter[index]);
			break;
		default:
			displayMatrixLed(hexCharacter[index]);
			break;
	}
}

void displayMatrixLed(uint8_t* array)
{
	for (int time= 0; time < 10; time++)
	{
		for (int row= 0; row < 8; row++)
		 {
			 HAL_GPIO_WritePin(GPIOB, ROW[row], RESET);
			 temp1= *(array+ row);
			 for (int col= 0; col < 8; col++)
			 {
				temp0= temp1;
				temp0= temp0& 0x80;
				if (temp0== 0x80)
				{
					HAL_GPIO_WritePin(GPIOA, ENM[col], RESET);
				}
				temp1= temp1 << 1;

			 }
			 HAL_Delay(4);
			 HAL_GPIO_WritePin(GPIOA, ENM0_Pin|ENM1_Pin|ENM2_Pin|ENM3_Pin|ENM4_Pin|ENM5_Pin|ENM6_Pin|
							 ENM7_Pin, SET);
			 HAL_GPIO_WritePin(GPIOB, ROW[row], SET);
		 }
	}
}
