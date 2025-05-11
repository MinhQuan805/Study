#include "CDaThuc.h"
#include <iostream>

using namespace std;

int main() {
    CDaThuc F1, F2;
    cout << "Nhap Da Thuc Thu Nhat \n";
    cin >> F1;
    cout << "Da Thuc Thu Nhat: " << F1 << endl;
    cout << endl;
    cout << "Nhap Da Thuc Thu Hai \n";
    cin >> F2;
    cout << "Da Thuc Thu Hai: " << F2 << endl;

    CDaThuc Cong = F1 + F2;
    cout << "\nToan Tu Cong La: " << Cong;
    CDaThuc CongBang = F1;
    CongBang += F2;
    cout << "\nToan Tu Cong Bang La: " << CongBang;
    CDaThuc Tru = F1 - F2;

    cout << "\nToan Tu Tru La: " << Tru;
    CDaThuc TruBang = F1;
    TruBang += F2;
    cout << "\nToan Tu Tru La: " << TruBang;

    CDaThuc Nhan = F1 * F2;
    cout << "\nToan Tu Nhan La: " << Nhan;
    CDaThuc NhanBang = F1;
    NhanBang *= F2;
    cout << "\nToan Tu Nhan Bang La: " << NhanBang;

    CDaThuc Chia = F1 / F2;
    cout << "\nToan Tu Chia La: " << Chia;
    CDaThuc ChiaBang = F1;
    ChiaBang /= F2;
    cout << "\nToan Tu Chia Bang La: " << ChiaBang;

    return 0;
}
