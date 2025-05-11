#pragma once
#include "CDiem.h"
using namespace std;

class CTamGiac {
private:
    CDiem A, B, C;
public:
    CTamGiac(CDiem A = CDiem(), CDiem B = CDiem(), CDiem C = CDiem());
    bool operator==(const CTamGiac&);
    bool operator!=(const CTamGiac&);
};
