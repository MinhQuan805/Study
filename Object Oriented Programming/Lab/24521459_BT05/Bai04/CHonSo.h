#pragma once
#include <iostream>
using namespace std;

class CHonSo {
private:
    int nguyen, tu, mau;
public:
    CHonSo(int nguyen = 0, int tu = 0, int mau = 1);
    CHonSo& operator=(const CHonSo&);
    void Xuat();
};
