#pragma once
#include "project_config.h"

// -----------------------------------------------------------------------------------------------------------------------
// ------------------------------------------ EN - https://thingspeak.com/ -----------------------------------------------
// ------------------------------------------ RU - https://thingspeak.com/ -----------------------------------------------
// -----------------------------------------------------------------------------------------------------------------------
// EN: API connection options
// RU: Параметры подключения к API 
#define CONFIG_THINGSPEAK_TLS_PEM_STORAGE CONFIG_DEFAULT_TLS_STORAGE
#define CONFIG_THINGSPEAK_TLS_PEM_START   "_binary_digi_cert_pem_start"
#define CONFIG_THINGSPEAK_TLS_PEM_END     "_binary_digi_cert_pem_end"
#define CONFIG_THINGSPEAK_API_HOST        "thingspeak.com"
#define CONFIG_THINGSPEAK_API_PORT        443
#define CONFIG_THINGSPEAK_API_SEND_PATH   "/update"
#define CONFIG_THINGSPEAK_API_SEND_VALUES "api_key=%s&%s"
#define CONFIG_THINGSPEAK_API_TIMEOUT_MS  30000
#define CONFIG_THINGSPEAK_API_LOGTAG      "ThSp"

// EN: Minimum server access interval in milliseconds
// RU: Минимальный интервал обращения к серверу в миллисекундах
#define CONFIG_THINGSPEAK_MIN_INTERVAL 1000
// EN: Server access interval in milliseconds for API failures
// RU: Интервал обращения к серверу в миллисекундах при отказах API
#define CONFIG_THINGSPEAK_ERROR_INTERVAL 1000
