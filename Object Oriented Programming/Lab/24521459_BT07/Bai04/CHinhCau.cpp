#include "CHinhCau.h"

CHinhCau::CHinhCau(CDiem I, int r) : I(I), r(r) {}

bool CHinhCau::operator==(const CHinhCau& S) {
    return I == S.I && r == S.r;
}

bool CHinhCau::operator!=(const CHinhCau& S) {
    return !(*this == S);
}
