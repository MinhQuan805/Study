#include "CDiem.h"

CDiem::CDiem(float x, float y) : x(x), y(y) {}

float CDiem::KhoangCach() const {
    return sqrt(x * x + y * y);
}

bool CDiem::operator==(const CDiem& d) const {
    return KhoangCach() == d.KhoangCach();
}

bool CDiem::operator!=(const CDiem& d) const {
    return KhoangCach() != d.KhoangCach();
}

bool CDiem::operator>(const CDiem& d) const {
    return KhoangCach() > d.KhoangCach();
}

bool CDiem::operator<(const CDiem& d) const {
    return KhoangCach() < d.KhoangCach();
}

bool CDiem::operator>=(const CDiem& d) const {
    return KhoangCach() >= d.KhoangCach();
}

bool CDiem::operator<=(const CDiem& d) const {
    return KhoangCach() <= d.KhoangCach();
}

istream& operator>>(istream& is, CDiem& X) {
    cout << "Nhap x: ";
    is >> X.x;
    cout << "Nhap y: ";
    is >> X.y;
    return is;
}

ostream& operator<<(ostream& os, const CDiem& X) {
    os << "(" << X.x << ", " << X.y << ")" << endl;
    return os;
}