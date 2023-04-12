/* 
   EN: Dynamically allocating strings on the heap (ESP-IDF)
   RU: Динамическое выделение строк в куче и работа с ними (ESP-IDF)
   --------------------------
   (с) 2021-2023 Разживин Александр | Razzhivin Alexander
   kotyara12@yandex.ru | https://kotyara12.ru | tg: @kotyara1971
*/

#ifndef __RE_STRINGS_H__
#define __RE_STRINGS_H__

#include <time.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * Clone a string and allocate a new memory area on the heap
 * */
char* malloc_string(const char *source);

/**
 * Clone a string and allocate a new memory area on the heap
 * */
char* malloc_stringl(const char *source, const uint32_t len);

/**
 * Generating a string in heap with formatting
 * */
char* malloc_stringf(const char *format, ...);
uint16_t format_string(char* buffer, uint16_t buffer_size, const char *format, ...);

/**
 * Concatenation of two strings into one, with removal from the heap of constituent parts
 * */
char * concat_strings(char * part1, char * part2);
char * concat_strings_div(char * part1, char * part2, const char* divider);

/**
 * Converting 64-bit integers to a string
 * */
char* _i64toa(int64_t value, char* buffer, uint8_t radix);
char* _ui64toa(uint64_t value, char* buffer, uint8_t radix);

/**
 * Generating a heap string containing a textual representation of the date and time
 * */
size_t time2str(const char *format, time_t *value, char* buffer, size_t buffer_size);
size_t time2str_empty(const char *format, time_t *value, char* buffer, size_t buffer_size);
// char* malloc_timestr(const char *format, time_t value);
// char* malloc_timestr_empty(const char *format, time_t value);

/**
 * Generating a heap string containing a textual representation of a time interval in hours, minutes, and seconds
 * */
char * malloc_timespan_hms(time_t value);

/**
 * Generating a heap string containing a textual representation of a time interval in days, hours, minutes, and seconds
 * */
char * malloc_timespan_dhms(time_t value);

#ifdef __cplusplus
}
#endif

#endif // __RE_STRINGS_H__

