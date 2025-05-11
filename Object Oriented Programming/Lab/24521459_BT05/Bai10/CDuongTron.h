#pragma once
#include <iostream>
using namespace std;

class CDuongTron {
private:
    int x, y, r;
public:
    CDuongTron(int x = 0, int y = 0, int r = 1);
    CDuongTron& operator=(const CDuongTron&);
    void Xuat();
};
