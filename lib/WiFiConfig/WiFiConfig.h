#ifndef WIFI_CONFIG_H
#define WIFI_CONFIG_H

const char *WiFiConfig_SSID = WIFI_SSID;
const char *WiFiConfig_Password = WIFI_PASSWORD;

#include <WiFi.h>

/**
 * WiFi Module Function responsible to realize the connection to local access-point
 */
void WiFiConfig_Setup();

#endif  // WIFI_CONFIG_H