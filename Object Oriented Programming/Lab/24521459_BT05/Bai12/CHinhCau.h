#pragma once
#include <iostream>
using namespace std;

class CHinhCau {
private:
    int x, y, z, r;
public:
    CHinhCau(int x = 0, int y = 0, int z = 0, int r = 1);
    CHinhCau& operator=(const CHinhCau&);
    void Xuat();
};
