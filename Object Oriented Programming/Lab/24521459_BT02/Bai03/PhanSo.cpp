#include "PhanSo.h"

int CPhanSo::SoLonNhat(CPhanSo& PS) {
    if (this->tu * PS.mau > PS.tu * this->mau)
        return 1;
    else if (this->tu * PS.mau < PS.tu * this->mau)
        return 2;
    else
        return 0;
}

void CPhanSo::Nhap() {
    cout << "Nhap tu so: ";
    cin >> tu;
    cout << "Nhap mau so: ";
    cin >> mau;
}
void CPhanSo::Xuat() {
    cout << tu << "/" << mau << endl;
}