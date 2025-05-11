#pragma once
#include <iostream>
using namespace std;

class CHinhCau {
private:
    float x, y, z;
    float r;
public:
    friend istream& operator>>(istream&, CHinhCau&);
    friend ostream& operator<<(ostream&, CHinhCau&);

    CHinhCau();
    CHinhCau(float, float, float, float);
    CHinhCau(const CHinhCau&);
    ~CHinhCau();

};
