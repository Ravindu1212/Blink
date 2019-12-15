/*
Blink.cpp-Library for blink two LEDs.
Created by Ravindu1212, December 15,2019.
*/

#include "Blink.h"
#include "Arduino.h"

Blink::Blink(int pin1,int pin2){
	pinMode(pin1,OUTPUT);
	pinMode(pin2,OUTPUT);
	_pin1=pin1;
	_pin2=pin2;
}
void Blink::BLINK1(){
	digitalWrite(_pin1,HIGH);
	digitalWrite(_pin2,LOW);
	delay(_time1);
	digitalWrite(_pin1,LOW);
	digitalWrite(_pin2,HIGH);
	delay(_time1);
}

void Blink::BLINK2(){
	digitalWrite(_pin1,HIGH);
	digitalWrite(_pin2,LOW);
	delay(_time2);
	digitalWrite(_pin1,LOW);
	digitalWrite(_pin2,HIGH);
	delay(_time2);
}

int Blink::delaytoBLINK1(int time1){
	_time1=time1;
}

int Blink::delaytoBLINK2(int time2){
	_time2=time2;
}