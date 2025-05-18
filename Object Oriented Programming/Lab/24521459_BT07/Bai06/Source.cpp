#include "CDuongTron.h"

int main() {
    CDuongTron O1(3), O2(4);
    cout << "Nhap Ban Kinh O1: ";
    cin >> O1;
    cout << "Nhap Ban Kinh O2: ";
    cin >> O2;
    cout << endl;
    cout << "Duong Tron O1: ";
    cout << O1;
    cout << "Duong Tron O2: ";
    cout << O2;
    cout << endl;
    cout << "O1 == O2: " << (O1 == O2 ? "True" : "False") << endl;
    cout << "O1 != O2: " << (O1 != O2 ? "True" : "False") << endl;
    cout << "O1 > O2: " << (O1 > O2 ? "True" : "False") << endl;
    cout << "O1 < O2: " << (O1 < O2 ? "True" : "False") << endl;
    cout << "O1 >= O2: " << (O1 >= O2 ? "True" : "False") << endl;
    cout << "O1 <= O2: " << (O1 <= O2 ? "True" : "False") << endl;

    return 0;
}
