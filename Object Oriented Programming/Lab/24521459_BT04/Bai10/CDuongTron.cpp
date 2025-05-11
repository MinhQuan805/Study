#include "CDuongTron.h"

istream& operator>>(istream& is, CDuongTron& X) {
    cout << "Nhap hoanh do tam: ";
    is >> X.x;
    cout << "Nhap tung do tam: ";
    is >> X.y;
    do {
        cout << "Nhap ban kinh (r > 0): ";
        is >> X.r;
        if (X.r <= 0) cout << "Ban kinh phai lon hon 0!\n";
    } while (X.r <= 0);
    return is;
}

ostream& operator<<(ostream& os, const CDuongTron& X) {
    os << "Duong tron co tam (" << X.x << ", " << X.y << ") va ban kinh r = " << X.r << endl;
    return os;
}

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

CDuongTron::CDuongTron(const CDuongTron& X) {
    x = X.x;
    y = X.y;
    r = X.r;
    cout << "Phuong thuc sao chep thong tin tu doi tuong khac\n";
}

CDuongTron::~CDuongTron() {
    cout << "Phuong thuc pha huy\n";
}
