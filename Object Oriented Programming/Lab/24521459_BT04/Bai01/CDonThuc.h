#pragma once
#include <iostream>
using namespace std;

class CDonThuc {
private:
    int so;
    int mu;
public:
    CDonThuc();
    CDonThuc(int heSo, int soMu);
    CDonThuc(const CDonThuc& dt);
    ~CDonThuc();
};
