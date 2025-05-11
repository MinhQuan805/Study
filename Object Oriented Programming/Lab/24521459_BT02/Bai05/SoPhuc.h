#pragma once
#include <iostream>

using namespace std;

class CSoPhuc {
private:
    float thuc;
    float ao;
public:
    void Nhap();
    void Xuat();
    void Tong(CSoPhuc);
    void Hieu(CSoPhuc);
    void Tich(CSoPhuc);
    void Thuong(CSoPhuc);
};