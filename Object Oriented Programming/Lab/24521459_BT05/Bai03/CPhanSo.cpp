#include "CPhanSo.h"

CPhanSo::CPhanSo(int tu, int mau) : tu(tu), mau(mau == 0 ? 1 : mau) {}

CPhanSo& CPhanSo::operator=(const CPhanSo& PS) {
    if (this != &PS) {
        tu = PS.tu;
        mau = PS.mau;
    }
    return *this;
}

void CPhanSo::Xuat() {
    cout << tu << "/" << mau << endl;
}
