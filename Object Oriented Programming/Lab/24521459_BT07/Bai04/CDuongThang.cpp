#include "CDuongThang.h"

CDuongThang::CDuongThang(int a, int b) : a(a), b(b) {}

bool CDuongThang::operator==(const CDuongThang& d) {
    return a == d.a && b == d.b;
}

bool CDuongThang::operator!=(const CDuongThang& d) {
    return !(*this == d);
}
