#include <DHT.h>
#include "Arduino.h"
#include "BoardConfig.h"

#ifndef TemperatureSensor_h
#define TemperatureSensor_h

#define TEMPERATURE_DHT_PIN 5
#define TEMPERATURE_DHT_TYPE DHT11

static DHT Temperature_DHT_Sensor(TEMPERATURE_DHT_PIN, TEMPERATURE_DHT_TYPE);

void TemperatureSensor_Setup();
void TemperatureSensor_Loop();

#endif