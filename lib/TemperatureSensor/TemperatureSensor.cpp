#include "Arduino.h"
#include "TemperatureSensor.h"

void TemperatureSensor_Setup()
{
    Temperature_DHT_Sensor.begin();
}

void TemperatureSensor_Loop()
{
#ifdef DEBUG_FLAG_ESP32_TELEGRAM_REQUEST
    Serial.println(Temperature_DHT_Sensor.readTemperature());
#endif
}