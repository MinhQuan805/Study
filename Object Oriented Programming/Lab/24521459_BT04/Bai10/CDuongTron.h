#pragma once
#include <iostream>
using namespace std;

class CDuongTron {
private:
    float x;
    float y;
    float r;
public:
    friend istream& operator>>(istream&, CDuongTron&);
    friend ostream& operator<<(ostream&, const CDuongTron&);

    CDuongTron();
    CDuongTron(float, float, float);
    CDuongTron(const CDuongTron&);
    ~CDuongTron();
};