#pragma once
#include "project_config.h"

// -----------------------------------------------------------------------------------------------------------------------
// ----------------------------------------- EN - MQTT system information ------------------------------------------------
// ---------------------------------------- RU - MQTT системная информация -----------------------------------------------
// -----------------------------------------------------------------------------------------------------------------------
// EN: System information topic name
// RU: Название топика системной информации
#define CONFIG_MQTT_SYSINFO_TOPIC "sysinfo"
#define CONFIG_MQTT_SYSINFO_LOCAL 0
#define CONFIG_MQTT_SYSINFO_QOS 1
#define CONFIG_MQTT_SYSINFO_RETAINED 1

// EN: System information topic name
// RU: Название топика системной информации
#define CONFIG_MQTT_TASKLIST_TOPIC "tasklist"
#define CONFIG_MQTT_TASKLIST_LOCAL 0
#define CONFIG_MQTT_TASKLIST_QOS 1
#define CONFIG_MQTT_TASKLIST_RETAINED 1

// EN: Memory leaks topic name
// RU: Название топика для трассировки памяти
#define CONFIG_MQTT_HEAP_LEAKS_TOPIC "memleaks"
#define CONFIG_MQTT_HEAP_LEAKS_LOCAL 0
#define CONFIG_MQTT_HEAP_LEAKS_QOS 1
#define CONFIG_MQTT_HEAP_LEAKS_RETAINED 1

// EN: WiFi debug info topic name
// RU: Название топика отладочной информации об WiFi
#define CONFIG_MQTT_WIFI_DEBUG_TOPIC "wifi_debug"
#define CONFIG_MQTT_WIFI_DEBUG_LOCAL 0
#define CONFIG_MQTT_WIFI_DEBUG_QOS 1
#define CONFIG_MQTT_WIFI_DEBUG_RETAINED 1
