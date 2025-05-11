#pragma once
#include <iostream>
using namespace std;

class CNgay {
private:
    int ngay, thang, nam;
public:
    CNgay(int ngay = 1, int thang = 1, int nam = 1);
    CNgay& operator=(const CNgay&);
    void Xuat();
};
