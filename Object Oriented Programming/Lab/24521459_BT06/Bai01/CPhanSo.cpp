#include "CPhanSo.h"

int UCLN(int a, int b)
{
    if (a == 0 || b == 0)
    {
        return a + b;
    }
    int min = a < b ? a : b;
    for (int i = min; i >= 1; i--)
    {
        if (a % i == 0 && b % i == 0)
        {
            return i;
        }
    }
    return 1;
}

void CPhanSo::RutGon()
{
    int ucln = UCLN(tu, mau);
    tu /= ucln;
    mau /= ucln;
    if (mau < 0)
    {
        tu = -tu;
        mau = -mau;
    }
}
CPhanSo::CPhanSo(int tu, int mau) : tu(tu), mau(mau == 0 ? 1 : mau) {}

CPhanSo CPhanSo::operator+(const CPhanSo &PS)
{
    CPhanSo kq;
    kq.tu = tu * PS.mau + PS.tu * mau;
    kq.mau = mau * PS.mau;
    return kq;
}
CPhanSo CPhanSo::operator-(const CPhanSo &PS)
{
    CPhanSo kq;
    kq.tu = tu * PS.mau - PS.tu * mau;
    kq.mau = mau * PS.mau;
    return kq;
}
CPhanSo CPhanSo::operator*(const CPhanSo &PS)
{
    CPhanSo kq;
    kq.tu = tu * PS.tu;
    kq.mau = mau * PS.mau;
    return kq;
}
CPhanSo CPhanSo::operator/(const CPhanSo &PS)
{
    CPhanSo kq;
    kq.tu = tu * PS.mau;
    kq.mau = mau * PS.tu;
    return kq;
}

CPhanSo &CPhanSo::operator+=(const CPhanSo &PS)
{
    tu = tu * PS.mau + mau * PS.tu;
    mau = mau * PS.mau;
    return *this;
}
CPhanSo &CPhanSo::operator-=(const CPhanSo &PS)
{
    tu = tu * PS.mau - mau * PS.tu;
    mau = mau * PS.mau;
    return *this;
}
CPhanSo &CPhanSo::operator*=(const CPhanSo &PS)
{
    tu = tu * PS.tu;
    mau = mau * PS.mau;
    return *this;
}
CPhanSo &CPhanSo::operator/=(const CPhanSo &PS)
{
    tu = tu * PS.mau;
    mau = mau * PS.tu;
    return *this;
}

CPhanSo &CPhanSo::operator++()
{
    *this += CPhanSo(1);
    return *this;
}
CPhanSo CPhanSo::operator++(int)
{
    CPhanSo kq = *this;
    ++(*this);
    return kq;
}
CPhanSo &CPhanSo::operator--()
{
    tu -= mau;
    return *this;
}
CPhanSo CPhanSo::operator--(int)
{
    CPhanSo kq = *this;
    --(*this);
    return kq;
}
istream& operator>>(istream& is, CPhanSo& PS) {
    cout << "Nhap tu so: ";
    is >> PS.tu;
    do {
        cout << "Nhap mau so (khac 0): ";
        is >> PS.mau;
    } while (PS.mau == 0);
    return is;
}

ostream& operator<<(ostream& os, const CPhanSo& PS) {
    CPhanSo temp = PS;
    temp.RutGon();
    os << temp.tu << "/" << temp.mau << endl;
    return os;
}
