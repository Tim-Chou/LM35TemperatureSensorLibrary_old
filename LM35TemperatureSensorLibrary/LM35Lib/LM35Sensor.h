/* ====================================
  *  LM35 Sensor Library.
  *  Author: Tim Chou(Yen-Ting Chou).
  *  Date: July 10th, 2018.
 =================================== */
#ifndef LM35Sensor_h
#define LM35Sensor_h

class LM35Sensor
{
	public:
	   LM35Sensor(int pin);
	     float getTemperatureC();
	     float getTemperatureF();
	     float getTemperatureK();
	private:
       int _pin;
};
#endif