#pragma once
#include <iostream>
#include <cmath>
using namespace std;

class CDiem {
private:
    float x, y;
public:
    CDiem(float x = 0, float y = 0);
    float KhoangCach() const;
    bool operator==(const CDiem&) const;
    bool operator!=(const CDiem&) const;
    bool operator>(const CDiem&) const;
    bool operator<(const CDiem&) const;
    bool operator>=(const CDiem&) const;
    bool operator<=(const CDiem&) const;
    void Nhap();
    void Xuat();
};
