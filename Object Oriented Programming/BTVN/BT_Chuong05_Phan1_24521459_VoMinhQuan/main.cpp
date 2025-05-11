#include <iostream>

using namespace std;
class CPhanSo
{
private:
    int Tu;
    int Mau;

public:
    CPhanSo()
    {
        Tu = 0;
        Mau = 1;
    }
    CPhanSo(int _Tu, int _Mau)
    {
        Tu = _Tu;
        Mau = _Mau;
    }
    void RutGon()
    {
        int a = abs(Tu), b = abs(Mau), r;
        while (b != 0)
        {
            r = a % b;
            a = b;
            b = r;
        }
        Tu /= a;
        Mau /= a;
        if (Mau < 0)
        {
            Tu = -Tu;
            Mau = -Mau;
        }
    }
    CPhanSo operator+(const CPhanSo &b)
    {
        CPhanSo a(Tu * b.Mau + b.Tu * Mau, Mau * b.Mau);
        a.RutGon();
        return a;
    }

    CPhanSo operator-(const CPhanSo &b)
    {
        CPhanSo a(Tu * b.Mau - b.Tu * Mau, Mau * b.Mau);
        a.RutGon();
        return a;
    }

    CPhanSo operator*(const CPhanSo &b)
    {
        CPhanSo a(Tu * b.Tu, Mau * b.Mau);
        a.RutGon();
        return a;
    }

    CPhanSo operator/(const CPhanSo &b)
    {
        CPhanSo a(Tu * b.Mau, Mau * b.Tu);
        a.RutGon();
        return a;
    }

    CPhanSo operator+(int x)
    {
        return *this + CPhanSo(x, 1);
    }

    CPhanSo operator-(int x)
    {
        return *this - CPhanSo(x, 1);
    }

    CPhanSo operator*(int x)
    {
        return *this * CPhanSo(x, 1);
    }

    CPhanSo operator/(int x)
    {
        return *this / CPhanSo(x, 1);
    }

    double operator+(double x)
    {
        return (double)Tu / Mau + x;
    }

    double operator-(double x)
    {
        return (double)Tu / Mau - x;
    }

    double operator*(double x)
    {
        return (double)Tu / Mau * x;
    }

    double operator/(double x)
    {
        return (double)Tu / Mau / x;
    }

    friend istream &operator>>(istream &, CPhanSo &);
    friend ostream &operator<<(ostream &, const CPhanSo &);
};
istream &operator>>(istream &is, CPhanSo &PS)
{
    cout << "Nhap tu: ";
    is >> PS.Tu;
    cout << "Nhap mau: ";
    is >> PS.Mau;
    return is;
}
ostream &operator<<(ostream &os, const CPhanSo &PS)
{
    if (PS.Tu == 0 || PS.Mau == 1)
        os << PS.Tu;
    else
        os << PS.Tu << "/" << PS.Mau;
    return os;
}
int main()
{
    CPhanSo PS, PS2;
    cout << "Nhap phan so thu nhat" << endl;
    cin >> PS;
    cout << endl;
    cout << "Nhap phan so thu hai" << endl;
    cin >> PS2;
    cout << endl;

    cout << "Cong phan so: " << PS + PS2 << endl;
    cout << "Tru phan so: " << PS - PS2 << endl;
    cout << "Nhan phan so: " << PS * PS2 << endl;
    cout << "Chia phan so: " << PS / PS2 << endl;
    cout << endl;

    int x;
    cout << "Nhap so nguyen: ";
    cin >> x;
    cout << "Cong so nguyen: " << PS + x << endl;
    cout << "Tru so nguyen: " << PS - x << endl;
    cout << "Nhan so nguyen: " << PS * x << endl;
    cout << "Chia so nguyen: " << PS / x << endl;
    cout << endl;

    double y;
    cout << "Nhap so thuc: ";
    cin >> y;
    cout << "Cong so thuc: " << PS + y << endl;
    cout << "Tru so thuc: " << PS - y << endl;
    cout << "Nhan so thuc: " << PS * y << endl;
    cout << "Chia so thuc: " << PS / y << endl;
    cout << endl;

    return 0;
}