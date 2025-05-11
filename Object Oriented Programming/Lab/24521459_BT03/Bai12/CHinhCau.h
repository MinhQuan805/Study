#pragma once
#include <iostream>
using namespace std;

class CHinhCau {
private:
    float x, y, z;
    float r;
public:
    CHinhCau();
    CHinhCau(float xx, float yy, float zz, float radius);
    CHinhCau(const CHinhCau& hinhCau);
    ~CHinhCau();
};