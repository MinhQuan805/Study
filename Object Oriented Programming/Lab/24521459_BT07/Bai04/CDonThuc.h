#pragma once
#include <iostream>
using namespace std;

class CDonThuc {
private:
    float heso;
    int mu;
public:
    CDonThuc(float heso = 0, int mu = 0);
    bool operator==(const CDonThuc&) const;
    bool operator!=(const CDonThuc&) const;
};
