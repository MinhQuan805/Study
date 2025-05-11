#include "CDuongThang.h"

CDuongThang::CDuongThang() {
    a = 0.0f;
    b = 0.0f;
    c = 0.0f;
    cout << "Phuong thuc khoi tao mac dinh\n";
}

CDuongThang::CDuongThang(float aa, float bb, float cc) {
    a = aa;
    b = bb;
    c = cc;
    cout << "Phuong thuc thiet lap khi biet dang thong tin cua doi tuong\n";
}

CDuongThang::CDuongThang(const CDuongThang& dt) {
    a = dt.a;
    b = dt.b;
    c = dt.c;
    cout << "Phuong thuc sao chep thong tin tu doi tuong khac\n";
}

CDuongThang::~CDuongThang() {
    cout << "Phuong thuc pha huy\n";
}
