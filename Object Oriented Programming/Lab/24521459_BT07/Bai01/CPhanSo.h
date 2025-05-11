#pragma once
#include <iostream>
using namespace std;

class CPhanSo {
private:
    int tu, mau;
public:
    CPhanSo(int tu = 0, int mau = 1);
    void Nhap();
    void RutGon();
    bool operator==(const CPhanSo&);
    bool operator>(const CPhanSo&);
    bool operator<(const CPhanSo&);
    bool operator>=(const CPhanSo&);
    bool operator<=(const CPhanSo&);
    bool operator!=(const CPhanSo&);
    void Xuat();
};