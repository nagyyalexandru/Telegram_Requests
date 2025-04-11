#include <Arduino.h>
#include "BoardConfig.h"
#include "TemperatureSensor.h"
#include "WiFiConfig.h"

void setup()
{
  BoardConfig_Setup();
  WiFiConfig_Setup();
  TemperatureSensor_Setup();
}

void loop()
{
  TemperatureSensor_Loop();
}