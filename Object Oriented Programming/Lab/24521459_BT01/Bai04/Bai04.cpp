#include <iostream>
#include <cmath>

using namespace std;

struct PhanSo
{
    int tu, mau;
};

int UCLN(int a, int b);
void RutGon(PhanSo &PS);
void Nhap(PhanSo &PS);
void Xuat(const PhanSo &PS);
void Tong(PhanSo a, PhanSo b);
void Hieu(PhanSo a, PhanSo b);
void Tich(PhanSo a, PhanSo b);
void Thuong(PhanSo a, PhanSo b);

int main()
{
    PhanSo PS1, PS2;
    Nhap(PS1);
    Nhap(PS2);

    cout << "Phan so thu nhat: ";
    Xuat(PS1);

    cout << "Phan so thu hai: ";
    Xuat(PS2);

    Tong(PS1, PS2);
    Hieu(PS1, PS2);
    Tich(PS1, PS2);
    Thuong(PS1, PS2);
}

int UCLN(int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

void RutGon(PhanSo &PS)
{
    int uoc = UCLN(abs(PS.tu), abs(PS.mau));
    PS.tu /= uoc;
    PS.mau /= uoc;

    if (PS.mau < 0)
    {
        PS.tu = -PS.tu;
        PS.mau = -PS.mau;
    }
}

void Nhap(PhanSo &PS)
{
    cout << "Nhap tu so: ";
    cin >> PS.tu;
    do
    {
        cout << "Nhap mau so: ";
        cin >> PS.mau;
        if (PS.mau == 0)
        {
            cout << "Mau so khong duoc bang 0." << endl;
        }
    } while (PS.mau == 0);
}

void Xuat(const PhanSo &PS)
{
    if (PS.mau == 1)
    {
        cout << PS.tu << endl;
    }
    else
    {
        cout << PS.tu << "/" << PS.mau << endl;
    }
}

void Tong(PhanSo a, PhanSo b)
{
    PhanSo result;
    result.tu = a.tu * b.mau + b.tu * a.mau;
    result.mau = a.mau * b.mau;
    RutGon(result);
    cout << "Tong: ";
    Xuat(result);
}

void Hieu(PhanSo a, PhanSo b)
{
    PhanSo result;
    result.tu = a.tu * b.mau - b.tu * a.mau;
    result.mau = a.mau * b.mau;
    RutGon(result);
    cout << "Hieu: ";
    Xuat(result);
}

void Tich(PhanSo a, PhanSo b)
{
    PhanSo result;
    result.tu = a.tu * b.tu;
    result.mau = a.mau * b.mau;
    RutGon(result);
    cout << "Tich: ";
    Xuat(result);
}

void Thuong(PhanSo a, PhanSo b)
{
    if (b.tu == 0)
    {
        cout << "Khong the chia cho 0" << endl;
        return;
    }
    PhanSo result;
    result.tu = a.tu * b.mau;
    result.mau = a.mau * b.tu;
    RutGon(result);
    cout << "Thuong: ";
    Xuat(result);
}
