#include "math.h"
#include <iostream>

namespace math {
int add(int x, int y) {
    return x + y;
}

EllipticCurve::EllipticCurve() {
    std::cout << "default constructor called" << std::endl;
    p = 2;
    a = 3;
    b = 0;
}

EllipticCurve::EllipticCurve(int p_, int a_, int b_) {
    std::cout << "arg constructor called" << std::endl;
    p = p_;
    a = a_;
    b = b_;
}

EllipticCurve::EllipticCurve(const EllipticCurve & curve1) {
    std::cout << "copy constructor called" << std::endl;
    p = curve1.p;
    a = 10000;
    b = 10000;
}

EllipticCurve& EllipticCurve::operator=(const EllipticCurve & curve1) {
    std::cout << "copy assignment called" << std::endl;
    p = curve1.p;
    a = 333;
    b = 333;
    return *this;
}
}
