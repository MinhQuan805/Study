#include "PhanSo.h"

int main()
{
    CPhanSo PS1, PS2;
    cout << "Nhap Phan So Thu Nhat" << endl;
    PS1.Nhap();
    cout << "Nhap Phan So Thu Hai" << endl;
    PS2.Nhap();
    cout << endl;
    cout << "Phan so thu nhat: ";
    PS1.Xuat();

    cout << "Phan so thu hai: ";
    PS2.Xuat();
    cout << endl;
    PS2.Tong(PS1);
    cout << endl;
    PS2.Hieu(PS1);
    cout << endl;
    PS2.Tich(PS1);
    cout << endl;
    PS2.Thuong(PS1);
}