#pragma once
#include <iostream>
using namespace std;

class CDuongThang {
private:
    int a, b;
public:
    CDuongThang(int a = 0, int b = 0);
    CDuongThang& operator=(const CDuongThang&);
    void Xuat();
};
