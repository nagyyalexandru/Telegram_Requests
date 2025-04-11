#ifndef BoardConfig_h
#define BoardConfig_h

/**
 * Placeholder for GPIOs mapping
 */
#define CONFIG_TEMPERATURE_DHT_PIN 5
#define CONFIG_TEMPERATURE_DHT_TYPE DHT11

/**
 * Flag to toggle Logging into console (serial-monitor)
 */
#define DEBUG_FLAG_ESP32_TELEGRAM_REQUEST

/**
 * Internal Setup function for general configuration of board
 */
void BoardConfig_Setup();

#endif