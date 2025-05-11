#include "CSoPhuc.h"

istream& operator>>(istream& is, CSoPhuc& X)
{
    cout << "Nhap phan thuc: ";
    is >> X.thuc;
    cout << "Nhap phan ao: ";
    is >> X.ao;
    return is;
}
ostream& operator<<(ostream& os, CSoPhuc& X) {
    os << "So Phuc = " << X.thuc;
        if (X.ao == 1) {
            os << " + " << "i" << endl;
        }
        else if (X.ao == -1) {
            os << " - " << "i" << endl;
        }
        else if (X.ao > 0)
            os << " + " << X.ao << "i" << endl;
        else if (X.ao < 0)
            os << " - " << -X.ao << "i" << endl;
        else
            os << endl;
    return os;
}

CSoPhuc::CSoPhuc() {
    thuc = 0;
    ao = 0;
    cout << "Phuong thuc khoi tao mac dinh\n";
}

CSoPhuc::CSoPhuc(float a, float b) {
    thuc = a;
    ao = b;
    cout << "Phuong thuc thiet lap khi biet dang thong tin cua doi tuong\n";
}

CSoPhuc::CSoPhuc(const CSoPhuc& sp) {
    thuc = sp.thuc;
    ao = sp.ao;
    cout << "Phuong thuc sao chep thong tin tu doi tuong khac\n";
}

CSoPhuc::~CSoPhuc() {
    cout << "Phuong thuc pha huy\n";
}
