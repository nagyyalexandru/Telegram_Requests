#include "TelegramBot.h"
#include "ArduinoJson.h"
#include "TemperatureSensor.h"

WiFiClientSecure client;
UniversalTelegramBot bot(TELEGRAM_BOT_TOKEN, client);
int botRequestDelay = 1000;
unsigned long lastTimeBotRan;

void TelegramBot_Setup() {
    // You can add any initialization for the Telegram bot here
    client.setCACert(TELEGRAM_CERTIFICATE_ROOT);
}

void handleNewMessages(int numNewMessages) {
    for (int i = 0; i < numNewMessages; i++) {
        String chat_id = String(bot.messages[i].chat_id);
        if (chat_id != String(CHAT_ID)) {
            bot.sendMessage(chat_id, "Unauthorized user", "");
            continue;
        }
        
        String text = bot.messages[i].text;
        String from_name = bot.messages[i].from_name;

        if (text == "/start") {
            String welcome = "Welcome, " + from_name + ".\n";
            welcome += "Use the following command to get current readings.\n\n";
            welcome += "/readings \n";
            bot.sendMessage(chat_id, welcome, "");
        }

        if (text == "/readings") {
            String readings = String(TemperatureSensor_GetCelsiusVal(), 2);
            bot.sendMessage(chat_id, readings, "");
        }
    }
}