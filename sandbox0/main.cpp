#include <iostream>
#include "math.h"



/*
class person {
    public:
        std::string name;
}
*/

int main() {
    math::EllipticCurve* curve0 = new math::EllipticCurve;
    math::EllipticCurve curve1 = math::EllipticCurve(3, 2, 3);
    math::EllipticCurve curve2 = math::EllipticCurve(curve1);
    std::cout << math::add(1, 2) << std::endl;
    std::cout << curve1.a << std::endl;
    std::cout << curve2.a << std::endl;
    return 0;
}

