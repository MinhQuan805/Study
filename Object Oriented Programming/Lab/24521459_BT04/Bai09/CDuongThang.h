#pragma once
#include <iostream>
using namespace std;

class CDuongThang {
private:
    float a;
    float b;
    float c;
public:
    friend istream& operator>>(istream&, CDuongThang&);
    friend ostream& operator<<(ostream&, const CDuongThang&);

    CDuongThang();
    CDuongThang(float, float, float);
    CDuongThang(const CDuongThang&);
    ~CDuongThang();
};
