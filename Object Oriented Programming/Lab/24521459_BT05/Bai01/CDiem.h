#pragma once
#include <iostream>
using namespace std;

class CDiem {
private:
    int x, y;
public:
    CDiem(int x = 0, int y = 0);
    CDiem& operator=(const CDiem&);
    void Xuat();
};
