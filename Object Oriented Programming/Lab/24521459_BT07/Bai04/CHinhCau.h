#pragma once
#include "CDiem.h"
using namespace std;

class CHinhCau {
private:
    CDiem I;
    int r;
public:
    CHinhCau(CDiem I = CDiem(), int r = 1);
    bool operator==(const CHinhCau&);
    bool operator!=(const CHinhCau&);
};
