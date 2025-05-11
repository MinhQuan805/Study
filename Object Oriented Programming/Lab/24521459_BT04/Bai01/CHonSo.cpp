#include "CHonSo.h"

CHonSo::CHonSo() {
    nguyen = 0;
    cout << "Phuong thuc khoi tao mac dinh\n";
}

CHonSo::CHonSo(int a, CPhanSo AB) {
    nguyen = a;
    PS = AB;
    cout << "Phuong thuc thiet lap khi biet dang thong tin cua doi tuong\n";
}

CHonSo::CHonSo(const CHonSo& k) {
    nguyen = k.nguyen;
    PS = k.PS; 
    cout << "Phuong thuc sao chep thong tin tu doi tuong khac\n";
}

CHonSo::~CHonSo() {
    cout << "Phuong thuc pha huy\n";
}
