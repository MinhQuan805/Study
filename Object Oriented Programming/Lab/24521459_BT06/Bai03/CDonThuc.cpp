#include "CDonThuc.h"
#include <iostream>
using namespace std;

CDonThuc::CDonThuc(double heSo, int soMu) : heSo(heSo), soMu(soMu) {}

CDonThuc CDonThuc::operator*(const CDonThuc& DT) {
    return CDonThuc(heSo * DT.heSo, soMu + DT.soMu);
}

CDonThuc CDonThuc::operator/(const CDonThuc& DT) {
    return CDonThuc(heSo / DT.heSo, soMu - DT.soMu);
}

CDonThuc& CDonThuc::operator*=(const CDonThuc& DT) {
    heSo *= DT.heSo;
    soMu += DT.soMu;
    return *this;
}

CDonThuc& CDonThuc::operator/=(const CDonThuc& DT) {
    heSo /= DT.heSo;
    soMu -= DT.soMu;
    return *this;
}

istream& operator>>(istream& is, CDonThuc& dt) {
    cout << "Nhap He So: ";
    is >> dt.heSo;
    cout << "Nhap So Mu: ";
    is >> dt.soMu;
    return is;
}

ostream& operator<<(ostream& os, const CDonThuc& dt) {
    if (dt.soMu == 0)
        os << dt.heSo;
    else if (dt.soMu == 1)
        os << dt.heSo << "x";
    else
        os << dt.heSo << "x^" << dt.soMu;
    return os;
}

