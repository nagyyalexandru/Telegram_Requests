#include <DHT.h>
#include "Arduino.h"
#include "BoardConfig.h"

#ifndef TemperatureSensor_h
#define TemperatureSensor_h

static DHT Temperature_DHT_Sensor(CONFIG_TEMPERATURE_DHT_PIN, CONFIG_TEMPERATURE_DHT_TYPE);

void TemperatureSensor_Setup();
void TemperatureSensor_Loop();

#endif