#pragma once

#include "Base.h"

MATH_FUNCTION_RETURN_VALUE_TYPE linearFunction(const double& k,
    const double& b = 0,
    const double& x = 0
);

MATH_FUNCTION_RETURN_VALUE_TYPE quadraticFunction(const double& a,
    const double& b = 0,
    const double& c = 0,
    const double& x = 0
);

MATH_FUNCTION_RETURN_VALUE_TYPE quadraticFunction_Vertex(const double& a,
    const double& h = 0,
    const double& k = 0,
    const double& x = 0
);

MATH_FUNCTION_RETURN_VALUE_TYPE inverseProportionalFunction(const double& k,
    const double& x = 0
);
