#include "CTamGiac.h"

istream& operator>>(istream& is, CTamGiac& X) {
    cout << "Nhap diem A:\n";
    is >> X.A;
    cout << "Nhap diem B:\n";
    is >> X.B;
    cout << "Nhap diem C:\n";
    is >> X.C;
    return is;
}

ostream& operator<<(ostream& os, CTamGiac& X) {
    os << "Tam giac co 3 dinh la\n";
    os << "Diem A: " << X.A << endl;
    os << "Diem B: " << X.B << endl;
    os << "Diem C: " << X.C << endl;
    return os;
}

CTamGiac::CTamGiac() : A(), B(), C() {
    cout << "Phuong thuc khoi tao mac dinh\n";
}

CTamGiac::CTamGiac(const CDiem& A1, const CDiem& B1, const CDiem& C1)
    : A(A1), B(B1), C(C1) {
    cout << "Phuong thuc thiet lap khi biet dang thong tin cua doi tuong\n";
}

CTamGiac::CTamGiac(const CTamGiac& X)
    : A(X.A), B(X.B), C(X.C) {
    cout << "Phuong thuc sao chep thong tin tu doi tuong khac\n";
}

CTamGiac::~CTamGiac() {
    cout << "Phuong thuc pha huy\n";
}
