#pragma once
#include <iostream>
using namespace std;

class CDiemKhongGian {
private:
    int x, y, z;
public:
    CDiemKhongGian(int x = 0, int y = 0, int z = 0);
    CDiemKhongGian& operator=(const CDiemKhongGian&);
    void Xuat();
};
