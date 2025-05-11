#pragma once
#include <iostream>
using namespace std;

class CDiemKhongGian {
private:
    int x, y, z;
public:
    CDiemKhongGian(int x = 0, int y = 0, int z = 0);
    bool operator==(const CDiemKhongGian&);
    bool operator!=(const CDiemKhongGian&);
};
