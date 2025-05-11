#include "CDonThuc.h"

CDonThuc::CDonThuc(int HeSo, int bac) : HeSo(HeSo), bac(bac) {}

CDonThuc& CDonThuc::operator=(const CDonThuc& d) {
    if (this != &d) {
        HeSo = d.HeSo;
        bac = d.bac;
    }
    return *this;
}

void CDonThuc::Xuat() {
    cout << HeSo << "x^" << bac << endl;
}
