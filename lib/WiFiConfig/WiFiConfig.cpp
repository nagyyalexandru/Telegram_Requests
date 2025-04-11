#include "BoardConfig.h"
#include "WiFiConfig.h"

void WiFiConfig_Setup()
{
    WiFi.mode(WIFI_STA);
    WiFi.begin(WiFiConfig_SSID, WiFiConfig_Password);
    while (WiFi.status() != WL_CONNECTED)
    {
        delay(1000);
#ifdef WIFI_MODULE
        Serial.println("Connecting to WiFi...");
#endif
    }

#ifdef WIFI_MODULE
    Serial.println("Connected to WiFi network " + String(WiFiConfig_SSID));
    Serial.println("Device Local IP: " + WiFi.localIP());
    Serial.println("------------------------");
#endif
}