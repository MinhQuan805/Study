#include "CDuongTron.h"

CDuongTron::CDuongTron(float r) : r(r) {}

float CDuongTron::DienTich() const {
    return 3.14f * r * r;
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

istream& operator>>(istream& is, CDuongTron& O) {
    is >> O.r;
    return is;
}

ostream& operator<<(ostream& os, const CDuongTron& O) {
    os << "Ban kinh la " << O.r << ", Dien tich la " << O.DienTich() << endl;
    return os;
}
