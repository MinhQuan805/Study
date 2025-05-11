#pragma once
#include <iostream>
#include <cmath>
using namespace std;

class CSoPhuc {
private:
    float thuc, ao;
public:
    CSoPhuc(float thuc = 0, float ao = 0);
    float MoDun() const;
    bool operator==(const CSoPhuc& sp);
    bool operator!=(const CSoPhuc& sp);
    bool operator>(const CSoPhuc& sp);
    bool operator<(const CSoPhuc& sp);
    bool operator>=(const CSoPhuc& sp);
    bool operator<=(const CSoPhuc& sp);
    void Xuat();
};