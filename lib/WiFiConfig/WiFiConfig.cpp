#include "BoardConfig.h"
#include "WiFiConfig.h"

const char *WiFiConfig_SSID = WIFI_SSID;
const char *WiFiConfig_Password = WIFI_PASSWORD;

void WiFiConfig_Setup()
{
    WiFi.mode(WIFI_STA);
    WiFi.begin(WiFiConfig_SSID, WiFiConfig_Password);
    while (WiFi.status() != WL_CONNECTED)
    {
        delay(1000);
#ifdef DEBUG_WIFI_MODULE
        Serial.println("Connecting to WiFi...");
#endif
    }

#ifdef DEBUG_WIFI_MODULE
    Serial.println("[Wi-Fi Module] Connected to WiFi network " + String(WiFiConfig_SSID));
    Serial.println("[Wi-Fi Module] Device Local IP: " + WiFi.localIP().toString());
    Serial.println("------------------------");
#endif
}