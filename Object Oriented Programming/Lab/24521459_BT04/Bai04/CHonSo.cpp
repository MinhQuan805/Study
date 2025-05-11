#include "CHonSo.h"

istream& operator>>(istream& is, CHonSo& X)
{
    cout << "Nhap phan nguyen: ";
    is >> X.nguyen;
    cout << "Nhap tu: ";
    is >> X.tu;
    cout << "Nhap mau: ";
    is >> X.mau;
    return is;
}
ostream& operator<<(ostream& os, CHonSo& X) {
    os << "Hon So = " << X.nguyen << " " << X.tu << "/" << X.mau << endl;
    return os;
}

CHonSo::CHonSo() {
    nguyen = 0;
    tu = 0;
    mau = 1;
    cout << "Phuong thuc khoi tao mac dinh\n";
}

CHonSo::CHonSo(int a, int b, int c) {
    nguyen = a;
    tu = a;
    mau = (c == 0) ? 1 : c;
    cout << "Phuong thuc thiet lap khi biet dang thong tin cua doi tuong\n";
}

CHonSo::CHonSo(const CHonSo& k) {
    nguyen = k.nguyen;
    tu = k.tu;
    mau = k.mau;
    cout << "Phuong thuc sao chep thong tin tu doi tuong khac\n";
}

CHonSo::~CHonSo() {
    cout << "Phuong thuc pha huy\n";
}
