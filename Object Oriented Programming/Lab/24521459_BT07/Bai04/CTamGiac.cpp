#include "CTamGiac.h"

CTamGiac::CTamGiac(CDiem A, CDiem B, CDiem C) : A(A), B(B), C(C) {}

bool CTamGiac::operator==(const CTamGiac& ABC) {
    return A == ABC.A && B == ABC.B && C == ABC.C;
}

bool CTamGiac::operator!=(const CTamGiac& ABC) {
    return !(*this == ABC);
}
