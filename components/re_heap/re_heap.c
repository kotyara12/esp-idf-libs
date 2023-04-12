#include "re_heap.h"

#if defined(CONFIG_HEAP_ALLOC_FAILED_RETRY) && (CONFIG_HEAP_ALLOC_FAILED_RETRY > 0)

void* esp_malloc(size_t size)
{
  uint8_t att_count = 1;
  void* addr = nullptr;
  do {
    addr = malloc(size);
    if (addr == nullptr) {
      att_count++;
      sys_delay_ms(CONFIG_HEAP_ALLOC_FAILED_RETRY_DELAY);
    };
  } while ((addr == nullptr) && (att_count < CONFIG_HEAP_ALLOC_FAILED_RETRY));
  return addr;
}

void* esp_calloc(size_t count, size_t size)
{
  uint8_t att_count = 0;
  void* addr = nullptr;
  do {
    addr = calloc(count, size);
    if (addr == nullptr) {
      att_count++;
      sys_delay_ms(CONFIG_HEAP_ALLOC_FAILED_RETRY_DELAY);
    };
  } while ((addr == nullptr) && (att_count < CONFIG_HEAP_ALLOC_FAILED_RETRY));
  return addr;
}

#endif // CONFIG_HEAP_ALLOC_FAILED_RETRY