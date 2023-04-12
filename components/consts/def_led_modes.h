#pragma once
#include "project_config.h"

// -----------------------------------------------------------------------------------------------------------------------
// ---------------------------------------------------- EN - System led --------------------------------------------------
// ------------------------------------------------ RU - Светодиод состояния ---------------------------------------------
// -----------------------------------------------------------------------------------------------------------------------
#define CONFIG_LED_QUEUE_SIZE 8
#define CONFIG_LED_QUEUE_WAIT pdMS_TO_TICKS(250)
#define CONFIG_LED_TASK_STACK_SIZE 1024
#define CONFIG_PCF_LED_TASK_STACK_SIZE 2048

/*********** rled32 : system blink modes *************/
// EN: Single burst flash mode to indicate device activity (for example, when sending data)
// RU: Режим вспышек одиночной серией для обозначения активности устройства (например при отправке данных)
#define CONFIG_LEDSYS_FLASH_QUANTITY 3
#define CONFIG_LEDSYS_FLASH_DURATION 50
#define CONFIG_LEDSYS_FLASH_INTERVAL 75
// EN: Flash mode in normal mode (all systems are working normally)
// RU: Режим вспышек в нормальном режиме (все системы работают нормально)
#define CONFIG_LEDSYS_NORMAL_QUANTITY 1
#define CONFIG_LEDSYS_NORMAL_DURATION 75
#define CONFIG_LEDSYS_NORMAL_INTERVAL 5000
// EN: General error blinking mode
// RU: Режим мигания при общей ошибке
#define CONFIG_LEDSYS_ERROR_QUANTITY 1
#define CONFIG_LEDSYS_ERROR_DURATION 1000
#define CONFIG_LEDSYS_ERROR_INTERVAL 1000
// EN: Flashing mode when receiving OTA update
// RU: Режим мигания при получении OTA обновления
#define CONFIG_LEDSYS_OTA_QUANTITY 3
#define CONFIG_LEDSYS_OTA_DURATION 75
#define CONFIG_LEDSYS_OTA_INTERVAL 250
// EN: Blinking mode while connecting to WiFi
// RU: Режим мигания в процессе подключения к WiFi
#define CONFIG_LEDSYS_WIFI_INIT_QUANTITY 1
#define CONFIG_LEDSYS_WIFI_INIT_DURATION 100
#define CONFIG_LEDSYS_WIFI_INIT_INTERVAL 100
// EN: Blinking mode when SNTP sync fails
// RU: Режим мигания при ошибке синхронизации времени с SNTP
#define CONFIG_LEDSYS_TIME_ERROR_QUANTITY 2
#define CONFIG_LEDSYS_TIME_ERROR_DURATION 100
#define CONFIG_LEDSYS_TIME_ERROR_INTERVAL 500
// EN: Blinking mode when there is WiFi, but there is no Internet (ping does not pass)
// RU: Режим мигания, когда WiFi есть, а интернета нет (пинг не проходит)
#define CONFIG_LEDSYS_PING_FAILED_QUANTITY 3
#define CONFIG_LEDSYS_PING_FAILED_DURATION 100
#define CONFIG_LEDSYS_PING_FAILED_INTERVAL 500
// EN: Flashing mode for sensor errors
// RU: Режим мигания при ошибках сенсоров
#define CONFIG_LEDSYS_SENSOR_ERROR_QUANTITY 2
#define CONFIG_LEDSYS_SENSOR_ERROR_DURATION 250
#define CONFIG_LEDSYS_SENSOR_ERROR_INTERVAL 3000
// EN: Blinking mode when there is no connection to the MQTT broker
// RU: Режим мигания, когда нет подключения к MQTT брокеру
#define CONFIG_LEDSYS_MQTT_ERROR_QUANTITY 3
#define CONFIG_LEDSYS_MQTT_ERROR_DURATION 250
#define CONFIG_LEDSYS_MQTT_ERROR_INTERVAL 3000
// EN: Blinking mode for OpenMonitoring or ThingSpeak errors
// RU: Режим мигания при ошибках OpenMonitoring или ThingSpeak
#define CONFIG_LEDSYS_PUB_ERROR_QUANTITY 4
#define CONFIG_LEDSYS_PUB_ERROR_DURATION 250
#define CONFIG_LEDSYS_PUB_ERROR_INTERVAL 3000
// EN: Blinking mode when it was not possible to deliver a message to Telegram
// RU: Режим мигания, когда не удалось доставить сообщение в Telegram
#define CONFIG_LEDSYS_TG_ERROR_QUANTITY 5
#define CONFIG_LEDSYS_TG_ERROR_DURATION 250
#define CONFIG_LEDSYS_TG_ERROR_INTERVAL 3000
// EN: Blinking mode when it was not possible to deliver a message over SMTP
// RU: Режим мигания, когда не удалось доставить сообщение через SMTP
#define CONFIG_LEDSYS_SMTP_ERROR_QUANTITY 5
#define CONFIG_LEDSYS_SMTP_ERROR_DURATION 250
#define CONFIG_LEDSYS_SMTP_ERROR_INTERVAL 3000
