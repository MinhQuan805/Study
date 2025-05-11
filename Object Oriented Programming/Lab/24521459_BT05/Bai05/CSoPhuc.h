#pragma once
#include <iostream>
using namespace std;

class CSoPhuc {
private:
    double thuc, ao;
public:
    CSoPhuc(double thuc = 0, double ao = 0);
    CSoPhuc& operator=(const CSoPhuc&);
    void Xuat();
};
