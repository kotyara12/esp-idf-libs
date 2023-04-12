#include "re_log.h"
#include <stdint.h>
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <time.h>
#include "sys/lock.h"

static _LOCK_T _log_lock = 0;

void _rlog_printf(const char *format, ...)
{
  if (_log_lock == 0) __lock_init(_log_lock);
  __lock_acquire(_log_lock);
  va_list args;
  va_start(args, format);
  vprintf(format, args);
  va_end(args);
  __lock_release(_log_lock);
}

const char * _rlog_system_timestamp(void)
{
  char tsbuf[8] = {0};
  struct tm st;
  time_t ut = time(NULL);
  localtime_r(&ut, &st);
  snprintf(tsbuf, sizeof(tsbuf), "%02d:%02d:%02d", st.tm_hour, st.tm_min, st.tm_sec);
  return tsbuf;
}

const char * _rlog_filename(const char * path)
{
  size_t i = 0;
  size_t pos = 0;
  char * p = (char *)path;
  while (*p) {
    i++;
    if (*p == '/' || *p == '\\') {
      pos = i;
    }
    p++;
  }
  return path+pos;
} 
