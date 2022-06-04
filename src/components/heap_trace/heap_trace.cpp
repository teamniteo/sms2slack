#include "heap_trace.h"
#include "esphome/core/log.h"
#include <esp_heap_caps.h>
#include <esp_system.h>

namespace esphome {
namespace heap_trace {

static const char *TAG = "HeapTrace";

void HeapTrace::update() {
  ESP_LOGI(TAG, "D-%u I-%u 8-%u bytes", heap_caps_get_free_size(MALLOC_CAP_DEFAULT),
           heap_caps_get_free_size(MALLOC_CAP_INTERNAL), heap_caps_get_free_size(MALLOC_CAP_8BIT));
}
}  // namespace heap_trace
}  // namespace esphome
