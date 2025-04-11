#ifndef TELEGRAM_BOT_H
#define TELEGRAM_BOT_H

#include <UniversalTelegramBot.h>
#include <WiFiClientSecure.h>

#define CHAT_ID TELEGRAM_USER_CHAT_ID

extern WiFiClientSecure client;
extern UniversalTelegramBot bot;
extern int botRequestDelay;
extern unsigned long lastTimeBotRan;

void TelegramBot_Setup();
void handleNewMessages(int numNewMessages);

#endif // TELEGRAM_BOT_H