#include <Arduino.h>
#include <LightSensor.h>

LightSensor lightSensor(36);

void setup()
{
  Serial.begin(115200);
}

void loop()
{
  float lux = lightSensor.GetLux();
  Serial.println(lux);
  delay(500);
}
