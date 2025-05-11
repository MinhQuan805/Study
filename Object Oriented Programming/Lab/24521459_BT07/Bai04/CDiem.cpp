#include "CDiem.h"

CDiem::CDiem(int x, int y) : x(x), y(y) {}

float CDiem::KhoangCach() const {
    return sqrt(x * x + y * y);
}
bool CDiem::operator==(const CDiem& d) {
    return KhoangCach() == d.KhoangCach();
}

bool CDiem::operator!=(const CDiem& d) {
    return KhoangCach() != d.KhoangCach();
}
