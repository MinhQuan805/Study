#include "CHonSo.h"

int main() {
    CHonSo a, b;
    cout << "Nhap Hon So a" << endl;
    cin >> a;
    cout << endl;
    cout << "Nhap Hon So b" << endl;
    cin >> b;
    cout << endl;
    cout << "a = " << a;
    cout << endl;
    cout << "b = " << b;
    cout << endl;

    if (a == b) cout << "a bang b" << endl;
    if (a != b) cout << "a khac b" << endl;
    if (a > b)  cout << "a lon hon b" << endl;
    if (a < b)  cout << "a nho hon b" << endl;
    if (a >= b) cout << "a lon hon hoac bang b" << endl;
    if (a <= b) cout << "a nho hon hoac bang b" << endl;
}
