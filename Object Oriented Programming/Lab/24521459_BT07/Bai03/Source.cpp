#include "CDiem.h"

int main() {
    CDiem a, b;
    cout << "Nhap diem A" << endl;
    cin >> a;
    cout << endl;
    cout << "Nhap diem B" << endl;
    cin >> b;
    cout << endl;
    cout << "A = " << a;
    cout << endl;
    cout << "B = " << b;
    cout << endl;

    if (a == b) cout << "A bang B" << endl;
    if (a != b) cout << "A khac B" << endl;
    if (a > b)  cout << "A lon hon B" << endl;
    if (a < b)  cout << "A nho hon B" << endl;
    if (a >= b) cout << "A lon hon hoac bang B" << endl;
    if (a <= b) cout << "A nho hon hoac bang B" << endl;
}
