#include <DHT.h>
#include "Arduino.h"
#include "BoardConfig.h"

#ifndef TEMPERATURESENSOR_h
#define TEMPERATURESENSOR_h

/**
 * Object instance for DHT11 Sensor
 */
static DHT Temperature_DHT_Sensor(CONFIG_TEMPERATURE_DHT_PIN, CONFIG_TEMPERATURE_DHT_TYPE);

/**
 * Internal Setup function for DHT11 Temperature Sensor
 */
void TemperatureSensor_Setup();

/**
 * Internal Loop function for DHT11 Temperature Sensor
 */
void TemperatureSensor_Loop();

#endif // TEMPERATURESENSOR_h