#include "CDiem.h"

int main() {
    CDiem a, b;
    cout << "Nhap diem A" << endl;
    a.Nhap();
    cout << endl;
    cout << "Nhap diem B" << endl;
    b.Nhap();
    cout << endl;
    cout << "A = ";
    a.Xuat();
    cout << endl;
    cout << "B = ";
    b.Xuat();
    cout << endl;

    if (a == b) cout << "A bang B" << endl;
    if (a != b) cout << "A khac B" << endl;
    if (a > b)  cout << "A lon hon B" << endl;
    if (a < b)  cout << "A nho hon B" << endl;
    if (a >= b) cout << "A lon hon hoac bang B" << endl;
    if (a <= b) cout << "A nho hon hoac bang B" << endl;
}
