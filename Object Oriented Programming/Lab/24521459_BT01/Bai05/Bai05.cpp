#include <iostream>
using namespace std;
struct SoPhuc
{
    float thuc;
    float ao;
};

void Nhap(SoPhuc &);
void Xuat(SoPhuc);
void Tong(SoPhuc, SoPhuc);
void Hieu(SoPhuc, SoPhuc);
void Tich(SoPhuc, SoPhuc);
void Thuong(SoPhuc, SoPhuc);

int main()
{
    SoPhuc a, b;
    Nhap(a);
    Nhap(b);
    Xuat(a);
    Xuat(b);
    Tong(a, b);
    Hieu(a, b);
    Tich(a, b);
    Thuong(a, b);
}

void Nhap(SoPhuc &x)
{
    cout << "Nhap phan thuc: ";
    cin >> x.thuc;
    cout << "Nhap phan ao: ";
    cin >> x.ao;
}
void Xuat(SoPhuc x)
{
    if (x.ao >= 0)
        cout << x.thuc << " + " << x.ao << "i" << endl;
    else
        cout << x.thuc << " - " << -x.ao << "i" << endl;
}

void Tong(SoPhuc a, SoPhuc b)
{
    SoPhuc result;
    result.thuc = a.thuc + b.thuc;
    result.ao = a.ao + b.ao;
    cout << "Tong: ";
    Xuat(result);
}
void Hieu(SoPhuc a, SoPhuc b)
{
    SoPhuc result;
    result.thuc = a.thuc - b.thuc;
    result.ao = a.ao - b.ao;
    cout << "Hieu: ";
    Xuat(result);
}

void Tich(SoPhuc a, SoPhuc b)
{
    SoPhuc result;
    result.thuc = a.thuc * b.thuc - a.ao * b.ao;
    result.ao = a.thuc * b.ao + a.ao * b.thuc;
    cout << "Tich: ";
    Xuat(result);
}

void Thuong(SoPhuc a, SoPhuc b)
{
    SoPhuc result;
    result.thuc = (a.thuc * b.thuc + a.ao * b.ao) / (b.thuc * b.thuc + b.ao * b.ao);
    result.ao = (a.ao * b.thuc - a.thuc * b.ao) / (b.thuc * b.thuc + b.ao * b.ao);
    cout << "Thuong: ";
    Xuat(result);
}
