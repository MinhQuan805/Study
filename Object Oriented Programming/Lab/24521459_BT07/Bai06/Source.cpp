#include "CDuongTron.h"

int main() {
    CDuongTron O1(3), O2(4);
    cout << "Duong Tron O1 : ";
    O1.Xuat();
    cout << "Duong Tron O2 : ";
    O2.Xuat();
    cout << endl;
    cout << "O1 == O2: " << (O1 == O2 ? "True" : "False") << endl;
    cout << "O1 != O2: " << (O1 != O2 ? "True" : "False") << endl;
    cout << "O1 > O2: " << (O1 > O2 ? "True" : "False") << endl;
    cout << "O1 < O2: " << (O1 < O2 ? "True" : "False") << endl;
    cout << "O1 >= O2: " << (O1 >= O2 ? "True" : "False") << endl;
    cout << "O1 <= O2: " << (O1 <= O2 ? "True" : "False") << endl;

    return 0;
}
