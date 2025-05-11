#include "CThoiGian.h"

CThoiGian::CThoiGian(int gio, int phut, int giay) : gio(gio), phut(phut), giay(giay) {}

CThoiGian& CThoiGian::operator=(const CThoiGian& t) {
    if (this != &t) {
        gio = t.gio;
        phut = t.phut;
        giay = t.giay;
    }
    return *this;
}

void CThoiGian::Xuat() {
    cout << gio << ":" << phut << ":" << giay << endl;
}
