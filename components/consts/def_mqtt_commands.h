#pragma once
#include "project_config.h"

// EN: Topic name for incoming commands
// RU: Имя топика для входящих команд
#define CONFIG_MQTT_COMMAND_TOPIC "terminal"
// EN: Friendly name for the "command" channel
// RU: Понятное имя для канала "команды"
#define CONFIG_MQTT_COMMAND_NAME "Терминал"
// EN: QOS for commands (needed to delete a processed command)
// RU: QOS для команд (нужен для удаления обработанной команды)
#define CONFIG_MQTT_COMMAND_QOS 2
// EN: Save the last sent data on the broker
// RU: Сохранять на брокере последние отправленные данные
#define CONFIG_MQTT_COMMAND_RETAINED 0
// EN: Restart device command
// RU: Команда "перезапуск устройства"
#define CONFIG_MQTT_CMD_REBOOT "restart"

