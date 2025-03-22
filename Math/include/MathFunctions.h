#pragma once

#include "Base.h"

MATH_FUNCTION_RETURN_VALUE_TYPE linearFunction(
    CONST DOUBLE& k,
    CONST DOUBLE& b = 0,
    CONST DOUBLE& x = 0
);

MATH_FUNCTION_RETURN_VALUE_TYPE quadraticFunction(
    CONST DOUBLE& a,
    CONST DOUBLE& b = 0,
    CONST DOUBLE& c = 0,
    CONST DOUBLE& x = 0
);

MATH_FUNCTION_RETURN_VALUE_TYPE quadraticFunction_Vertex(
    CONST DOUBLE& a,
    CONST DOUBLE& h = 0,
    CONST DOUBLE& k = 0,
    CONST DOUBLE& x = 0
);

MATH_FUNCTION_RETURN_VALUE_TYPE inverseProportionalFunction(
    CONST DOUBLE& k,
    CONST DOUBLE& x = 0
);
