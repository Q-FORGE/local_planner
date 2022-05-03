#pragma once

namespace avoidance {

struct costParameters {
  float yaw_cost_param = 8.0f;
  float pitch_cost_param = 100.f;
  float velocity_cost_param = 800.f; // was 8000 JE
  float obstacle_cost_param = 1.0f; // was 0.5
};
}
