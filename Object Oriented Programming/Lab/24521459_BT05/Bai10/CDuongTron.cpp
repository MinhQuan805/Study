#include "CDuongTron.h"

CDuongTron::CDuongTron(int x, int y, int r) : x(x), y(y), r(r) {}

CDuongTron& CDuongTron::operator=(const CDuongTron& d) {
    if (this != &d) {
        x = d.x;
        y = d.y;
        r = d.r;
    }
    return *this;
}

void CDuongTron::Xuat() {
    cout << "Tam: (" << x << ", " << y << "), Ban kinh: " << r << endl;
}
