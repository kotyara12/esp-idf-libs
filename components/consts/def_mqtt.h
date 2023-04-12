#pragma once
#include "project_config.h"

// -----------------------------------------------------------------------------------------------------------------------
// ---------------------------------------------- EN - MQTT client -------------------------------------------------------
// ---------------------------------------------- RU - MQTT клиент -------------------------------------------------------
// -----------------------------------------------------------------------------------------------------------------------

// -----------------------------------------------------------------------------------------------------------------------
// EN: Static memory allocation for a group of system statuses
// RU: Статическое выделение памяти под системные статусы
#define CONFIG_MQTT_STATIC_ALLOCATION 1
// EN: The number of attempts to connect to the server, after which an event (message) will be sent and a switch to another server will be performed
// RU: Количество попыток подключения к серверу, после чего будет отправлено событие (сообщение) и выполнено переключение на другой сервер
#ifndef CONFIG_MQTT_CONNECT_ATTEMPTS
#define CONFIG_MQTT_CONNECT_ATTEMPTS 5
#endif
// EN: The interval in minutes after which an attempt will be made to return to the primary server (if you switched to the reserved one)
// RU: Интервал в минутах, после которого будет предпринята попытка вернуться на основной сервер (если переключились на резервный)
#ifndef CONFIG_MQTT_BACK_TO_PRIMARY_TIME_MINUTES
#define CONFIG_MQTT_BACK_TO_PRIMARY_TIME_MINUTES 15
#endif
// EN: Restart the device if there is no MQTT connection for more than the specified time in minutes
// RU: Перезапустить устройство, если нет подключения к MQTT более указанного времени в минутах
#ifndef CONFIG_MQTT_RESTART_DEVICE_MINUTES
#define CONFIG_MQTT_RESTART_DEVICE_MINUTES 24*60
#endif
// EN: Send buffer size in bytes
// RU: Размер буфера отправки в байтах
#ifndef CONFIG_MQTT_WRITE_BUFFER_SIZE
#define CONFIG_MQTT_WRITE_BUFFER_SIZE 3072
#endif // CONFIG_MQTT_WRITE_BUFFER_SIZE
// EN: Receive buffer size in bytes
// RU: Размер буфера приема в байтах
#ifndef CONFIG_MQTT_READ_BUFFER_SIZE
#define CONFIG_MQTT_READ_BUFFER_SIZE 256
#endif // CONFIG_MQTT_READ_BUFFER_SIZE
// EN: The maximum message size that can be sent through the outbox. Messages larger than this size will be sent directly to the task context
// RU: Максимальный размер сообщения, который может быть отправлен через outbox. Сообщения больше этого размера, будут отправлены напрямую, в контекст задачи
#ifndef CONFIG_MQTT_MAX_OUTBOX_MESSAGE_SIZE
#define CONFIG_MQTT_MAX_OUTBOX_MESSAGE_SIZE 1024
#endif // CONFIG_MQTT_MAX_OUTBOX_MESSAGE_SIZE
// EN: The maximum size of the outbox send queue. If the outbox already has the specified number of messages, then an attempt will be made to send directly
// RU: Максимальный размер очереди отправки outbox. Если в outbox уже есть заданное количество сообщений, то будет предпринята попытка прямой отправки
#ifndef CONFIG_MQTT_MAX_OUTBOX_SIZE
#define CONFIG_MQTT_MAX_OUTBOX_SIZE 6144
#endif // CONFIG_MQTT_MAX_OUTBOX_SIZE
// EN: Use static memory allocation for the task and queue. CONFIG_FREERTOS_SUPPORT_STATIC_ALLOCATION must be enabled!
// RU: Использовать статическое выделение памяти под задачу и очередь. Должен быть включен параметр CONFIG_FREERTOS_SUPPORT_STATIC_ALLOCATION!
#define CONFIG_MQTT_CLIENT_STATIC_ALLOCATION 1
// EN: MQTT task stack size
// RU: Параметры задачи MQTT
#define CONFIG_MQTT_CLIENT_STACK_SIZE 4098
// EN: MQTT incoming queue size
// RU: Размер очереди входящих сообщений
#define CONFIG_MQTT_INCOMING_QUEUE_SIZE 16
