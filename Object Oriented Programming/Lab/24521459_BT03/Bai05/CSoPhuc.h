#pragma once
#include <iostream>
using namespace std;

class CSoPhuc {
private:
    float thuc;
    float ao;
public:
    CSoPhuc();
    CSoPhuc(float a, float b);
    CSoPhuc(const CSoPhuc& sp);
    ~CSoPhuc();
};