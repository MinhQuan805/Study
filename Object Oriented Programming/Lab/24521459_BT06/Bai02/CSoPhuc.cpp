#include "CSoPhuc.h"

CSoPhuc::CSoPhuc(double thuc, double ao) : thuc(thuc), ao(ao) {}

istream& operator>>(istream& is, CSoPhuc& sp) {
    cout << "Nhap phan thuc: ";
    is >> sp.thuc;
    cout << "Nhap phan ao: ";
    is >> sp.ao;
    return is;
}

ostream& operator<<(ostream& os, const CSoPhuc& sp) {
    if (sp.ao == 1)
        os << sp.thuc << " + i \n";
    else if (sp.ao > 0)
        os << sp.thuc << " + " << sp.ao << "i \n";
    else if (sp.ao < 0)
        os << sp.thuc << " - " << -sp.ao << "i\n";
    else
        os << sp.thuc;
    return os;
}

CSoPhuc CSoPhuc::operator+(const CSoPhuc& sp) {
    return CSoPhuc(thuc + sp.thuc, ao + sp.ao);
}

CSoPhuc CSoPhuc::operator-(const CSoPhuc& sp) {
    return CSoPhuc(thuc - sp.thuc, ao - sp.ao);
}

CSoPhuc CSoPhuc::operator*(const CSoPhuc& sp) {
    double Thuc = thuc * sp.thuc - ao * sp.ao;
    double Ao = thuc * sp.ao + ao * sp.thuc;
    return CSoPhuc(Thuc, Ao);
}

CSoPhuc CSoPhuc::operator/(const CSoPhuc& sp) {
    double mau = sp.thuc * sp.thuc + sp.ao * sp.ao;
    double Thuc = (thuc * sp.thuc + ao * sp.ao) / mau;
    double Ao = (ao * sp.thuc - thuc * sp.ao) / mau;
    return CSoPhuc(Thuc, Ao);
}

CSoPhuc& CSoPhuc::operator+=(const CSoPhuc& sp) {
    thuc += sp.thuc;
    ao += sp.ao;
    return *this;
}

CSoPhuc& CSoPhuc::operator-=(const CSoPhuc& sp) {
    thuc -= sp.thuc;
    ao -= sp.ao;
    return *this;
}

CSoPhuc& CSoPhuc::operator*=(const CSoPhuc& sp) {
    double Thuc = thuc * sp.thuc - ao * sp.ao;
    double Ao = thuc * sp.ao + ao * sp.thuc;
    thuc = Thuc;
    ao = Ao;
    return *this;
}

CSoPhuc& CSoPhuc::operator/=(const CSoPhuc& sp) {
    double mau = sp.thuc * sp.thuc + sp.ao * sp.ao;
    double Thuc = (thuc * sp.thuc + ao * sp.ao) / mau;
    double Ao = (ao * sp.thuc - thuc * sp.ao) / mau;
    thuc = Thuc;
    ao = Ao;
    return *this;
}
