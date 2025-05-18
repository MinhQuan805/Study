#include "CSoPhuc.h"

int main() {
    CSoPhuc A(3, 4), B(7, 2), C(5, 12), D(0, 6);

    cout << "Nhap A " << endl;
    cin >> A;
    cout << "Nhap B" << endl;
    cin >> B;
    cout << "Nhap C" << endl;
    cin >> C;
    cout << "Nhap D" << endl;
    cin >> D;
    cout << endl;

    cout << "A: " << A;
    cout << "B: " << B;
    cout << "C: " << C;
    cout << "D: " << D;
    cout << endl;
    cout << "A == B: " << (A == B ? "True" : "False") << endl;
    cout << "A != C: " << (A != C ? "True" : "False") << endl;
    cout << "B > D: " << (B > D ? "True" : "False") << endl;
    cout << "C < D: " << (C < D ? "True" : "False") << endl;
    cout << "A >= D: " << (A >= D ? "True" : "False") << endl;
    cout << "C <= B: " << (C <= B ? "True" : "False") << endl;

    return 0;
}
