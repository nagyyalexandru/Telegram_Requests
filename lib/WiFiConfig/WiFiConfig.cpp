#include "BoardConfig.h"
#include "WiFiConfig.h"

const char *ssid = WIFI_SSID;
const char *password = WIFI_PASSWORD;

void WiFiConfig_Setup()
{
    WiFi.mode(WIFI_STA);
    WiFi.begin(ssid, password);
    while (WiFi.status() != WL_CONNECTED)
    {
        delay(1000);
#ifdef WIFI_MODULE
        Serial.println("Connecting to WiFi...");
#endif
    }

#ifdef WIFI_MODULE
    Serial.println("Connected to WiFi network " + String(ssid));
    Serial.println(WiFi.localIP());
#endif
}