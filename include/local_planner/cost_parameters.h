#pragma once

namespace avoidance {

struct costParameters {
  float yaw_cost_param = 8.0f;
  float pitch_cost_param = 100.f;
  float velocity_cost_param = 8000.f;
  float obstacle_cost_param = 0.5f;
};
}
