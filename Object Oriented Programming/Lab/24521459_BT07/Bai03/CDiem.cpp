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

void CDiem::Nhap() {
    cout << "Nhap x: ";
    cin >> x;
    cout << "Nhap y: ";
    cin >> y;
}

void CDiem::Xuat() {
    cout << "(" << x << ", " << y << ")" << endl;
}
