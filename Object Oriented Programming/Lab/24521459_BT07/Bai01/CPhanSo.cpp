#include "CPhanSo.h"

CPhanSo::CPhanSo(int tu, int mau) : tu(tu), mau(mau == 0 ? 1 : mau) {}

int UCLN(int a, int b) {
    if (a == 0 || b == 0) {
        return a + b;
    }
    int min = a < b ? a : b;
    for (int i = min; i >= 1; i--) {
        if (a % i == 0 && b % i == 0) {
            return i;
        }
    }
    return 1;
}

void CPhanSo::RutGon() {
    int ucln = UCLN(tu, mau);
    tu /= ucln;
    mau /= ucln;
    if (mau < 0) {
        tu = -tu;
        mau = -mau;
    }
}

bool CPhanSo::operator==(const CPhanSo& PS) {
    float Tu = (float)tu / mau;
    float Mau = (float)PS.tu / PS.mau;
    if (Tu == Mau)
        return true;
    return false;
}
bool CPhanSo::operator>(const CPhanSo& PS) {
    float Tu = (float)tu / mau;
    float Mau = (float)PS.tu / PS.mau;
    if (Tu > Mau)
        return true;
    return false;
}
bool CPhanSo::operator<(const CPhanSo& PS) {
    float Tu = (float)tu / mau;
    float Mau = (float)PS.tu / PS.mau;
    if (Tu < Mau)
        return true;
    return false;
}
bool CPhanSo::operator>=(const CPhanSo& PS) {
    float Tu = (float)tu / mau;
    float Mau = (float)PS.tu / PS.mau;
    if (Tu >= Mau)
        return true;
    return false;
}
bool CPhanSo::operator<=(const CPhanSo& PS) {
    float Tu = (float)tu / mau;
    float Mau = (float)PS.tu / PS.mau;
    if (Tu <= Mau)
        return true;
    return false;
}
bool CPhanSo::operator!=(const CPhanSo& PS) {
    float Tu = (float)tu / mau;
    float Mau = (float)PS.tu / PS.mau;
    if (Tu != Mau)
        return true;
    return false;
}
istream& operator>>(istream& is, CPhanSo& PS) {
    cout << "Nhap tu so: ";
    is >> PS.tu;
    do {
        cout << "Nhap mau so (khac 0): ";
        is >> PS.mau;
    } while (PS.mau == 0);
    return is;
}

ostream& operator<<(ostream& os, const CPhanSo& PS) {
    CPhanSo temp = PS;
    temp.RutGon();
    os << temp.tu << "/" << temp.mau << endl;
    return os;
}
