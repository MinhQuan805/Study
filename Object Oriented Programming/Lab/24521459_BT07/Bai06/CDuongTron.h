#pragma once
#include <iostream>
using namespace std;

class CDuongTron {
private:
    float r;
public:
    CDuongTron(float r = 0);
    float DienTich() const;
    bool operator==(const CDuongTron& O);
    bool operator!=(const CDuongTron& O);
    bool operator>(const CDuongTron& O);
    bool operator<(const CDuongTron& O);
    bool operator>=(const CDuongTron& O);
    bool operator<=(const CDuongTron& O);
    friend istream& operator>>(istream& is, CDuongTron&);
    friend ostream& operator<<(ostream& os, const CDuongTron&);
};