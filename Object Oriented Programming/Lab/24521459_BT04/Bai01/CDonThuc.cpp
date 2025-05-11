#include "CDonThuc.h"

CDonThuc::CDonThuc() {
    so = 0;
    mu = 0;
    cout << "Phuong thuc khoi tao mac dinh\n";
}

CDonThuc::CDonThuc(int heSo, int soMu) {
    so = heSo;
    mu = soMu;
    cout << "Phuong thuc thiet lap khi biet dang thong tin cua doi tuong\n";
}

CDonThuc::CDonThuc(const CDonThuc& dt) {
    so = dt.so;
    mu = dt.mu;
    cout << "Phuong thuc sao chep thong tin tu doi tuong khac\n";
}

CDonThuc::~CDonThuc() {
    cout << "Phuong thuc pha huy\n";
}
