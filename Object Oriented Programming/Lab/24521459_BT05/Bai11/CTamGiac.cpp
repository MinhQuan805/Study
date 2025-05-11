#include "CTamGiac.h"

CTamGiac::CTamGiac(int a, int b, int c) : a(a), b(b), c(c) {}

CTamGiac& CTamGiac::operator=(const CTamGiac& t) {
    if (this != &t) {
        a = t.a;
        b = t.b;
        c = t.c;
    }
    return *this;
}

void CTamGiac::Xuat() {
    cout << a << ", " << b << ", " << c << endl;
}
