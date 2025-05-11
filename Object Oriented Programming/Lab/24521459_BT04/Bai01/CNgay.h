#pragma once
#include <iostream>
using namespace std;

class CNgay {
private:
    int ngay;
    int thang;
    int nam;
public:
    CNgay();
    CNgay(int ngay, int thang, int nam);
    CNgay(const CNgay& ng);
    ~CNgay();
};
