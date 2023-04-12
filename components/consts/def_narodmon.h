#pragma once
#include "project_config.h"

// -----------------------------------------------------------------------------------------------------------------------
// ---------------------------------------------- EN - https://narodmon.ru/ ----------------------------------------------
// ---------------------------------------------- RU - https://narodmon.ru/ ----------------------------------------------
// -----------------------------------------------------------------------------------------------------------------------
// EN: API connection options
// RU: Параметры подключения к API 
#define CONFIG_NARODMON_TLS_PEM_STORAGE     CONFIG_DEFAULT_TLS_STORAGE
#define CONFIG_NARODMON_TLS_PEM_START       CONFIG_DEFAULT_TLS_PEM_START
#define CONFIG_NARODMON_TLS_PEM_END         CONFIG_DEFAULT_TLS_PEM_END
#define CONFIG_NARODMON_API_HOST            "narodmon.ru"
#define CONFIG_NARODMON_API_PORT             443
#define CONFIG_NARODMON_API_SEND_PATH        "/get"
#define CONFIG_NARODMON_API_SEND_VALUES      "ID=%s&%s"
#define CONFIG_NARODMON_API_TIMEOUT_MS       30000
#define CONFIG_NARODMON_API_LOGTAG           "NrMn"

// EN: Minimum server access interval in milliseconds
// RU: Минимальный интервал обращения к серверу в миллисекундах
#define CONFIG_NARODMON_MIN_INTERVAL 300000
// EN: Server access interval in milliseconds for API failures
// RU: Интервал обращения к серверу в миллисекундах при отказах API
#define CONFIG_NARODMON_ERROR_INTERVAL 180000
