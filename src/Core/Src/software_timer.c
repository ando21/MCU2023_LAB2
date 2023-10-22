/*
 * software_timer.c
 *
 *  Created on: Oct 5, 2023
 *      Author: ADMIN
 */


#include "main.h"

int timer_flag = 0;
int timer_counter = 0;

//Timer for exercise 1 in LAB2

void setTimer1(int time) {
	timer_counter = time;
	timer_flag = 0;
}

void timer1Run() {
	//TODO
	if (timer_counter > 0) {
		timer_counter--;
		if (timer_counter <= 0) {
			timer_flag = 1;
		}
	}
}
