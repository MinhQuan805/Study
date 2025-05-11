#include "CPhanSo.h"

int main() {
    CPhanSo a, b;
    cin >> a;
    cin >> b;

    CPhanSo Tong = a + b;
    CPhanSo Hieu = a - b;
    CPhanSo Tich = a * b;
    CPhanSo Thuong = a / b;

    cout << endl;
    cout << "Tong: " << Tong;
    cout << "Hieu: " << Hieu;
    cout << "Tich: " << Tich;
    cout << "Thuong: " << Thuong << endl;

    a += b;
    cout << "a += b: " << a << endl;

    a -= b;
    cout << "a -= b: " << a << endl;

    a *= b;
    cout << "a *= b: " << a << endl;

    a /= b;
    cout << "a /= b: " << a << endl;

    ++a;
    cout << "++a: " << a << endl;

    a--;
    cout << "a--: " << a << endl;

    return 0;
}
