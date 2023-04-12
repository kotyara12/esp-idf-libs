#pragma once

#include "project_config.h"
#include "def_led_modes.h"
#include "def_events.h"
#include "def_tasks.h"
#include "def_notify.h"
#include "def_wifi.h"
#include "def_mqtt.h"
#include "def_mqtt_time.h"
#include "def_mqtt_status.h"
#include "def_mqtt_sysinfo.h"
#include "def_mqtt_params.h"
#include "def_mqtt_commands.h"
#include "def_mqtt_ota.h"
#include "def_params.h"
#include "def_sensors.h"
#include "def_formats.h"
#include "def_formats_sensors.h"
#include "def_formats_datetime.h"
#include "def_loadctrl.h"
#include "def_tempmonitor.h"
#include "def_eltariffs.h"

#if CONFIG_PINGER_ENABLE
  #include "def_ping.h"
  #include "def_pinger.h"
#endif // CONFIG_PINGER_ENABLE

#if CONFIG_TELEGRAM_ENABLE
  #include "def_tg_messages.h"
  #include "def_tg_task.h"
#endif // CONFIG_TELEGRAM_ENABLE

#if CONFIG_OPENMON_ENABLE || CONFIG_NARODMON_ENABLE || CONFIG_THINGSPEAK_ENABLE
  #define CONFIG_DATASEND_ENABLE 1
  #include "def_datasend.h"
  
  #if CONFIG_OPENMON_ENABLE
    #include "def_openmon.h"
  #endif // CONFIG_OPENMON_ENABLE
  
  #if CONFIG_NARODMON_ENABLE
    #include "def_narodmon.h"
  #endif // CONFIG_NARODMON_ENABLE
  
  #if CONFIG_THINGSPEAK_ENABLE
    #include "def_thingspeak.h"
  #endif // CONFIG_THINGSPEAK_ENABLE
#else
  #define CONFIG_DATASEND_ENABLE 0
#endif // CONFIG_OPENMON_ENABLE || CONFIG_NARODMON_ENABLE || CONFIG_THINGSPEAK_ENABLE

// EN: Minimum free memory size (percentage) below which some memory-intensive operations may be blocked
// RU: Минимальный размер сводобной памяти (в процентах), ниже которого некоторые операции с большим потреблением памяти могут быть заблокированы
#define CONFIG_HEAP_MINIMAL_SIZE_PERCENT 20

// EN: Certificate Connection Modes When Establishing HTTPS Connections
// RU: Режимы подключения сертификатов при установке HTTPS-соединений
// EN: - TLS_CERT_BUFFER - every time before connecting, "as usual" 
// RU: - TLS_CERT_BUFFER - каждый раз перед подключением, "как обычно"
#define TLS_CERT_BUFFER 0
// EN: - TLS_CERT_GLOBAL - use the global certificate store
// RU: - TLS_CERT_GLOBAL - использовать глобальное хранилище сертификатов
#define TLS_CERT_GLOBAL 1
// EN: - TLS_CERT_BUNDLE - use built-in certificate bundle (see CONFIG_MBEDTLS_CERTIFICATE_BUNDLE and related options)
// RU: - TLS_CERT_BUNDLE - использовать встроенный пакет сертификатов (см. CONFIG_MBEDTLS_CERTIFICATE_BUNDLE и связанные с ним параметры)
#define TLS_CERT_BUNDLE 2

// EN: TLS certificate for most connections
// RU: TLS-сертификат для большиства подключений
#ifndef CONFIG_DEFAULT_TLS_STORAGE
#if CONFIG_MBEDTLS_DYNAMIC_BUFFER
  #define CONFIG_DEFAULT_TLS_STORAGE TLS_CERT_BUFFER
#else
  #define CONFIG_DEFAULT_TLS_STORAGE TLS_CERT_GLOBAL
#endif // CONFIG_MBEDTLS_DYNAMIC_BUFFER
#endif // CONFIG_DEFAULT_TLS_STORAGE
#define CONFIG_DEFAULT_TLS_PEM_START "_binary_isrg_root_x1_pem_start"
#define CONFIG_DEFAULT_TLS_PEM_END "_binary_isrg_root_x1_pem_end"