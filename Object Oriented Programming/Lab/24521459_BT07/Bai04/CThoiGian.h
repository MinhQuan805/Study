#pragma once
#include <iostream>
using namespace std;

class CThoiGian {
private:
    int gio, phut, giay;
public:
    CThoiGian(int gio = 0, int phut = 0, int giay = 0);
    bool operator==(const CThoiGian&) const;
    bool operator!=(const CThoiGian&) const;
};
