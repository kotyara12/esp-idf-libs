#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>
#include "def_consts.h"
#include "re_strings.h"
#include "re_heap.h"

// -----------------------------------------------------------------------------------------------------------------------
// -------------------------------------------------- Format strings -----------------------------------------------------
// -----------------------------------------------------------------------------------------------------------------------

char * malloc_string(const char *source) 
{
  if (source) {
    uint32_t len = strlen(source);
    char *ret = (char*)esp_malloc(len+1);
    if (ret != NULL) {
      memset(ret, 0, len+1);
      strcpy(ret, source);
      return ret;
    };
  };
  return NULL;
}

char * malloc_stringl(const char *source, const uint32_t len) 
{
  if (source) {
    char *ret = (char*)esp_malloc(len+1);
    if (ret != NULL) {
      memset(ret, 0, len+1);
      strncpy(ret, source, len);
      return ret;
    };
  };
  return NULL;
}

char * malloc_stringf(const char *format, ...) 
{
  char *ret = NULL;
  if (format != NULL) {
    va_list args;
    va_start(args, format);
    int len = vsnprintf(NULL, 0, format, args);
    if (len > 0) {
      ret = (char*)esp_malloc(len+1);
      if (ret != NULL) {
        memset(ret, 0, len+1);
        vsnprintf(ret, len+1, format, args);
      };
    };
    va_end(args);
  };
  return ret;
}

uint16_t format_string(char* buffer, uint16_t buffer_size, const char *format, ...)
{
  uint16_t ret = 0;
  if (buffer && format) {
    memset(buffer, 0, buffer_size);
    va_list args;
    va_start(args, format);
    ret = vsnprintf(buffer, buffer_size, format, args);
    va_end(args);
  };
  return ret;
}

char* _i64toa(int64_t value, char* buffer, uint8_t radix) 
{
  // Check radix
  if (radix < 2 || radix > 16) { 
    *buffer = '\0'; 
    return buffer; 
  };

  uint8_t negative, digit;
  uint64_t val;
  char *pos = buffer, *pos1 = buffer, tmp;

  if (value < 0 && radix == 10) {
    negative = 1;
    val = - value;
  } else {
    negative = 0;
    val = value;
  };

  do {
    digit = val % radix;
    val = val / radix;
    if (digit < 10) {
      *pos++ = '0' + digit;
    } else {
      *pos++ = 'a' + digit - 10;
    };
  } while (val != 0L);

  if (negative) *pos++ = '-'; 
  
  *pos-- = '\0';

  while(pos1 < pos) {
    tmp = *pos;
    *pos--= *pos1;
    *pos1++ = tmp;
  };

  return buffer;
}

char* _ui64toa(uint64_t value, char* buffer, uint8_t radix) 
{
  // Check radix
  if (radix < 2 || radix > 16) { 
    *buffer = '\0'; 
    return buffer; 
  };

  uint8_t digit;
  uint64_t val;
  char *pos = buffer, *pos1 = buffer, tmp;

  val = value;
  do {
    digit = val % radix;
    val = val / radix;
    if (digit < 10) {
      *pos++ = '0' + digit;
    } else {
      *pos++ = 'a' + digit - 10;
    };
  } while (val != 0L);

  *pos-- = '\0';

  while(pos1 < pos) {
    tmp = *pos;
    *pos--= *pos1;
    *pos1++ = tmp;
  };

  return buffer;
}

size_t time2str(const char *format, time_t *value, char* buffer, size_t buffer_size)
{
  if ((buffer == NULL) || (value == NULL) || (buffer_size == 0)) {
    return 0;
  };
  memset(buffer, 0, buffer_size);
  struct tm timeinfo;
  localtime_r(value, &timeinfo);
  return strftime(buffer, buffer_size, format, &timeinfo);
}

size_t time2str_empty(const char *format, time_t *value, char* buffer, size_t buffer_size)
{
  if ((buffer == NULL) || (value == NULL) || (buffer_size == 0)) {
    return 0;
  };
  memset(buffer, 0, buffer_size);
  if (*value > 0) {
    struct tm timeinfo;
    localtime_r(value, &timeinfo);
    return strftime(buffer, buffer_size, format, &timeinfo);
  } else {
    strcpy(buffer, CONFIG_FORMAT_EMPTY_DATETIME);
    return strlen(CONFIG_FORMAT_EMPTY_DATETIME);
  };
}

char * malloc_timestr(const char *format, time_t value)
{
  struct tm timeinfo;
  localtime_r(&value, &timeinfo);
  char buffer[CONFIG_FORMAT_STRFTIME_BUFFER_SIZE];
  memset(buffer, 0, sizeof(buffer));
  strftime(buffer, sizeof(buffer), format, &timeinfo);
  return malloc_string(buffer);
}

char * malloc_timestr_empty(const char *format, time_t value)
{
  if (value > 0) {
    struct tm timeinfo;
    localtime_r(&value, &timeinfo);
    char buffer[CONFIG_FORMAT_STRFTIME_BUFFER_SIZE];
    memset(buffer, 0, sizeof(buffer));
    strftime(buffer, sizeof(buffer), format, &timeinfo);
    return malloc_string(buffer);
  } else {
    return malloc_string(CONFIG_FORMAT_EMPTY_DATETIME);
  }
}

char * malloc_timespan_hms(time_t value)
{
  uint16_t h = value / 3600;
  uint16_t m = value % 3600 / 60;
  uint16_t s = value % 3600 % 60;

  return malloc_stringf("%.2d:%.2d:%.2d", h, m, s);
}

char * malloc_timespan_dhms(time_t value)
{
  uint16_t d = value / 86400;
  uint16_t h = value % 86400 / 3600;
  uint16_t m = value % 86400 % 3600 / 60;
  uint16_t s = value % 86400 % 3600 % 60;

  return malloc_stringf("%d.%.2d:%.2d:%.2d", d, h, m, s);
}

char * concat_strings(char * part1, char * part2)
{
  char * ret = NULL;
  if (part1) {
    if (part2) {
      ret = malloc_stringf("%s%s", part1, part2);
      free(part1);
      free(part2);
    } else {
      ret = part1;
    };
  } else {
    ret = part2;
  };
  return ret;
}

char * concat_strings_div(char * part1, char * part2, const char* divider)
{
  char * ret = NULL;
  if (part1) {
    if (part2) {
      ret = malloc_stringf("%s%s%s", part1, divider, part2);
      free(part1);
      free(part2);
    } else {
      ret = part1;
    };
  } else {
    ret = part2;
  };
  return ret;
}

