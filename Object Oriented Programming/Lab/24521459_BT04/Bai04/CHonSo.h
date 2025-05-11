#pragma once
#include <iostream>
#include "CHonSo.h"
using namespace std;

class CHonSo {
private:
    int nguyen;
    int tu;
    int mau;
public:
    friend istream& operator>>(istream& is, CHonSo& X);
    friend ostream& operator<<(ostream& os, CHonSo& X);
    CHonSo();
    CHonSo(int, int, int);
    CHonSo(const CHonSo&);
    ~CHonSo();
};