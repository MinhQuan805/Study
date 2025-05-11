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
void CPhanSo::Nhap() {
    cout << "Nhap Tu So: ";
    cin >> tu;
    do {
        cout << "Nhap Mau So: ";
        cin >> mau;
    } while (mau == 0);
}
void CPhanSo::Xuat() {
    cout << tu << "/" << mau << endl;
}
