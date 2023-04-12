#pragma once
#include "project_config.h"

// -----------------------------------------------------------------------------------------------------------------------
// ---------------------------------------------- EN - Telegram notify ---------------------------------------------------
// ------------------------------------------- RU - Уведомления в Telegram -----------------------------------------------
// -----------------------------------------------------------------------------------------------------------------------
// EN: TLS certificate for Telegram API
// RU: TLS-сертификат для API Telegram
#define CONFIG_TELEGRAM_TLS_PEM_STORAGE CONFIG_DEFAULT_TLS_STORAGE
#define CONFIG_TELEGRAM_TLS_PEM_START "_binary_api_telegram_org_pem_start"
#define CONFIG_TELEGRAM_TLS_PEM_END "_binary_api_telegram_org_pem_end"
// EN: Use static memory allocation for the task and queue. CONFIG_FREERTOS_SUPPORT_STATIC_ALLOCATION must be enabled!
// RU: Использовать статическое выделение памяти под задачу и очередь. Должен быть включен параметр CONFIG_FREERTOS_SUPPORT_STATIC_ALLOCATION!
#define CONFIG_TELEGRAM_STATIC_ALLOCATION 1
// EN: Queue size for the task of sending notifications to Telegram
// RU: Размер очереди для задачи отправки уведомлений в Telegram
#define CONFIG_TELEGRAM_QUEUE_SIZE 16
// EN: Time to wait for a message to be sent to the queue in milliseconds
// RU: Время ожидания отправки сообщения в очередь в миллисекундах
#define CONFIG_TELEGRAM_QUEUE_WAIT 30000
// EN: The size of the static buffer for Telegram messages. The maximum allowable size for the API is 4096. Specify 0 to allocate data on the heap
// RU: Размер статического буфера для сообщений Telegram. Максимально допустимый размер для API - 4096. Укажите 0 для размещения данных в куче
#ifndef CONFIG_TELEGRAM_MESSAGE_SIZE
#define CONFIG_TELEGRAM_MESSAGE_SIZE 0
#endif
// EN: The size of the internal queue for sending notifications in Telegram
// RU: Размер внутренней очереди отправки уведомлений в Telegram
#ifndef CONFIG_TELEGRAM_OUTBOX_SIZE
#define CONFIG_TELEGRAM_OUTBOX_SIZE 8
#endif
// EN: Stack size for the task of sending notifications to Telegram
// RU: Размер стека для задачи отправки уведомлений в Telegram
#ifndef CONFIG_TELEGRAM_STACK_SIZE
#define CONFIG_TELEGRAM_STACK_SIZE 3584
#endif
// EN: Number of attempts to send notifications to Telegram
// RU: Количество попыток отправки уведомлений в Telegram
#define CONFIG_TELEGRAM_MAX_ATTEMPTS 30
// EN: Minimum interval between two sends to Telegram
// RU: Минимальный интервал между двумя отправками в Telegram
#define CONFIG_TELEGRAM_SEND_INTERVAL 10
// EN: The interval between sending to Telegram in case the API returned an error 403
// RU: Интервал между отправками в Telegram в случае если API вернуло ошибку 403
#define CONFIG_TELEGRAM_FORBIDDEN_INTERVAL 60000
// EN: Waiting time when Internet or WiFi is not available
// RU: Время ожидания при недоступности интернет или WiFi
#define CONFIG_TELEGRAM_INTERNET_INTERVAL 30000
