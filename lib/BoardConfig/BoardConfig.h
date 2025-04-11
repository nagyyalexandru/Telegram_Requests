#ifndef BOARDCONFIG_h
#define BOARDCONFIG_h

/**
 * Placeholder for GPIOs mapping
 */
#define CONFIG_TEMPERATURE_DHT_PIN 5
#define CONFIG_TEMPERATURE_DHT_TYPE DHT11

/* Flags to toggle Logging into console (serial-monitor)*/
// #define DEBUG_TEMPERATURE_MODULE
#define WIFI_MODULE

/**
 * Internal Setup function for general configuration of board
 */
void BoardConfig_Setup();

#endif // BOARDCONFIG_h