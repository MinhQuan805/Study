#include "CHinhCau.h"

CHinhCau::CHinhCau(int x, int y, int z, int r) : x(x), y(y), z(z), r(r) {}

CHinhCau& CHinhCau::operator=(const CHinhCau& h) {
    if (this != &h) {
        x = h.x;
        y = h.y;
        z = h.z;
        r = h.r;
    }
    return *this;
}

void CHinhCau::Xuat() {
    cout << "Tam: (" << x << ", " << y << ", " << z << "), Ban kinh: " << r << endl;
}
