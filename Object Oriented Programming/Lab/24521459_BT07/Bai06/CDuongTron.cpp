#include "CDuongTron.h"

CDuongTron::CDuongTron(float r) : r(r) {}

float CDuongTron::DienTich() const {
    return 3.14 * r * r; 
}

bool CDuongTron::operator==(const CDuongTron& O) {
    return DienTich() == O.DienTich();
}

bool CDuongTron::operator!=(const CDuongTron& O) {
    return DienTich() != O.DienTich();
}

bool CDuongTron::operator>(const CDuongTron& O) {
    return DienTich() > O.DienTich();
}

bool CDuongTron::operator<(const CDuongTron& O) {
    return DienTich() < O.DienTich();
}

bool CDuongTron::operator>=(const CDuongTron& O) {
    return DienTich() >= O.DienTich();
}

bool CDuongTron::operator<=(const CDuongTron& O) {
    return DienTich() <= O.DienTich();
}

void CDuongTron::Xuat() {
    cout << "Ban kinh la " << r << " va dien tich la " << DienTich() << endl;
}