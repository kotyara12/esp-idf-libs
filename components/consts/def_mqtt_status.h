#pragma once
#include "project_config.h"

// -----------------------------------------------------------------------------------------------------------------------
// ------------------------------------------- EN - MQTT device status ---------------------------------------------------
// ----------------------------------------- RU - MQTT статус устройства -------------------------------------------------
// -----------------------------------------------------------------------------------------------------------------------
// EN: Allow LWT message in the "status" topic (offline status)
// RU: Разрешить LWT сообщение в топике "status" (офлайн статус)
#define CONFIG_MQTT_STATUS_LWT 1
// EN: Payload LWT message (offline status)
// RU: Сообщение LWT (офлайн статус)
#define CONFIG_MQTT_STATUS_LWT_PAYLOAD "OFFLINE"
// EN: Allow posting a message in the "status" topic after a successful connection (normal status)
// RU: Разрешить публикацию сообщения в топике "status" после успешного подключения (нормальный статус)
#define CONFIG_MQTT_STATUS_ONLINE 1
// EN: Fixed value for normal device status
// RU: Фиксированное значение для нормального статуса устройства
#define CONFIG_MQTT_STATUS_ONLINE_PAYLOAD "ONLINE"
// EN: Allow publication of a message in the "status" topic of system information (running time, memory, rssi), otherwise a fixed value
// RU: Разрешить публикацию сообщения в топике "status" системной информации (время работы, пямять, rssi), иначе фиксированное значение
#define CONFIG_MQTT_STATUS_ONLINE_SYSINFO 1
// EN: Topic name "status"
// RU: Название топика "status"
#define CONFIG_MQTT_STATUS_TOPIC "status"
#define CONFIG_MQTT_STATUS_LOCAL 0
#define CONFIG_MQTT_STATUS_QOS 1
#define CONFIG_MQTT_STATUS_RETAINED 1
