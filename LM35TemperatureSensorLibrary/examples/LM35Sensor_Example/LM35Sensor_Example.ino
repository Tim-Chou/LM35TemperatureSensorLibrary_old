/* ====================================
  *  LM35 Sensor Library.
  *  Author: Tim Chou(Yen-Ting Chou).
  *  Date: July 10th, 2018.
  *  Note: 
  *  1. The LM35Sensor constructor is used to create the operating object of the LM35 temperature and humidity sensor. The constructor must pass an integer parameter, and this parameter is the number of the Arduino analog input pin.
  *  2. getTemperatureC() is a method of reading the Celsius temperature value of the LM35 temperature sensor.
  *  3. getTemperatureF() is a method for reading the Fahrenheit temperature value of the LM35 temperature sensor.
  *  4. getTemperatureK() is a method of reading the Kelvin temperature value of the LM35 temperature sensor.
 =================================== */
#include <LM35Sensor.h>


LM35Sensor lm35(A0);

void setup() {
  Serial.begin(9600);
}

void loop() {
 
 Serial.println("TempC: "+String(lm35.getTemperatureC())+"  "+"TempF: "+String(lm35.getTemperatureF())+"  "+"TempK: "+String(lm35.getTemperatureK()));
 delay(1000);
}
