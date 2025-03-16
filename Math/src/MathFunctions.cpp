#include "MathFunctions.h"

MATH_FUNCTION_RETURN_VALUE_TYPE linearFunction(const double& k,
    const double& b,
    const double& x
) {
    assert(k != 0.0f);
    return k * x + b;
}

MATH_FUNCTION_RETURN_VALUE_TYPE quadraticFunction(const double& a,
    const double& b,
    const double& c,
    const double& x
) {
    assert(a != 0.0f);
    return a * std::pow(x, 2) + b * x + c;
}

MATH_FUNCTION_RETURN_VALUE_TYPE quadraticFunction_Vertex(const double& a,
    const double& h,
    const double& k,
    const double& x
) {
    assert(a != 0.0f);
    return a * std::pow((x + h), 2) + k;
}

MATH_FUNCTION_RETURN_VALUE_TYPE inverseProportionalFunction(const double& k,
    const double& x
) {
    assert(k != 0);
    return k / x;
}
