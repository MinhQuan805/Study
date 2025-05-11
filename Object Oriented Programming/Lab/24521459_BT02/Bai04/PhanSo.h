#pragma once
#include <iostream>
#include <cmath>

using namespace std;

class CPhanSo {
private:
    int tu;
    int mau;
public:
    int UCLN(int a, int b);
    void RutGon();
    void Nhap();
    void Xuat();
    void Tong(CPhanSo a);
    void Hieu(CPhanSo a);
    void Tich(CPhanSo a);
    void Thuong(CPhanSo a);
};