#pragma once
#include "project_config.h"

// EN: Use static memory allocation for the task and queue. CONFIG_FREERTOS_SUPPORT_STATIC_ALLOCATION must be enabled!
// RU: Использовать статическое выделение памяти под задачу и очередь. Должен быть включен параметр CONFIG_FREERTOS_SUPPORT_STATIC_ALLOCATION!
#define CONFIG_DATASEND_STATIC_ALLOCATION 1
// EN: The size of the static buffer for generating a get request. Specify 0 for heap allocation
// RU: Размер статического буфера для формирования get-запроса. Укажите 0 для размещения данных в куче
#ifndef CONFIG_DATASEND_SEND_BUFFER_SIZE
#define CONFIG_DATASEND_SEND_BUFFER_SIZE 0
#endif
// EN: Stack size for the task of sending data to external services
// RU: Размер стека для задачи отправки данных на внешние сервисы
#ifndef CONFIG_DATASEND_STACK_SIZE
#define CONFIG_DATASEND_STACK_SIZE 3584
#endif
// EN: Queue size for the task of sending data to external services
// RU: Размер очереди для задачи отправки данных на внешние сервисы
#ifndef CONFIG_DATASEND_QUEUE_SIZE
#define CONFIG_DATASEND_QUEUE_SIZE 16
#endif
// EN: Timeout for writing to the queue for sending data to external services
// RU: Время ожидания записи в очередь отправки данных на внешние сервисы
#define CONFIG_DATASEND_QUEUE_WAIT 60000

