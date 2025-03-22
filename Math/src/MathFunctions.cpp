#include "MathFunctions.h"

MATH_FUNCTION_RETURN_VALUE_TYPE linearFunction(
    CONST DOUBLE& k,
    CONST DOUBLE& b,
    CONST DOUBLE& x
) {
    assert(k != 0.0f);
    return k * x + b;
}

MATH_FUNCTION_RETURN_VALUE_TYPE quadraticFunction(
    CONST DOUBLE& a,
    CONST DOUBLE& b,
    CONST DOUBLE& c,
    CONST DOUBLE& x
) {
    assert(a != 0.0f);
    return a * std::pow(x, 2) + b * x + c;
}

MATH_FUNCTION_RETURN_VALUE_TYPE quadraticFunction_Vertex(
    CONST DOUBLE& a,
    CONST DOUBLE& h,
    CONST DOUBLE& k,
    CONST DOUBLE& x
) {
    assert(a != 0.0f);
    return a * std::pow((x + h), 2) + k;
}

MATH_FUNCTION_RETURN_VALUE_TYPE inverseProportionalFunction(
    CONST DOUBLE& k,
    CONST DOUBLE& x
) {
    assert(k != 0);
    return k / x;
}
