#include "CDiemKhongGian.h"

CDiemKhongGian::CDiemKhongGian(int x, int y, int z) : x(x), y(y), z(z) {}

CDiemKhongGian& CDiemKhongGian::operator=(const CDiemKhongGian& d) {
    if (this != &d) {
        x = d.x;
        y = d.y;
        z = d.z;
    }
    return *this;
}

void CDiemKhongGian::Xuat() {
    cout << "(" << x << ", " << y << ", " << z << ")" << endl;
}
