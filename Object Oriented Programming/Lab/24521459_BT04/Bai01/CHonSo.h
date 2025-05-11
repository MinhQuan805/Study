#pragma once
#include <iostream>
#include "CPhanSo.h"
using namespace std;

class CHonSo {
private:
    int nguyen;
    CPhanSo PS;
public:
    CHonSo();
    CHonSo(int a, CPhanSo AB);
    CHonSo(const CHonSo& k);
    ~CHonSo();
};
