#include "PhanSo.h"
void CPhanSo::Nhap() {
    cout << "Nhap tu so: ";
    cin >> tu;
    do {
        cout << "Nhap mau so: ";
        cin >> mau;
    } while (mau == 0);
}
void CPhanSo::Xuat() {
    cout << "Phan so la: " << tu << "/" << mau << endl;
}
int CPhanSo::XetAm() {
    if (tu * mau < 0)
        return -1;
    else if (tu * mau > 0)
        return 1;
    else
        return 0;
}