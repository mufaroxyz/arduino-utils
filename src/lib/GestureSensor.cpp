#include "GestureSensor.h"
#include "RevEng_PAJ7620.h"
#include "log.h"

void GestureSensor::Init()
{
  this->gestureSensor = RevEng_PAJ7620();

  while (!this->gestureSensor.begin())
  {
    Log::Error("Gesture sensor not found, trying again...");
    delay(500);
  }

  Log::Info("Gesture Sensor : OK - Ready to read gestures");
}

Gesture GestureSensor::ReadGesture()
{
  return this->gestureSensor.readGesture();
}

String GestureSensor::ShortGestureCode(Gesture gesture, bool skipUnknown = false)
{
  switch (gesture)
  {
  case GES_FORWARD:
    return "FORWARD";
  case GES_BACKWARD:
    return "BACKWARD";
  case GES_LEFT:
    return "LEFT";
  case GES_RIGHT:
    return "RIGHT";
  case GES_UP:
    return "UP";
  case GES_DOWN:
    return "DOWN";
  case GES_CLOCKWISE:
    return "CLOCKWISE";
  case GES_ANTICLOCKWISE:
    return "ANTICLOCKWISE";
  default:
    return "UNKNOWN";
  }
}
