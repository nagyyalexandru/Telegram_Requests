#include <Arduino.h>
#include "BoardConfig.h"
#include "TemperatureSensor.h"
#include "WiFiConfig.h"
#include "TelegramBot.h"

void setup()
{
  BoardConfig_Setup();
  WiFiConfig_Setup();
  TemperatureSensor_Setup();
  TelegramBot_Setup();
}

void loop()
{
  if (millis() - lastTimeBotRan > botRequestDelay)
  {
    int numNewMessages = bot.getUpdates(bot.last_message_received + 1);
    while (numNewMessages)
    {
      handleNewMessages(numNewMessages);
      numNewMessages = bot.getUpdates(bot.last_message_received + 1);
    }
    lastTimeBotRan = millis();
  }
}