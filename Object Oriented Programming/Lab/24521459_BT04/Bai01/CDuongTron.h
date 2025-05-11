#pragma once
#include <iostream>
using namespace std;

class CDuongTron {
private:
    float x;
    float y;
    float r;
public:
    CDuongTron();
    CDuongTron(float x, float y, float r);
    CDuongTron(const CDuongTron& A);
    ~CDuongTron();
};
