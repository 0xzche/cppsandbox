#pragma once

namespace math {

int add(int x, int y);

class EllipticCurve {
 public:
    EllipticCurve();
    EllipticCurve(int p, int a, int b);
    EllipticCurve(const EllipticCurve&);
    EllipticCurve& operator=(const EllipticCurve&);
    int p;
    int a;
    int b;

 private:
    int something;
};
}  // namespace math
