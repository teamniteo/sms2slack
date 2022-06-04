#pragma once

#include "esphome/core/component.h"
#include "esp_heap_caps.h"

namespace esphome {
namespace heap_trace {
  
class HeapTrace  : public PollingComponent {
 public:
  void update() override;
};

}  // namespace heap_trace
}  // namespace esphome

