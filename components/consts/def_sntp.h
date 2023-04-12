#pragma once
#include "project_config.h"

// -----------------------------------------------------------------------------------------------------------------------
// ----------------------------------------------- EN - SNTP -------------------------------------------------------------
// ----------------------------------------------- RU - SNTP -------------------------------------------------------------
// -----------------------------------------------------------------------------------------------------------------------
// EN: Timezone
// RU: Часовой пояс
#define CONFIG_SNTP_TIMEZONE "MSK-3"
#define CONFIG_SNTP_TIMEZONE_SECONDS 60*60*3
// EN: Synchronization interval in milliseconds
// RU: Интервал синхронизации в миллисекундах
#define CONFIG_SNTP_DELAY_NORMAL 3600000
#define CONFIG_SNTP_DELAY_FAILED 60000
// EN: Five servers with which you can synchronize time
// RU: Пять серверов, с которыми можно синхронизировать время
#define CONFIG_SNTP_SERVER0 "pool.ntp.org"
#define CONFIG_SNTP_SERVER1 "europe.pool.ntp.org"
#define CONFIG_SNTP_SERVER2 "ntp1.stratum2.ru"
#define CONFIG_SNTP_SERVER3 "ntp2.stratum2.ru"
#define CONFIG_SNTP_SERVER4 "ntp1.vniiftri.ru"
