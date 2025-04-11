#include <Arduino.h>
#include "BoardConfig.h"
#include "TemperatureSensor.h"
#define DEBUG_FLAG_ESP32_TELEGRAM_REQUEST

void setup()
{
  BoardConfig_Setup();
  TemperatureSensor_Setup();
}

void loop()
{
  TemperatureSensor_Loop();
}