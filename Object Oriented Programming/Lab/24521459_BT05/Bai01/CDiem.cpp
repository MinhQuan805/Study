#include "CDiem.h"

CDiem::CDiem(int x, int y) : x(x), y(y) {}

CDiem& CDiem::operator=(const CDiem& d) {
    if (this != &d) {
        x = d.x;
        y = d.y;
    }
    return *this;
}

void CDiem::Xuat() {
    cout << "(" << x << ", " << y << ")" << endl;
}
