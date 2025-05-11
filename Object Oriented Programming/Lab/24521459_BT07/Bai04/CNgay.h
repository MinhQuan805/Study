#pragma once
#include <iostream>
using namespace std;

class CNgay {
private:
    int day, month, year;
public:
    CNgay(int day = 1, int month = 1, int year = 1);
    bool operator==(const CNgay&) const;
    bool operator!=(const CNgay&) const;
};
