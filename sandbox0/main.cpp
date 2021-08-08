#include <iostream>
#include "math.h"



int main() {
    math::EllipticCurve* curve0 = new math::EllipticCurve;
    math::EllipticCurve curve2 = math::EllipticCurve(*curve0);
    math::EllipticCurve curve1;
    curve1 = curve2;
    std::cout << math::add(1, 2) << std::endl;
    std::cout << curve1.a << std::endl;
    std::cout << curve2.a << std::endl;
    return 0;
}

