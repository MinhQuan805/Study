#pragma once
#include <iostream>
using namespace std;

class CDonThuc {
private:
    int HeSo;
    int bac;
public:
    CDonThuc(int HeSo = 0, int bac = 0);
    CDonThuc& operator=(const CDonThuc&);
    void Xuat();
};
