#include "CDonThuc.h"
#include <iostream>
using namespace std;

int main() {
    CDonThuc a, b;
    cout << "Nhap Don Thuc Thu Nhat" << endl;
    cin >> a;
    cout << "Don Thuc Thu Nhat: " << a << endl;
    cout << endl;
    cout << "Nhap Don Thuc Thu Hai" << endl;
    cin >> b;
    cout << "Don Thuc Thu Hai: " << b << endl;

    CDonThuc Tich = a * b;
    CDonThuc Thuong = a / b;

    cout << endl;
    cout << "Tich: " << Tich << endl;
    cout << "Thuong: " << Thuong << endl;

    a *= b;
    cout << "a *= b: " << a << endl;

    a /= b;
    cout << "a /= b: " << a << endl;

    return 0;
}
