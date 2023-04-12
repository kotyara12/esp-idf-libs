#pragma once

#include "project_config.h"

// EN: Default task priority
// RU: Приоритет задачи "по умолчанию"
// #define CONFIG_DEFAULT_TASK_PRIORITY        5

// EN: Priorities of applied tasks
// RU: Приоритеты прикладных задач
#define CONFIG_TASK_PRIORITY_SENSORS        6U
#define CONFIG_TASK_PRIORITY_ALARM          8U

// EN: Priorities of system tasks
// RU: Приоритеты системных задач
#define CONFIG_EVENT_LOOP_PRIORITY          19U
#define CONFIG_TASK_PRIORITY_OTA            10U

#define CONFIG_TASK_PRIORITY_PING           3U
#define CONFIG_TASK_PRIORITY_PINGER         3U
#define CONFIG_TASK_PRIORITY_DATASEND       5U
#define CONFIG_TASK_PRIORITY_TELEGRAM       11U
#define CONFIG_TASK_PRIORITY_MQTT_CLIENT    12U
#define CONFIG_TASK_PRIORITY_LED            13U
#define CONFIG_TASK_PRIORITY_BEEP           14U

// EN: Processor core of applied tasks
// RU: Процессорное ядро прикладных задач
#define CONFIG_TASK_CORE_SENSORS            1
#define CONFIG_TASK_CORE_ALARM              1

// EN: Processor core of system tasks
// RU: Процессорное ядро системных задач
#define CONFIG_EVENT_LOOP_CORE              0
#define CONFIG_TASK_CORE_OTA                1
#define CONFIG_TASK_CORE_LED                1
#define CONFIG_TASK_CORE_BEEP               0
#define CONFIG_TASK_CORE_PING               1
#define CONFIG_TASK_CORE_PINGER             1
#define CONFIG_TASK_CORE_MQTT_CLIENT        1
#define CONFIG_TASK_CORE_TELEGRAM           1
#define CONFIG_TASK_CORE_DATASEND           1
