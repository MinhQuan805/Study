#include "CDuongThang.h"

CDuongThang::CDuongThang(int a, int b) : a(a), b(b) {}

CDuongThang& CDuongThang::operator=(const CDuongThang& dt) {
    if (this != &dt) {
        a = dt.a;
        b = dt.b;
    }
    return *this;
}

void CDuongThang::Xuat() {
    if (b > 0)
        cout << "y = " << a << "x + " << b << endl;
    else if (b < 0)
        cout << "y = " << a << "x - " << -b << endl;
    else if (b == 0)
        cout << "y = " << a << endl;
}
