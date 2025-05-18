#pragma once
#include <iostream>
using namespace std;

class CPhanSo {
private:
    int tu, mau;
public:
    CPhanSo(int tu = 0, int mau = 1);
    void RutGon();
    friend istream& operator>>(istream&, CPhanSo&);
    friend ostream& operator<<(ostream&, const CPhanSo&);
    bool operator==(const CPhanSo&);
    bool operator>(const CPhanSo&);
    bool operator<(const CPhanSo&);
    bool operator>=(const CPhanSo&);
    bool operator<=(const CPhanSo&);
    bool operator!=(const CPhanSo&);
};