#pragma once
#include <iostream>
using namespace std;

class CTamGiac {
private:
    int a, b, c;
public:
    CTamGiac(int a = 1, int b = 1, int c = 1);
    CTamGiac& operator=(const CTamGiac&);
    void Xuat();
};
