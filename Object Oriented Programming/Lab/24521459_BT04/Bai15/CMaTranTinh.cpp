#include "CMaTranTinh.h"


istream& operator>>(istream& is, CMaTranTinh& X) {
    cout << "Nhap so dong: ";
    is >> X.m;
    cout << "Nhap so cot: ";
    is >> X.n;
    for (int i = 0; i < X.m; i++) {
        for (int j = 0; j < X.n; j++) {
            cout << "Nhap a[" << i << "][" << j << "]: ";
            is >> X.a[i][j];
        }
    }
    cout << endl;
    return is;
}
ostream& operator<<(ostream& os, CMaTranTinh& X) {
    cout << "Ma Tran" << endl;
    for (int i = 0; i < X.m; i++) {
        for (int j = 0; j < X.n; j++) {
            os << X.a[i][j] << " ";
        }
        cout << endl;
    }
    return os;
}
CMaTranTinh::CMaTranTinh() {
    for (int i = 0; i < 100; i++) {
        for (int j = 0; j < 100; j++) {
            a[i][j] = 0;
        }
    }
    cout << "Phuong thuc khoi tao mac dinh\n";
}

CMaTranTinh::CMaTranTinh(int mm, int nn, float arr[][100]) {
    m = mm;
    n = nn;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            a[i][j] = arr[i][j];
        }
    }
}


CMaTranTinh::CMaTranTinh(const CMaTranTinh& X) {
    m = X.m;
    n = X.n;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            a[i][j] = X.a[i][j];
        }
    }
    cout << "Phuong thuc sao chep thong tin tu doi tuong khac\n";
}
CMaTranTinh::~CMaTranTinh() {
    cout << "Phuong thuc pha huy\n";
}