#pragma once

#include <graphics.h>
#include <easyx.h>
#include <iostream>

#include <stdint.h>
#include <float.h>
#include <assert.h>
#include <cmath>

#define WIDTH			800
#define HEIGHT			600
#define HALF_WIDTH		400
#define HALF_HEIGHT		300

extern DOUBLE SCALE;

typedef VOID			EMPTY_PARAMETER_LIST, DRAW_FUNCTION_NO_RETURN;
typedef DOUBLE			MATH_FUNCTION_RETURN_VALUE_TYPE;

#define LOG(message) std::cout << message << std::endl

VOID g_setScale(CONST DOUBLE& _value);