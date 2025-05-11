#include "SoPhuc.h"

void CSoPhuc::Nhap()
{
    cout << "Nhap phan thuc: ";
    cin >> thuc;
    cout << "Nhap phan ao: ";
    cin >> ao;
}
void CSoPhuc::Xuat()
{
    if (ao >= 0)
        cout << thuc << " + " << ao << "i" << endl;
    else
        cout << thuc << " - " << -ao << "i" << endl;
}

void CSoPhuc::Tong(CSoPhuc b)
{
    CSoPhuc result;
    result.thuc = this->thuc + b.thuc;
    result.ao = this->ao + b.ao;
    cout << "Tong: ";
    result.Xuat();
}
void CSoPhuc::Hieu(CSoPhuc b)
{
    CSoPhuc result;
    result.thuc = this->thuc - b.thuc;
    result.ao = this->ao - b.ao;
    cout << "Hieu: ";
    result.Xuat();
}

void CSoPhuc::Tich(CSoPhuc b)
{
    CSoPhuc result;
    result.thuc = this->thuc * b.thuc - this->ao * b.ao;
    result.ao = this->thuc * b.ao + this->ao * b.thuc;
    cout << "Tich: ";
    result.Xuat();
}

void CSoPhuc::Thuong(CSoPhuc b)
{
    CSoPhuc result;
    result.thuc = (this->thuc * b.thuc + this->ao * b.ao) / (b.thuc * b.thuc + b.ao * b.ao);
    result.ao = (this->ao * b.thuc - this->thuc * b.ao) / (b.thuc * b.thuc + b.ao * b.ao);
    cout << "Thuong: ";
    result.Xuat();
}