#pragma once
#include <iostream>
using namespace std;

class CDuongThang {
private:
    float a;
    float b;
    float c;
public:
    CDuongThang();
    CDuongThang(float aa, float bb, float cc);
    CDuongThang(const CDuongThang& dt);
    ~CDuongThang();
};