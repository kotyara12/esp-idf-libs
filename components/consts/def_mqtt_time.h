#pragma once
#include "project_config.h"

// -----------------------------------------------------------------------------------------------------------------------
// ------------------------------------------- EN - MQTT device time -----------------------------------------------------
// ----------------------------------------- RU - MQTT время устройства --------------------------------------------------
// -----------------------------------------------------------------------------------------------------------------------
// EN: Allow publication of date and time every minute
// RU: Разрешить публикцию даты и времени каждую минуту
#define CONFIG_MQTT_TIME_ENABLE 1
// EN: Date and time topic name
// RU: Название топика даты и времени
#define CONFIG_MQTT_TIME_TOPIC "time"
#define CONFIG_MQTT_TIME_QOS 1
#define CONFIG_MQTT_TIME_RETAINED 1
#define CONFIG_MQTT_TIME_AS_PLAIN 0
#define CONFIG_MQTT_TIME_AS_JSON 1

