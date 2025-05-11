#include "CHinhCau.h"

CHinhCau::CHinhCau() {
    x = 0.0f;
    y = 0.0f;
    z = 0.0f;
    r = 1.0f;
    cout << "Phuong thuc khoi tao mac dinh\n";
}

CHinhCau::CHinhCau(float xx, float yy, float zz, float radius) {
    x = xx;
    y = yy;
    z = zz;
    r = radius;
    cout << "Phuong thuc thiet lap khi biet dang thong tin cua doi tuong\n";
}

CHinhCau::CHinhCau(const CHinhCau& hinhCau) {
    x = hinhCau.x;
    y = hinhCau.y;
    z = hinhCau.z;
    r = hinhCau.r;
    cout << "Phuong thuc sao chep thong tin tu doi tuong khac\n";
}

CHinhCau::~CHinhCau() {
    cout << "Phuong thuc pha huy\n";
}
