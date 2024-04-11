#include <RevEng_PAJ7620.h>

/**
 * @brief GestureSensor for ESP32 - PAJ7620U2
 * @author mufaro
 */
class GestureSensor
{
public:
  void Init();
  Gesture ReadGesture();
  String ShortGestureCode(Gesture gesture, bool skipUnknown);

private:
  RevEng_PAJ7620 gestureSensor;
};
