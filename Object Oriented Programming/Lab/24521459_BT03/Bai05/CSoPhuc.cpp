#include "CSoPhuc.h"

CSoPhuc::CSoPhuc() {
    thuc = 0;
    ao = 0;
    cout << "Phuong thuc khoi tao mac dinh\n";
}

CSoPhuc::CSoPhuc(float a, float b) {
    thuc = a;
    ao = b;
    cout << "Phuong thuc thiet lap khi biet dang thong tin cua doi tuong\n";
}

CSoPhuc::CSoPhuc(const CSoPhuc& sp) {
    thuc = sp.thuc;
    ao = sp.ao;
    cout << "Phuong thuc sao chep thong tin tu doi tuong khac\n";
}

CSoPhuc::~CSoPhuc() {
    cout << "Phuong thuc pha huy\n";
}
