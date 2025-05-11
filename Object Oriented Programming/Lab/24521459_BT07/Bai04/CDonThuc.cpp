#include "CDonThuc.h"

CDonThuc::CDonThuc(float heso, int mu) : heso(heso), mu(mu) {}

bool CDonThuc::operator==(const CDonThuc& AB) const {
    return heso == AB.heso && mu == AB.mu;
}

bool CDonThuc::operator!=(const CDonThuc& AB) const {
    return !(*this == AB);
}
