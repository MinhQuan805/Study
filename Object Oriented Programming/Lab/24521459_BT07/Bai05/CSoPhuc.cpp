#include "CSoPhuc.h"

CSoPhuc::CSoPhuc(float thuc, float ao) : thuc(thuc), ao(ao) {}

float CSoPhuc::MoDun() const {
    return sqrt(thuc * thuc + ao * ao);
}

bool CSoPhuc::operator==(const CSoPhuc& sp) {
    return MoDun() == sp.MoDun();
}

bool CSoPhuc::operator!=(const CSoPhuc& sp) {
    return MoDun() != sp.MoDun();
}

bool CSoPhuc::operator>(const CSoPhuc& sp) {
    return MoDun() > sp.MoDun();
}

bool CSoPhuc::operator<(const CSoPhuc& sp) {
    return MoDun() < sp.MoDun();
}

bool CSoPhuc::operator>=(const CSoPhuc& sp) {
    return MoDun() >= sp.MoDun();
}

bool CSoPhuc::operator<=(const CSoPhuc& sp) {
    return MoDun() <= sp.MoDun();
}

void CSoPhuc::Xuat() {
    if (ao == 1)
        cout << thuc << " + " << "i" << endl;
    else if (ao > 0)
        cout << thuc << " + " << ao << "i" << endl;
    else if (ao < 0)
        cout << thuc << " - " << -ao << "i" << endl;
    else if (ao == 0)
        cout << thuc << endl;
}