#include "CDuongTron.h"

CDuongTron::CDuongTron() {
    x = 0;
    y = 0;
    r = 1;
    cout << "Phuong thuc khoi tao mac dinh\n";
}

CDuongTron::CDuongTron(float x, float y, float r) {
    this->x = x;
    this->y = y;
    this->r = r;
    cout << "Phuong thuc thiet lap khi biet dang thong tin cua doi tuong\n";
}

CDuongTron::CDuongTron(const CDuongTron& A) {
    x = A.x;
    y = A.y;
    r = A.r;
    cout << "Phuong thuc sao chep thong tin tu doi tuong khac\n";
}

CDuongTron::~CDuongTron() {
    cout << "Phuong thuc pha huy\n";
}
