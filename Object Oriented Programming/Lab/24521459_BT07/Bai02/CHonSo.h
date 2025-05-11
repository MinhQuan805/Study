#pragma once
#include <iostream>
using namespace std;

class CHonSo {
private:
    int nguyen, tu, mau;
public:
    CHonSo(int tu = 0, int mau = 1);
    void Nhap();
    bool operator==(const CHonSo&);
    bool operator>(const CHonSo&);
    bool operator<(const CHonSo&);
    bool operator>=(const CHonSo&);
    bool operator<=(const CHonSo&);
    bool operator!=(const CHonSo&);
    void Xuat();
};