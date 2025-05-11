#include "PhanSo.h"

int main() {
    CPhanSo PS1;
    CPhanSo PS2;
    cout << "Nhap Phan So Thu Nhat" << endl;
    PS1.Nhap();
    cout << "Nhap Phan So Thu Hai" << endl;
    PS2.Nhap();
    int result = PS1.SoLonNhat(PS2);
    cout << endl;
    cout << "Phan so thu nhat la: ";
    PS1.Xuat();
    cout << "Phan so thu hai la: ";
    PS2.Xuat();
    cout << endl;
    switch (result) {
    case 1:
        cout << "Phan so lon nhat la: ";
        PS1.Xuat();
        break;
    case 2:
        cout << "Phan so lon nhat la: ";
        PS2.Xuat();
        break;
    case 0:
        cout << "Hai Phan So Bang Nhau" << endl;
        break;
    }
}