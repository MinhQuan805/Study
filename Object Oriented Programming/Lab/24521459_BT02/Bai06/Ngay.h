#pragma once
#include <iostream>
#include <cmath>

using namespace std;

class CNgay {
private:
    int ngay, thang, nam;
public:
    CNgay();
    CNgay(int d, int m, int y);
    void Nhap();
    void Xuat();
    static bool NamNhuan(int);
    long SoThuTu();
    CNgay TimNgay(long);
    CNgay NgayMai();
};