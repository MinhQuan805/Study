#pragma once
#include <iostream>
using namespace std;

class CHonSo {
private:
    int nguyen, tu, mau;
public:
    CHonSo(int tu = 0, int mau = 1);
    bool operator==(const CHonSo&);
    bool operator>(const CHonSo&);
    bool operator<(const CHonSo&);
    bool operator>=(const CHonSo&);
    bool operator<=(const CHonSo&);
    bool operator!=(const CHonSo&);
    friend istream& operator>>(istream& is, CHonSo&);
    friend ostream& operator<<(ostream& os, CHonSo&);
};