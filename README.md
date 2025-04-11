# ESP32 Telegram Bot Project

This project is designed to read temperature and humidity data from a **DHT11 sensor** connected to an ESP32. The data is sent via a **Telegram bot** to a specified chat. The bot listens for commands and responds with real-time readings.

## Features

- **Wi-Fi Connection**: The ESP32 connects to a Wi-Fi network.
- **DHT11 Sensor**: Reads temperature and humidity data from the DHT11 sensor.
- **Telegram Bot**: Communicates with the user via Telegram, responding with temperature and humidity data on request.
- **Modular Code**: The code is organized into separate components for better maintainability.

## Components Used

- **ESP32**: Main microcontroller running the project.
- **DHT11 Sensor**: Used for temperature and humidity readings.
- **Telegram Bot**: Responds to `/start` and `/readings` commands.
- **Wi-Fi**: The ESP32 connects to Wi-Fi to communicate with the Telegram API.

## Adding the credidentials of WiFi network
In "platformio.ini", you'll have to add your WiFi credidentials:
```ini
[env:esp32doit-devkit-v1]
platform = espressif32
board = esp32doit-devkit-v1
framework = arduino
monitor_speed = 115200
lib_deps = ;; 
;; -------------
;; -------------

; Define Wi-Fi credentials as build flags
build_flags = 
  -D WIFI_SSID="\"yourSSID\"" 
  -D WIFI_PASSWORD="\"yourPassword\""