#pragma once
#include "project_config.h"

// EN: Line break character to use inside JSON values. Simple "\n" "breaks" the JavaScript parser, other characters need to be converted
// RU: Символ переноса строки для использования внутри JSON-значений. Просто "\n" "ломает" парсер JavaScript, другие символы могут требовать конвертации
#define CONFIG_JSON_CHAR_EOL "\\n"

// EN: Formats for numeric values
// RU: Форматы для числовых величин
#define CONFIG_FORMAT_OPT_I8     "%d"
#define CONFIG_FORMAT_OPT_U8     "%d"
#define CONFIG_FORMAT_OPT_I16    "%d"
#define CONFIG_FORMAT_OPT_U16    "%d"
#define CONFIG_FORMAT_OPT_I32    "%d"
#define CONFIG_FORMAT_OPT_U32    "%d"
#define CONFIG_FORMAT_OPT_I64    "%d"
#define CONFIG_FORMAT_OPT_U64    "%d"
#define CONFIG_FORMAT_OPT_FLOAT  "%.2f"
#define CONFIG_FORMAT_OPT_DOUBLE "%f"

// EN: Buffer length for converting 64-bit numbers to a string
// RU: Длина буфера для преобразования 64-битных чисел в строку
#define CONFIG_BUFFER_LEN_INT64_RADIX10 20