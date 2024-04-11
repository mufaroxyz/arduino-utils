#include <Arduino.h>

class Log
{
public:
  static void Info(String message)
  {
    Serial.print("[INFO] ");
    Serial.print(getCurrentTime());
    Serial.print(" ");
    Serial.println(message);
  }

  static void Error(String message)
  {
    Serial.print("[ERROR] ");
    Serial.print(getCurrentTime());
    Serial.print(" ");
    Serial.println(message);
  }

  static void Debug(String message)
  {
    Serial.print("[DEBUG] ");
    Serial.print(getCurrentTime());
    Serial.print(" ");
    Serial.println(message);
  }

private:
  static String getCurrentTime()
  {
    String currentTime = "";
    return currentTime;
  }
};