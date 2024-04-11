/**
 * @file LightSensor.hpp
 * @brief LightSensor for ESP32 - DFRobot Light Sensor PT550
 * @author mufaro
 */
class LightSensor
{
public:
  LightSensor(int pin);

  /**
   * @brief Get the lux value
   */
  float GetLux();
  int pin;
};