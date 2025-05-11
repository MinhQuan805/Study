#include "CSoPhuc.h"

int main() {
    CSoPhuc A(3, 4), B(7, 2), C(5, 12), D(0, 6);

    cout << "A: ";
    A.Xuat();
    cout << "B: ";
    B.Xuat();
    cout << "C: ";
    C.Xuat();
    cout << "D: ";
    D.Xuat();
    cout << endl;

    cout << "A == B: " << (A == B ? "True" : "False") << endl;
    cout << "A != C: " << (A != C ? "True" : "False") << endl;
    cout << "B > D: " << (B > D ? "True" : "False") << endl;
    cout << "C < D: " << (C < D ? "True" : "False") << endl;
    cout << "A >= D: " << (A >= D ? "True" : "False") << endl;
    cout << "C <= B: " << (C <= B ? "True" : "False") << endl;

    return 0;
}
