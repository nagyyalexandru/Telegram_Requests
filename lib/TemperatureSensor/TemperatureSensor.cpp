#include "Arduino.h"
#include "TemperatureSensor.h"

void TemperatureSensor_Setup()
{
    Temperature_DHT_Sensor.begin();
}

void TemperatureSensor_Loop()
{
#ifdef DEBUG_TEMPERATURE_MODULE
    Serial.println(Temperature_DHT_Sensor.readTemperature());
#endif
}