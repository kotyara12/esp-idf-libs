#pragma once
#include "project_config.h"

// EN: Topic for service data and settings ( %location%/%device%/system/... )
// RU: Топик для служебных данных и настроек ( %location%/%device%/system/... )
#define CONFIG_MQTT_ROOT_SYSTEM_TOPIC "system"
#define CONFIG_MQTT_ROOT_SYSTEM_LOCAL 0
// EN: Topic for parameters and settings ( %location%/%device%/config/.../... )
// RU: Топик для параметров и настроек ( %location%/%device%/config/.../... )
#define CONFIG_MQTT_ROOT_PARAMS_TOPIC "config"
#define CONFIG_MQTT_ROOT_PARAMS_LOCAL 0
// EN: Topic for data exchange between devices ( local/locdata/... )
// RU: Топик для обмена данными между устройствами ( local/locdata/... )
// #define CONFIG_MQTT_ROOT_LOCDATA_TOPIC "locdata"
#define CONFIG_MQTT_ROOT_LOCDATA_LOCAL 1
// EN: Topic for general settings ( %location%/%device%/config/common/... )
// RU: Топик для общих настроек ( %location%/%device%/config/common/... )
#define CONFIG_MQTT_COMMON_TOPIC "common"
// EN: Common settings group friendly name
// RU: Понятное название группы общих настроек
#define CONFIG_MQTT_COMMON_FIENDLY "Общие параметры"
// EN: Use wildcard # when subscribing to configuration topics ( /%location%/%device%/config/# ) instead of subscribing to each registered parameter separately
// RU: Использовать # при подписке на топики настроек ( /%location%/%device%/config/# ) вместо подписки на каждый зарегистрированный параметр отдельно
#define CONFIG_MQTT_PARAMS_WILDCARD 1
// EN: QOS subscriptions to parameter values without confirmation
// RU: QOS подписки на значения параметров без подтверждения
#define CONFIG_MQTT_PARAMS_QOS 2
// EN: Keep broker last sent data for parameters without confirmation
// RU: Сохранять на брокере последние отправленные данные для параметров без подтверждения
#define CONFIG_MQTT_PARAMS_RETAINED 1
// EN: QOS subscriptions for local data
// RU: QOS подписки для локальных данных
#define CONFIG_MQTT_LOCDATA_QOS 2
// EN: Save the last sent local data on the broker
// RU: Сохранять на брокере последние отправленные локальные данные
#define CONFIG_MQTT_LOCDATA_RETAINED 0
// EN: Changing device parameters with confirmation: after receiving, the value of the received parameter will be re-published in another topic
// RU: Изменение параметров устройства с подтверждением: после получения значение полученного параметра будет переопубликовано в другом топике
#define CONFIG_MQTT_PARAMS_CONFIRM_ENABLED 1
// EN: Topic for confirming the receipt of the parameter by the device ( %location%/%device%/system/confirm/.../... )
// RU: Топик для подтверждения получения параметра устройством ( %location%/%device%/system/confirm/.../... )
#define CONFIG_MQTT_ROOT_CONFIRM_TOPIC "confirm"
// EN: QOS confirmation of parameter value receipt
// RU: QOS подтверждения получения значения параметра
#define CONFIG_MQTT_CONFIRM_QOS 2
// EN: Save the last sent data on the broker
// RU: Сохранять на брокере последние отправленные данные
#define CONFIG_MQTT_CONFIRM_RETAINED 1

