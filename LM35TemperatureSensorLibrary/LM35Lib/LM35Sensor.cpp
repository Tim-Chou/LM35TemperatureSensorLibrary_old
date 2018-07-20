/* ====================================
  *  LM35 Sensor Library.
  *  Author: Tim Chou(Yen-Ting Chou).
  *  Date: July 10th, 2018.
 =================================== */
#include "Arduino.h"
#include "LM35Sensor.h"

LM35Sensor::LM35Sensor(int pin)
{
	_pin = pin;
}

float LM35Sensor::getTemperatureC()
{
	float tempC = analogRead(_pin);
	tempC = (5.0 * tempC * 100.0)/1024.0;
	
	return tempC;
}

float LM35Sensor::getTemperatureF()
{
	float tempC = analogRead(_pin);
	tempC = (5.0 * tempC * 100.0)/1024.0;
	
	float tempF = (tempC * (9.0/5.0) + 32.0);
	
	return tempF;
}

float LM35Sensor::getTemperatureK()
{
	float tempC = analogRead(_pin);
	tempC = (5.0 * tempC * 100.0)/1024.0;
	
	float tempK = tempC +(-273.15);
	
	return tempK;
}

