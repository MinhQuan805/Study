#pragma once
#include <iostream>

using namespace std;

class CDaThuc {
private:
    int n;
    float a[100];
public:
    friend istream& operator>>(istream&, CDaThuc&);
    friend ostream& operator<<(ostream&, const CDaThuc);

    void RutGon();
    

    CDaThuc operator+(const CDaThuc&);
    CDaThuc operator-(const CDaThuc&);
    CDaThuc operator*(const CDaThuc&);
    CDaThuc operator/(const CDaThuc&);

    CDaThuc& operator+=(const CDaThuc&);
    CDaThuc& operator-=(const CDaThuc&);
    CDaThuc& operator*=(const CDaThuc&);
    CDaThuc& operator/=(const CDaThuc&);
};
