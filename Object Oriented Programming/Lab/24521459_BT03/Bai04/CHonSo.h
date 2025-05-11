#pragma once
#include <iostream>
#include "CHonSo.h"
using namespace std;

class CHonSo {
private:
    int nguyen;
    int tu;
    int mau;
public:
    CHonSo();
    CHonSo(int, int, int);
    CHonSo(const CHonSo&);
    ~CHonSo();
};