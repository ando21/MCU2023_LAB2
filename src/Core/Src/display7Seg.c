/*
 * display7Seg.c
 *
 *  Created on: Oct 5, 2023
 *      Author: AN_NGUYEN_DO 2112726
 */


/* SEG6_Pin: g
 * SEG5_Pin: f
 * SEG4_Pin: e
 * SEG3_Pin: d
 * SEG2_Pin: c
 * SEG1_Pin: b
 * SEG0_Pin: a
 * */
#include "main.h"

void initLed() {
	HAL_GPIO_WritePin(GPIOB, SEG6_Pin, SET);
	HAL_GPIO_WritePin(GPIOB, SEG5_Pin, SET);
	HAL_GPIO_WritePin(GPIOB, SEG4_Pin, SET);
	HAL_GPIO_WritePin(GPIOB, SEG3_Pin, SET);
	HAL_GPIO_WritePin(GPIOB, SEG2_Pin, SET);
	HAL_GPIO_WritePin(GPIOB, SEG1_Pin, SET);
	HAL_GPIO_WritePin(GPIOB, SEG0_Pin, SET);
}

void display7Seg(int number) {
	switch(number) {
	case 0:
		HAL_GPIO_WritePin(GPIOB, SEG6_Pin, SET);
		HAL_GPIO_WritePin(GPIOB, SEG5_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB, SEG4_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB, SEG3_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB, SEG2_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB, SEG1_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB, SEG0_Pin, RESET);
		break;
	case 1:
		HAL_GPIO_WritePin(GPIOB, SEG6_Pin, SET);
		HAL_GPIO_WritePin(GPIOB, SEG5_Pin, SET);
		HAL_GPIO_WritePin(GPIOB, SEG4_Pin, SET);
		HAL_GPIO_WritePin(GPIOB, SEG3_Pin, SET);
		HAL_GPIO_WritePin(GPIOB, SEG2_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB, SEG1_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB, SEG0_Pin, SET);
		break;
	case 2:
		HAL_GPIO_WritePin(GPIOB, SEG6_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB, SEG5_Pin, SET);
		HAL_GPIO_WritePin(GPIOB, SEG4_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB, SEG3_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB, SEG2_Pin, SET);
		HAL_GPIO_WritePin(GPIOB, SEG1_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB, SEG0_Pin, RESET);
		break;
	case 3:
		HAL_GPIO_WritePin(GPIOB, SEG6_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB, SEG5_Pin, SET);
		HAL_GPIO_WritePin(GPIOB, SEG4_Pin, SET);
		HAL_GPIO_WritePin(GPIOB, SEG3_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB, SEG2_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB, SEG1_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB, SEG0_Pin, RESET);
		break;
	case 4:
		HAL_GPIO_WritePin(GPIOB, SEG6_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB, SEG5_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB, SEG4_Pin, SET);
		HAL_GPIO_WritePin(GPIOB, SEG3_Pin, SET);
		HAL_GPIO_WritePin(GPIOB, SEG2_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB, SEG1_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB, SEG0_Pin, SET);
		break;
	case 5:
		HAL_GPIO_WritePin(GPIOB, SEG6_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB, SEG5_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB, SEG4_Pin, SET);
		HAL_GPIO_WritePin(GPIOB, SEG3_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB, SEG2_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB, SEG1_Pin, SET);
		HAL_GPIO_WritePin(GPIOB, SEG0_Pin, RESET);
		break;
	case 6:
		HAL_GPIO_WritePin(GPIOB, SEG6_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB, SEG5_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB, SEG4_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB, SEG3_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB, SEG2_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB, SEG1_Pin, SET);
		HAL_GPIO_WritePin(GPIOB, SEG0_Pin, RESET);
		break;
	case 7:
		HAL_GPIO_WritePin(GPIOB, SEG6_Pin, SET);
		HAL_GPIO_WritePin(GPIOB, SEG5_Pin, SET);
		HAL_GPIO_WritePin(GPIOB, SEG4_Pin, SET);
		HAL_GPIO_WritePin(GPIOB, SEG3_Pin, SET);
		HAL_GPIO_WritePin(GPIOB, SEG2_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB, SEG1_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB, SEG0_Pin, RESET);
		break;
	case 8:
		HAL_GPIO_WritePin(GPIOB, SEG6_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB, SEG5_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB, SEG4_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB, SEG3_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB, SEG2_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB, SEG1_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB, SEG0_Pin, RESET);
		break;
	case 9:
		HAL_GPIO_WritePin(GPIOB, SEG6_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB, SEG5_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB, SEG4_Pin, SET);
		HAL_GPIO_WritePin(GPIOB, SEG3_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB, SEG2_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB, SEG1_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB, SEG0_Pin, RESET);
		break;
	default:
		break;
	}
}
