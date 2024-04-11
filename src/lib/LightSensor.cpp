#include <Arduino.h>

#include "LightSensor.h"

LightSensor::LightSensor(int pin)
{
  this->pin = pin;
}

float LightSensor::GetLux()
{
  int sensorValue = analogRead(this->pin);
  float lux = sensorValue / 4.5 * (10 ^ 4);
  return lux;
}