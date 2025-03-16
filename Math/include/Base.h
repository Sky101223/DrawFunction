#pragma once

#include <graphics.h>
#include <easyx.h>
#include <iostream>

#include <stdint.h>
#include <float.h>
#include <assert.h>
#include <cmath>

constexpr int32_t WIDTH = 800;
constexpr int32_t HEIGHT = 600;
constexpr int32_t HALF_WIDTH = WIDTH / 2;
constexpr int32_t HALF_HEIGHT = HEIGHT / 2;
constexpr double_t SCALE = 10.0;

using MATH_FUNCTION_RETURN_VALUE_TYPE = double;
using DRAW_FUNCTION_NO_RETURN = void;

#define LOG(message) std::cout << message << std::endl