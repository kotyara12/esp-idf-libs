#pragma once
#include "project_config.h"

// -----------------------------------------------------------------------------------------------------------------------
// --------------------------------------------- EN - Notifications ------------------------------------------------------
// ---------------------------------------------- RU - Уведомления -------------------------------------------------------
// -----------------------------------------------------------------------------------------------------------------------

// EN: Allow notifications in Telegram (all types)
// RU: Разрешить уведомления в Telegram (всех типов)
#define CONFIG_NOTIFY_TELEGRAM_GLOBAL 1

// EN: Parameters
// RU: Параметры
#define CONFIG_STATES_NOTIFY_PGROUP_ROOT_KEY "notifications"
#define CONFIG_STATES_NOTIFY_PGROUP_ROOT_TOPIC "notifications" 
#define CONFIG_STATES_NOTIFY_PGROUP_ROOT_FRIENDLY "Уведомления"

// EN: Minimum failure time to send notifications in seconds. If access was restored faster, notifications will not be sent
// RU: Минимальное время сбоя для отправки уведомлений в секундах. Если доступ был восстановлен быстрее, уведомления не будут отправлены
#define CONFIG_NOTIFY_TELEGRAM_MINIMUM_FAILURE_TIME_KEY "delay"
#define CONFIG_NOTIFY_TELEGRAM_MINIMUM_FAILURE_TIME_FRIENDLY "Время тихого восстановления (секунды)"
#define CONFIG_NOTIFY_TELEGRAM_MINIMUM_FAILURE_TIME 600

// EN: Send notifications to Telegram when disconnecting and connecting to WiFi
// RU: Отправлять уведомления в Telegram при отключении и подключении к WiFi
#define CONFIG_NOTIFY_TELEGRAM_WIFI_KEY "wifi"
#define CONFIG_NOTIFY_TELEGRAM_WIFI_FRIENDLY "WiFi"
#define CONFIG_NOTIFY_TELEGRAM_WIFI_STATUS 1
#define CONFIG_NOTIFY_TELEGRAM_WIFI_PRIORITY MP_HIGH
#define CONFIG_NOTIFY_TELEGRAM_WIFI_THRESOLD 0
#define CONFIG_NOTIFY_TELEGRAM_ALERT_WIFI_STATUS 0

// EN: Send an alert to telegram when there are problems with the Internet
// RU: Отправить оповещение в telegram при проблемах с интернетом
#define CONFIG_NOTIFY_TELEGRAM_INET_KEY "internet"
#define CONFIG_NOTIFY_TELEGRAM_INET_FRIENDLY "Internet (ping)"
#define CONFIG_NOTIFY_TELEGRAM_INET_UNAVAILABLE 1
#define CONFIG_NOTIFY_TELEGRAM_HOST_PRIORITY MP_ORDINARY
#define CONFIG_NOTIFY_TELEGRAM_INET_PRIORITY MP_INCREASED
#define CONFIG_NOTIFY_TELEGRAM_INET_THRESOLD 0
#define CONFIG_NOTIFY_TELEGRAM_ALERT_INET_UNAVAILABLE 0

// EN: Send notifications to Telegram when disconnecting and connecting to an MQTT broker
// RU: Отправлять уведомления в Telegram при отключении и подключении к MQTT брокеру
#define CONFIG_NOTIFY_TELEGRAM_MQTT_KEY "mqtt"
#define CONFIG_NOTIFY_TELEGRAM_MQTT_FRIENDLY "MQTT"
#define CONFIG_NOTIFY_TELEGRAM_MQTT_STATUS 1
#define CONFIG_NOTIFY_TELEGRAM_MQTT_PRIORITY MP_HIGH
#define CONFIG_NOTIFY_TELEGRAM_MQTT_THRESOLD 0
#define CONFIG_NOTIFY_TELEGRAM_MQTT_PING_THRESOLD 0
#define CONFIG_NOTIFY_TELEGRAM_ALERT_MQTT_STATUS 0
// EN: Send notifications to Telegram on MQTT client errors
// RU: Отправлять уведомления в Telegram при ошибках MQTT клиента
#define CONFIG_NOTIFY_TELEGRAM_MQTT_ERRORS_KEY "mqtt_errors"
#define CONFIG_NOTIFY_TELEGRAM_MQTT_ERRORS_FRIENDLY "MQTT ошибки"
#define CONFIG_NOTIFY_TELEGRAM_MQTT_ERRORS 0
#define CONFIG_NOTIFY_TELEGRAM_MQTT_ERRORS_PRIORITY MP_HIGH
#define CONFIG_NOTIFY_TELEGRAM_ALERT_MQTT_ERRORS 0

// EN: Send notifications to Telegram when sending errors to open-monitoring.online
// RU: Отправлять уведомления в Telegram при ошибках отправки на open-monitoring.online
#define CONFIG_NOTIFY_TELEGRAM_OPENMON_KEY "openmon"
#define CONFIG_NOTIFY_TELEGRAM_OPENMON_FRIENDLY "OpenMonitoring"
#define CONFIG_NOTIFY_TELEGRAM_OPENMON_STATUS 1
#define CONFIG_NOTIFY_TELEGRAM_OPENMON_PRIORITY MP_ORDINARY
#define CONFIG_NOTIFY_TELEGRAM_OPENMON_THRESOLD 0
#define CONFIG_NOTIFY_TELEGRAM_ALERT_OPENMON_STATUS 0

// EN: Send notifications to Telegram when sending errors to narodmon.ru
// RU: Отправлять уведомления в Telegram при ошибках отправки на narodmon.ru
#define CONFIG_NOTIFY_TELEGRAM_NARODMON_KEY "narodmon"
#define CONFIG_NOTIFY_TELEGRAM_NARODMON_FRIENDLY "NarodMon"
#define CONFIG_NOTIFY_TELEGRAM_NARODMON_STATUS 1
#define CONFIG_NOTIFY_TELEGRAM_NARODMON_PRIORITY MP_ORDINARY
#define CONFIG_NOTIFY_TELEGRAM_NARODMON_THRESOLD 0
#define CONFIG_NOTIFY_TELEGRAM_ALERT_NARODMON_STATUS 0

// EN: Send notifications to Telegram when sending errors to thingspeak.com
// RU: Отправлять уведомления в Telegram при ошибках отправки на thingspeak.com
#define CONFIG_NOTIFY_TELEGRAM_THINGSPEAK_KEY "thspeak"
#define CONFIG_NOTIFY_TELEGRAM_THINGSPEAK_FRIENDLY "ThingSpeak"
#define CONFIG_NOTIFY_TELEGRAM_THINGSPEAK_STATUS 1
#define CONFIG_NOTIFY_TELEGRAM_THINGSPEAK_PRIORITY MP_ORDINARY
#define CONFIG_NOTIFY_TELEGRAM_THINGSPEAK_THRESOLD 0
#define CONFIG_NOTIFY_TELEGRAM_ALERT_THINGSPEAK_STATUS 0

// EN: Allow notifications in Telegram when the sensor status changes (for example, open circuit)
// RU: Разрешить уведомления в Telegram при изменении статуса сенсора (например обрыв)
#define CONFIG_NOTIFY_TELEGRAM_SENSOR_KEY "sensors"
#define CONFIG_NOTIFY_TELEGRAM_SENSOR_FRIENDLY "Сенсоры"
#define CONFIG_NOTIFY_TELEGRAM_SENSOR_STATE 1
#define CONFIG_NOTIFY_TELEGRAM_SENSOR_PRIORITY MP_INCREASED
#define CONFIG_NOTIFY_TELEGRAM_ALERT_SENSOR_STATE 0

// EN: Send notifications to Telegram when you enable or disable quiet mode
// RU: Отправлять уведомления в Telegram при включении и отключении тихого режима
#define CONFIG_NOTIFY_TELEGRAM_SILENT_MODE_KEY "silent_mode"
#define CONFIG_NOTIFY_TELEGRAM_SILENT_MODE_FRIENDLY "Тихий режим"
#define CONFIG_NOTIFY_TELEGRAM_SILENT_MODE 0
#define CONFIG_NOTIFY_TELEGRAM_SILENT_MODE_PRIORITY MP_LOW
#define CONFIG_NOTIFY_TELEGRAM_ALERT_SILENT_MODE 0

// EN: Send a notification to Telegram when receiving an OTA update
// RU: Отправить уведомление в Telegram при получении OTA обновления
#define CONFIG_NOTIFY_TELEGRAM_START 1
#define CONFIG_NOTIFY_TELEGRAM_START_PRIORITY MP_INCREASED
#define CONFIG_NOTIFY_TELEGRAM_ALERT_START 0

// EN: Send a notification to Telegram when a parameter is changed
// RU: Отправить уведомление в Telegram при изменении параметра
#define CONFIG_NOTIFY_TELEGRAM_PARAM_CHANGED 1
#define CONFIG_NOTIFY_TELEGRAM_PARAM_PRIORITY MP_HIGH
#define CONFIG_NOTIFY_TELEGRAM_ALERT_PARAM_CHANGED 1

// EN: Send a notification to Telegram when a command is received
// RU: Отправить уведомление в Telegram при получении команды
#define CONFIG_NOTIFY_TELEGRAM_COMMAND 1
#define CONFIG_NOTIFY_TELEGRAM_COMMAND_PRIORITY MP_HIGH
#define CONFIG_NOTIFY_TELEGRAM_ALERT_COMMAND 1

// EN: Send a notification to Telegram when receiving an OTA update
// RU: Отправить уведомление в Telegram при получении OTA обновления
#define CONFIG_NOTIFY_TELEGRAM_OTA 1
#define CONFIG_NOTIFY_TELEGRAM_OTA_PRIORITY MP_CRITICAL
#define CONFIG_NOTIFY_TELEGRAM_ALERT_OTA 0

