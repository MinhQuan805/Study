#include "CSoPhuc.h"

int main() {
    CSoPhuc a, b;
    cout << "Nhap So Phuc Thu Nhat \n";
    cin >> a;
    cout << "Nhap So Phuc Thu Hai \n";
    cin >> b;

    CSoPhuc Tong = a + b;
    CSoPhuc Hieu = a - b;
    CSoPhuc Tich = a * b;
    CSoPhuc Thuong = a / b;

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

    return 0;
}
