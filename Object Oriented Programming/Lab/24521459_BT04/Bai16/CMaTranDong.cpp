#include "CMaTranDong.h"


istream& operator>>(istream& is, CMaTranDong& X) {
    cout << "Nhap so dong: ";
    is >> X.m;
    cout << "Nhap so cot: ";
    is >> X.n;

    X.a = new float* [X.m];
    for (int i = 0; i < X.m; i++) {
        X.a[i] = new float[X.n];
        for (int j = 0; j < X.n; j++) {
            cout << "Nhap a[" << i << "][" << j << "]: ";
            is >> X.a[i][j];
        }
    }
    return is;
}

ostream& operator<<(ostream& os, CMaTranDong& X) {
    for (int i = 0; i < X.m; i++) {
        for (int j = 0; j < X.n; j++) {
            os << X.a[i][j] << " ";
        }
        os << endl;
    }
    return os;
}

CMaTranDong::CMaTranDong() {
    m = n = 0;
    a = nullptr;
    cout << "Phuong thuc khoi tao mac dinh\n";
}

CMaTranDong::CMaTranDong(int mm, int nn, float arr[][100]) {
    m = mm;
    n = nn;
    a = new float* [m];
    for (int i = 0; i < m; i++) {
        a[i] = new float[n];
        for (int j = 0; j < n; j++) {
            a[i][j] = arr[i][j];
        }
    }
    cout << "Phuong thuc thiet lap khi biet thong tin\n";
}

CMaTranDong::CMaTranDong(const CMaTranDong& X) {
    m = X.m;
    n = X.n;
    a = new float* [m];
    for (int i = 0; i < m; i++) {
        a[i] = new float[n];
        for (int j = 0; j < n; j++) {
            a[i][j] = X.a[i][j];
        }
    }
    cout << "Phuong thuc sao chep\n";
}

CMaTranDong::~CMaTranDong() {
    if (a != nullptr) {
        for (int i = 0; i < m; i++) {
            delete[] a[i];
        }
        delete[] a;
    }
    cout << "Phuong thuc pha huy\n";
}
