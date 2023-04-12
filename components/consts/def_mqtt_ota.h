#pragma once
#include "project_config.h"

// EN: Number of update attempts
// RU: Количество попыток обновления
#define CONFIG_OTA_ATTEMPTS 10
#define CONFIG_OTA_HTTPS_ATTEMPTS 5
// EN: Delay between update attempts
// RU: Задержка между попытками обновления
#define CONFIG_OTA_DELAY 5000
// EN: Update timeout in seconds
// RU: Таймаут обновления в секундах
#define CONFIG_OTA_WATCHDOG 600
// EN: Firmware check timeout after reboot (if the check is not completed within this time, the firmware will be rolled back)
// RU: Таймаут проверки прошивки после перезагрузки (если за это время проверка не будет выполнена, будет выполнен откат прошивки)
#define CONFIG_OTA_ROLLBACK_TIMEOUT 300
// EN: TLS certificate for the OTA update server
// RU: TLS-сертификат для сервера OTA обновлений
#define CONFIG_OTA_PEM_STORAGE CONFIG_DEFAULT_TLS_STORAGE
#define CONFIG_OTA_PEM_START CONFIG_DEFAULT_TLS_PEM_START
#define CONFIG_OTA_PEM_END CONFIG_DEFAULT_TLS_PEM_END
// EN: OTA task parameters
// RU: Параметры задачи OTA
#define CONFIG_OTA_TASK_STACK_SIZE 4*1024

// EN: Topic name for OTA updates
// RU: Название топика для OTA обновлений
#define CONFIG_MQTT_OTA_TOPIC "ota"
// EN: Friendly name for OTA updates
// RU: Понятное имя для OTA обновлений
#define CONFIG_MQTT_OTA_NAME "OTA"
// EN: QOS for OTA updates topic
// RU: QOS для топика OTA обновлений
#define CONFIG_MQTT_OTA_QOS 2
// EN: Save the last sent data on the broker
// RU: Сохранять на брокере последние отправленные данные
#define CONFIG_MQTT_OTA_RETAINED 0

