/*
Blink.h-Library for blink two LEDs.
Created by Ravindu1212, December 15,2019.
*/

#ifndef Blink_h
#define Blink_h

#include "Arduino.h"

	class Blink
	{
	public:
		Blink(int pin1,int pin2);
		void BLINK1();
		void BLINK2();
		int delaytoBLINK1(int time1);
		int delaytoBLINK2(int time2);
	private:
		int _pin1,_pin2;
		int _time1,_time2;
	};

#endif