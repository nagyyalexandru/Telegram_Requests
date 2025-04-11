#include "Arduino.h"
#include "TemperatureSensor.h"

/* Stores the last time the temperature was read */
unsigned long previousMillis = 0;

/* Interval at which to read the temperature (in milliseconds) */
const long interval = 1000;

void TemperatureSensor_Setup()
{
    Temperature_DHT_Sensor.begin();
}

void TemperatureSensor_Loop()
{
#ifdef DEBUG_TEMPERATURE_MODULE
    /* Get the current time */
    unsigned long currentMillis = millis();

    /* Check if the time interval has passed */
    if (currentMillis - previousMillis >= interval)
    {
        /* Save the last time you read the temperature */
        previousMillis = currentMillis;

        /* Read the temperature and print it */
        Serial.print("[Temperature Module] TempC: ");
        Serial.println(Temperature_DHT_Sensor.readTemperature());
    }

/* Add other non-blocking code here if necessary */
#endif
}

float TemperatureSensor_GetCelsiusVal()
{
    return Temperature_DHT_Sensor.readTemperature();
}