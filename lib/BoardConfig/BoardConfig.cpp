#include "Arduino.h"
#include "BoardConfig.h"

void BoardConfig_Setup()
{
    /* Initialize serial communication at 115200 baud for debugging and data logging */
    Serial.begin(115200);
}