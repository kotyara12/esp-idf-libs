#pragma once
#include "project_config.h"

// EN: Ping task parameters: stack size and priority
// RU: Параметры задачи пинга: размер стека и приоритет
#define CONFIG_PING_TASK_STACK_SIZE 2560
// EN: Display results for each packet sent (otherwise, only totals)
// RU: Отбражать результаты для каждого отправленного пакета (иначе - только итоги)
#define CONFIG_PING_SHOW_INTERMEDIATE 0
// EN: Keep the socket open for the duration of the service. Otherwise, the socket is created on every ping
// RU: Держать сокет открытым на всё время работы сервиса. Иначе сокет создается при каждом пинге
#define CONFIG_PING_KEEP_SOCKET 0

