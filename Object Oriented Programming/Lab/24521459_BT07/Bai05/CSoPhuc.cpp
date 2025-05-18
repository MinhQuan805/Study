#include "CSoPhuc.h"

CSoPhuc::CSoPhuc(float thuc, float ao) : thuc(thuc), ao(ao) {}

float CSoPhuc::MoDun() const {
    return sqrt(thuc * thuc + ao * ao);
}

bool CSoPhuc::operator==(const CSoPhuc& SP) {
    return MoDun() == SP.MoDun();
}

bool CSoPhuc::operator!=(const CSoPhuc& SP) {
    return MoDun() != SP.MoDun();
}

bool CSoPhuc::operator>(const CSoPhuc& SP) {
    return MoDun() > SP.MoDun();
}

bool CSoPhuc::operator<(const CSoPhuc& SP) {
    return MoDun() < SP.MoDun();
}

bool CSoPhuc::operator>=(const CSoPhuc& SP) {
    return MoDun() >= SP.MoDun();
}

bool CSoPhuc::operator<=(const CSoPhuc& SP) {
    return MoDun() <= SP.MoDun();
}

ostream& operator<<(ostream& os, CSoPhuc& SP)
{
    if (SP.ao == 1)
        os << SP.thuc << " + i \n";
    else if (SP.ao > 0)
        os << SP.thuc << " + " << SP.ao << "i \n";
    else if (SP.ao < 0)
        os << SP.thuc << " - " << -SP.ao << "i\n";
    else
        os << SP.thuc;
    return os;
}
istream& operator>>(istream& is, CSoPhuc& SP)
{
    cout << "Nhap Phan Thuc: ";
    is >> SP.thuc;
    cout << "Nhap Phan Ao: ";
    is >> SP.ao;
    return is;
}
