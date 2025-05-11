#pragma once
#include <iostream>
using namespace std;

class CDonThuc {
private:
    int so;
    int mu;
public:
    friend istream& operator>>(istream&, CDonThuc&);
    friend ostream& operator<<(ostream&, CDonThuc&);
    CDonThuc();
    CDonThuc(int, int);
    CDonThuc(const CDonThuc&);
    ~CDonThuc();
};
