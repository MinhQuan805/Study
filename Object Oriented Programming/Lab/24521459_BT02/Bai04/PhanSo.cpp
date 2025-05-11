#include "PhanSo.h"

int CPhanSo::UCLN(int a, int b) {
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
void CPhanSo::RutGon() {
    int uoc = UCLN(abs(tu), abs(mau));
    tu /= uoc;
    mau /= uoc;

    if (mau < 0)
    {
        tu = -tu;
        mau = -mau;
    }
}
void CPhanSo::Nhap() {
    cout << "Nhap tu so: ";
    cin >> tu;
    do
    {
        cout << "Nhap mau so: ";
        cin >> mau;
        if (mau == 0)
        {
            cout << "Mau so khong duoc bang 0." << endl;
        }
    } while (mau == 0);
}
void CPhanSo::Xuat() {
    if (mau == 1)
    {
        cout << tu << endl;
    }
    else
    {
        cout << tu << "/" << mau << endl;
    }
}
void CPhanSo::Tong(CPhanSo a) {
    CPhanSo result;
    result.tu = a.tu * mau + tu * a.mau;
    result.mau = a.mau * mau;
    result.RutGon();
    cout << "Tong: ";
    result.Xuat();
}
void CPhanSo::Hieu(CPhanSo a) {
    CPhanSo result;
    result.tu = a.tu * mau - tu * a.mau;
    result.mau = a.mau * mau;
    result.RutGon();
    cout << "Hieu: ";
    result.Xuat();
}
void CPhanSo::Tich(CPhanSo a) {
    CPhanSo result;
    result.tu = a.tu * tu;
    result.mau = a.mau * mau;
    result.RutGon();
    cout << "Tich: ";
    result.Xuat();
}
void CPhanSo::Thuong(CPhanSo a) {
    if (tu == 0)
    {
        cout << "Khong the chia cho 0" << endl;
        return;
    }
    CPhanSo result;
    result.tu = a.tu * mau;
    result.mau = a.mau * tu;
    result.RutGon();
    cout << "Thuong: ";
    result.Xuat();
}
