/* 
   EN: Allocate memory on the heap with the possibility of retries in case of failure
   RU: Выделение памяти в куче с возможностью повторных попыток в случае неудачи
   --------------------------
   (с) 2021-2023 Разживин Александр | Razzhivin Alexander
   kotyara12@yandex.ru | https://kotyara12.ru | tg: @kotyara1971
*/

#ifndef __RE_HEAP_H__
#define __RE_HEAP_H__

#include "def_consts.h"

#if defined(CONFIG_HEAP_ALLOC_FAILED_RETRY) && (CONFIG_HEAP_ALLOC_FAILED_RETRY > 0)
  void* esp_malloc(size_t size);
  void* esp_calloc(size_t count, size_t size);
#else
  #define esp_malloc(size) malloc(size)
  #define esp_calloc(count, size) calloc(count, size)
#endif // CONFIG_HEAP_ALLOC_FAILED_RETRY

#endif // __RE_HEAP_H__

