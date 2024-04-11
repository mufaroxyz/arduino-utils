#include "RevEng_PAJ7620.h"
#include "GestureSensor.h"
#include "log.h"

GestureSensor sensor = GestureSensor();

void setup()
{
  Serial.begin(115200);

  sensor.Init();
}

void loop()
{
  Gesture gesture = sensor.ReadGesture();
  String code = sensor.ShortGestureCode(gesture, true);

  if (code == "UNKNOWN")
  {
    return;
  }

  Log::Info("Detected Gesture - " + code);
  delay(100);
}