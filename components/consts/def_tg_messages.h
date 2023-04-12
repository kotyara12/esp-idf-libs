#pragma once
#include "project_config.h"

// -----------------------------------------------------------------------------------------------------------------------
// ---------------------------------------------- EN - Messages ----------------------------------------------------------
// ---------------------------------------------- RU - Сообщения ---------------------------------------------------------
// -----------------------------------------------------------------------------------------------------------------------
#define CONFIG_MESSAGE_TG_VERSION_DEF "🔸 <b>Устройство запущено</b>\n\n<code>Версия прошивки:     </code><b>%s</b>\n<code>Причина перезапуска: </code><b>%s</b>\n<code>CPU0: </code><i>%s</i>\n<code>CPU1: </code><i>%s</i>"
#define CONFIG_MESSAGE_TG_VERSION_HEAP "🔸 <b>Устройство запущено</b>\n\n<code>Версия прошивки:     </code><b>%s</b>\n<code>Причина перезапуска: </code><b>%s</b>\n<code>CPU0: </code><i>%s</i>\n<code>CPU1: </code><i>%s</i>\n<code>HEAP: </code><i>%s</i>"
#define CONFIG_MESSAGE_TG_VERSION_TRACE "🔸 <b>Устройство запущено</b>\n\n<code>Версия прошивки:     </code><b>%s</b>\n<code>Причина перезапуска: </code><b>%s</b>\n<code>CPU0:  </code><i>%s</i>\n<code>CPU1:  </code><i>%s</i>\n<code>HEAP:  </code><i>%s</i>\n<code>TRACE: </code><i>%s</i>"
#define CONFIG_MESSAGE_TG_START_UNAVAILABLE "\n\n<code>Код ошибки: </code><b>0x%X</b> ( <b>%d</b> ) <b>%s</b>\n<code>Время начала проблем: </code><b>%s</b>"
#define CONFIG_MESSAGE_TG_PERIOD_UNAVAILABLE "\n\n<code>Время начала проблем: </code><b>%s</b>\n<code>Время восстановления: </code><b>%s</b>\n<code>Проблемы наблюдались: </code><b>%d</b> час <b>%d</b> мин <b>%d</b> сек"
#define CONFIG_MESSAGE_TG_HOST_AVAILABLE "💠 Доступ к серверу <b>%s</b> восстановлен" CONFIG_MESSAGE_TG_PERIOD_UNAVAILABLE
#define CONFIG_MESSAGE_TG_GWAY_AVAILABLE "📶 Доступ к роутеру восстановлен" CONFIG_MESSAGE_TG_PERIOD_UNAVAILABLE
#define CONFIG_MESSAGE_TG_INET_AVAILABLE "🟢 Доступ к <b>сети интернет</b> восстановлен" CONFIG_MESSAGE_TG_PERIOD_UNAVAILABLE
#define CONFIG_MESSAGE_TG_WIFI_AVAILABLE "📶 Подключение к точке доступа WiFi <b>%s</b> восстановлено" CONFIG_MESSAGE_TG_PERIOD_UNAVAILABLE
#define CONFIG_MESSAGE_TG_HOST_UNAVAILABLE "🔴 Сервер <b>%s</b> не доступен" CONFIG_MESSAGE_TG_START_UNAVAILABLE
#define CONFIG_MESSAGE_TG_INET_UNAVAILABLE "🔴 Доступ к <b>сети интернет</b> потерян" CONFIG_MESSAGE_TG_START_UNAVAILABLE
#define CONFIG_MESSAGE_TG_MQTT_CONN_OK "🟢 Подключение к MQTT брокеру <b>%s</b> восстановлено" CONFIG_MESSAGE_TG_PERIOD_UNAVAILABLE
#define CONFIG_MESSAGE_TG_MQTT_CONN_LOST "🔴 Потеряно подключение к MQTT брокеру <b>%s</b>" CONFIG_MESSAGE_TG_START_UNAVAILABLE
#define CONFIG_MESSAGE_TG_MQTT_CONN_FAILED "🟡 Не удалось подключиться к MQTT брокеру <b>%s:%d</b>"
#define CONFIG_MESSAGE_TG_MQTT_SERVER_CHANGE_PRIMARY "🔀 Выполнено переключение на <b><i>основной</i></b> MQTT брокер <b>%s:%d</b>"
#define CONFIG_MESSAGE_TG_MQTT_SERVER_CHANGE_RESERVED "🔀 Выполнено переключение на <b><i>резервный</i></b> MQTT брокер <b>%s:%d</b>"
#define CONFIG_MESSAGE_TG_MQTT_ERROR "🛑 <b>Ошибка MQTT клиента</b>\n<code>%s</code>!"
#define CONFIG_MESSAGE_TG_OTA "⚙️ Загрузка новой версии прошивки по адресу: <b>%s</b>"
#define CONFIG_MESSAGE_TG_CMD "🔤 Получена команда: <b>%s</b>"
#define CONFIG_MESSAGE_TG_MQTT_NOT_PROCESSED "🛑 Не удалось обработать входящее сообщение в топике ''<b>%s</b>''!"
#define CONFIG_MESSAGE_TG_PARAM_GROUP_DELIMITER "%s.%s"
#define CONFIG_MESSAGE_TG_PARAM_FIENDLY_DELIMITER "%s / %s"
#define CONFIG_MESSAGE_TG_PARAM_CHANGE "🛠 Изменение параметра ''<b>%s</b> / <b>%s</b>'':\n\n<code>%s/%s = <b>%s</b></code>"
#define CONFIG_MESSAGE_TG_PARAM_EQUAL "🛠 Изменение параметра ''<b>%s</b> / <b>%s</b>'' (%s/%s) игнорировано - новое значение <b>%s</b> идентично предыдущему"
#define CONFIG_MESSAGE_TG_PARAM_INVALID "🛑 Не удалось выполнить изменение параметра ''<b>%s</b> / <b>%s</b>'' - новое значение <b>%s</b> выходит за допустимые пределы"
#define CONFIG_MESSAGE_TG_PARAM_BAD "🛑 Не удалось выполнить преобразование значения для параметра ''<b>%s</b> / <b>%s</b>'':\n<code>%s/%s = <b>%s</b></code>"
#define CONFIG_MESSAGE_TG_SILENT_MODE_ON "🔕 Активирован <b><i>тихий режим</i></b> (без звуковых и световых оповещений)"
#define CONFIG_MESSAGE_TG_SILENT_MODE_OFF "🔔 <b><i>Тихий режим</i></b> (без звуковых и световых оповещений) отключен"
#define CONFIG_MESSAGE_TG_OTA_OK "🆙 OTA обновление успешно выполнено"
#define CONFIG_MESSAGE_TG_OTA_FAILED "⛔️ OTA обновление не выполнено, код ошибки #%d! Повторите попытку позже..."
#define CONFIG_MESSAGE_TG_SENSOR_OK "🆗 Работоспособность сенсора [ <b>%s</b> ] восстановлена"
#define CONFIG_MESSAGE_TG_SENSOR_ERROR "🛑 Сбой сенсора [ <b>%s</b> ]: <b>%s</b>"
// #define CONFIG_MESSAGE_TG_SENSOR_STATE_NO_INIT "⚠️ Сенсор [ <b>%s</b> ] не инициализирован!"
// #define CONFIG_MESSAGE_TG_SENSOR_STATE_NO_DATA "⚠️ Не удалось получить данные с сенсора [ <b>%s</b> ]"
// #define CONFIG_MESSAGE_TG_SENSOR_STATE_BAD_DATA "⚠️ Получены неверные данные с сенсора [ <b>%s</b> ]"
// #define CONFIG_MESSAGE_TG_SENSOR_STATE_CONN_ERROR "🆘 Сенсор [ <b>%s</b> ] не исправен или не доступен"
// #define CONFIG_MESSAGE_TG_SENSOR_STATE_CAL_ERROR "🆑 Ошибка загрузки данных калибровки для сенсора [ <b>%s</b> ]"
// #define CONFIG_MESSAGE_TG_SENSOR_STATE_CRC_ERROR "🆘 Ошибка контрольной суммы при получении данных с сенсора [ <b>%s</b> ]"
// #define CONFIG_MESSAGE_TG_SENSOR_STATE_ERROR "🆘 Сбой сенсора [ <b>%s</b> ]"
// #define CONFIG_MESSAGE_TG_SENSOR_STATE_UNKNOWN_ERROR "🆘 Не определенная ошибка сенсора [ <b>%s</b> ]"
#define CONFIG_MESSAGE_TG_SENSOR_CLREXTR_DAILY_ALL "ℹ️ Выполнен <b>сброс дневных экстремумов</b> для <b>всех сенсоров устройства</b>"
#define CONFIG_MESSAGE_TG_SENSOR_CLREXTR_WEEKLY_ALL "ℹ️ Выполнен <b>сброс недельных экстремумов</b> для <b>всех сенсоров устройства</b>"
#define CONFIG_MESSAGE_TG_SENSOR_CLREXTR_ENTIRELY_ALL "ℹ️ Выполнен <b>сброс непрерывных экстремумов</b> для <b>всех сенсоров устройства</b>"
#define CONFIG_MESSAGE_TG_SENSOR_CLREXTR_TOTAL_ALL "ℹ️ Выполнен <b>сброс экстремумов</b> для <b>всех сенсоров устройства</b>"
#define CONFIG_MESSAGE_TG_SENSOR_CLREXTR_DAILY_DEV "ℹ️ Выполнен <b>сброс дневных экстремумов</b> для сенсора [ <b>%s</b> ]"
#define CONFIG_MESSAGE_TG_SENSOR_CLREXTR_WEEKLY_DEV "ℹ️ Выполнен <b>сброс недельных экстремумов</b> для сенсора [ <b>%s</b> ]"
#define CONFIG_MESSAGE_TG_SENSOR_CLREXTR_ENTIRELY_DEV "ℹ️ Выполнен <b>сброс непрерывных экстремумов</b> для сенсора [ <b>%s</b> ]"
#define CONFIG_MESSAGE_TG_SENSOR_CLREXTR_TOTAL_DEV "ℹ️ Выполнен <b>сброс экстремумов</b> для сенсора [ <b>%s</b> ]"
#define CONFIG_MESSAGE_TG_SENSOR_CLREXTR_UNKNOWN "🛑 Не удалось выполнить сброс экстремумов: сенсор [ <b>%s</b> ] не найден в системе!"

