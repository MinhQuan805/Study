#include "CTamGiac.h"

CTamGiac::CTamGiac() : A(), B(), C() {
    cout << "Phuong thuc khoi tao mac dinh\n";
}

CTamGiac::CTamGiac(const CDiem& A1, const CDiem& B1, const CDiem& C1)
    : A(A1), B(B1), C(C1) {
    cout << "Phuong thuc thiet lap khi biet dang thong tin cua doi tuong\n";
}

CTamGiac::CTamGiac(const CTamGiac& tg)
    : A(tg.A), B(tg.B), C(tg.C) {
    cout << "Phuong thuc sao chep thong tin tu doi tuong khac\n";
}

CTamGiac::~CTamGiac() {
    cout << "Phuong thuc pha huy\n";
}
