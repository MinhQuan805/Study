#include "CPhanSo.h"

int main() {
    CPhanSo a, b;
    cout << "Nhap Phan So a" << endl;
    a.Nhap();
    cout << endl;
    cout << "Nhap Phan So b" << endl;
    b.Nhap();
    cout << endl;
    cout << "a = ";
    a.Xuat();
    cout << endl;
    cout << "b = ";
    b.Xuat();
    cout << endl;

    if (a == b) cout << "a bang b" << endl;
    if (a != b) cout << "a khac b" << endl;
    if (a > b)  cout << "a lon hon b" << endl;
    if (a < b)  cout << "a nho hon b" << endl;
    if (a >= b) cout << "a lon hon hoac bang b" << endl;
    if (a <= b) cout << "a nho hon hoac bang b" << endl;
}
