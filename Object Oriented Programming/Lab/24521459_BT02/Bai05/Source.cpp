#include "SoPhuc.h"

int main() {
    CSoPhuc a, b;
    cout << "Nhap so phuc thu nhat" << endl;
    a.Nhap();
    cout << "Nhap so phuc thu hai" << endl;
    b.Nhap();
    cout << endl;
    cout << "So Phuc Thu Nhat: ";
    a.Xuat();
    cout << "So Phuc Thu Hai: ";
    b.Xuat();
    cout << endl;
    a.Tong(b);
    a.Hieu(b);
    a.Tich(b);
    a.Thuong(b);
}