#pragma once
#include <iostream>
using namespace std;

class CPhanSo {
private:
    int tu, mau;
public:
    CPhanSo(int tu = 0, int mau = 1);
    CPhanSo& operator=(const CPhanSo&);
    void Xuat();
};