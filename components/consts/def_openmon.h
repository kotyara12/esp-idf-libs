#pragma once
#include "project_config.h"

// -----------------------------------------------------------------------------------------------------------------------
// -------------------------------------- EN - http://open-monitoring.online/ --------------------------------------------
// -------------------------------------- RU - http://open-monitoring.online/ --------------------------------------------
// -----------------------------------------------------------------------------------------------------------------------

// EN: API connection options
// RU: Параметры подключения к API 
#define CONFIG_OPENMON_TLS_PEM_STORAGE CONFIG_DEFAULT_TLS_STORAGE
#define CONFIG_OPENMON_TLS_PEM_START   CONFIG_DEFAULT_TLS_PEM_START
#define CONFIG_OPENMON_TLS_PEM_END     CONFIG_DEFAULT_TLS_PEM_END
#define CONFIG_OPENMON_API_HOST        "open-monitoring.online"
#define CONFIG_OPENMON_API_PORT        443
#define CONFIG_OPENMON_API_SEND_PATH   "/get"
#define CONFIG_OPENMON_API_SEND_VALUES "cid=%d&key=%s&%s"
#define CONFIG_OPENMON_API_TIMEOUT_MS  30000
#define CONFIG_OPENMON_API_LOGTAG      "OpMn"

// EN: Minimum server access interval in milliseconds
// RU: Минимальный интервал обращения к серверу в миллисекундах
#define CONFIG_OPENMON_MIN_INTERVAL 60000
// EN: Server access interval in milliseconds for API failures
// RU: Интервал обращения к серверу в миллисекундах при отказах API
#define CONFIG_OPENMON_ERROR_INTERVAL 3000
