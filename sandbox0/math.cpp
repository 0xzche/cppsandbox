#include "math.h"

namespace math {
int add(int x, int y) {
    return x + y;
}

EllipticCurve::EllipticCurve() {
    p = 2;
    a = 3;
    b = 0;
}

EllipticCurve::EllipticCurve(int p_, int a_, int b_) {
    p = p_;
    a = a_;
    b = b_;
}

EllipticCurve::EllipticCurve(const EllipticCurve & curve1) {
    p = curve1.p;
    a = 10000;
    b = 10000;
}
}
