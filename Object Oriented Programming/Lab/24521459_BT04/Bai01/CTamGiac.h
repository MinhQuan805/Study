#pragma once
#include "CDiem.h"
#include <iostream>
using namespace std;

class CTamGiac {
private:
    CDiem A;
    CDiem B;
    CDiem C;
public:
    CTamGiac();
    CTamGiac(const CDiem& A1, const CDiem& B1, const CDiem& C1);
    CTamGiac(const CTamGiac& tg);
    ~CTamGiac();
};
