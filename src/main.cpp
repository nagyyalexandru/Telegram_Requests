#include <Arduino.h>
#include "BoardConfig.h"
#include "TemperatureSensor.h"

void setup()
{
  BoardConfig_Setup();
  TemperatureSensor_Setup();
}

void loop()
{
  TemperatureSensor_Loop();
}