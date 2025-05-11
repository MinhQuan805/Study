#include "CDaThucTinh.h"


istream& operator>>(istream& is, CDaThucTinh& X) {
    cout << "Nhap bac: ";
    is >> X.n;
    X.a 
    for (int i = X.n; i >= 0; i--) {
        cout << "Nhap a[" << i << "]: ";
        is >> X.a[i];
    }
    return is;
}

ostream& operator<<(ostream& os, CDaThucTinh& X) {
    for (int i = X.n; i>0; i--) {
        os << X.a[i];
        os << "x^";
        os << i;
        os << " + ";
    }
    os << X.a[0];
    os << endl;
    return os;
}

CDaThucTinh::CDaThucTinh() {
    n = 0;
    for (int i = 0; i < 100; i++) {
        a[i] = 0;
    }
    cout << "Phuong thuc khoi tao mac dinh\n";
}

CDaThucTinh::CDaThucTinh(int nn, float arr[]) {
    n = nn;
    for (int i = 0; i <= n; i++) {
        a[i] = arr[i];
    }
    cout << "Phuong thuc thiet lap khi biet thong tin\n";
}

CDaThucTinh::CDaThucTinh(const CDaThucTinh& X) {
    n = X.n;
    for (int i = 0; i <= n; i++) {
        a[i] = X.a[i];
    }
    cout << "Phuong thuc sao chep\n";
}

CDaThucTinh::~CDaThucTinh() {
    cout << "Phuong thuc pha huy\n";
}
