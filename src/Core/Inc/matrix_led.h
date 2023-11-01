/*
 * matrix_led.h
 *
 *  Created on: Nov 1, 2023
 *      Author: ADMIN
 */

#ifndef INC_MATRIX_LED_H_
#define INC_MATRIX_LED_H_

#include "main.h"
extern const int MAX_LED_MATRIX;
extern int index_led_matrix;
extern uint8_t matrix_buffer[8];
extern uint8_t character[][8];
extern uint16_t ROW[8];
extern uint16_t ENM[8];

void updateLEDMatrix(int index);
void displayMatrixLed(uint8_t* array);
void topBottom(uint8_t* hex);


#endif /* INC_MATRIX_LED_H_ */
