#include "CSoPhuc.h"

CSoPhuc::CSoPhuc(double thuc, double ao) : thuc(thuc), ao(ao) {}

CSoPhuc& CSoPhuc::operator=(const CSoPhuc& s) {
    if (this != &s) {
        thuc = s.thuc;
        ao = s.ao;
    }
    return *this;
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
