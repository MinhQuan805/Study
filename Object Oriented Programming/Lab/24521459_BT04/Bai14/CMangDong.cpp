#include "CMangDong.h"


istream& operator>>(istream& is, CMangDong& X) {
    cout << "Nhap n: ";
    is >> X.n;
    X.a = new float[X.n];
    for (int i = 0; i < X.n; i++) {
        cout << "Nhap a[" << i << "]: ";
        is >> X.a[i];
    }
    return is;
}
ostream& operator<<(ostream& os, const CMangDong& X) {
    for (int i = 0; i < X.n; i++) {
        os << "a[" << i << "]: " << X.a[i] << endl;
    }
    return os;
}
CMangDong::CMangDong() {
    n = 100;
    a = new float[n];
    for (int i = 0; i < 100; i++) {
        a[i] = 0;
    }
    cout << "Phuong thuc khoi tao mac dinh\n";
}

CMangDong::CMangDong(int size, float arr[]) {
    n = size;
    a = new float[n];
    for (int i = 0; i < n; i++) {
        a[i] = arr[i];
    }
    cout << "Phuong thuc thiet lap khi biet dang thong tin cua doi tuong\n";
}

CMangDong::CMangDong(const CMangDong& X) {
    n = X.n;
    a = new float[n];
    for (int i = 0; i < n; i++) {
        a[i] = X.a[i];
    }
    cout << "Phuong thuc sao chep thong tin tu doi tuong khac\n";
}
CMangDong::~CMangDong() {
    delete[] a;
    cout << "Phuong thuc pha huy\n";
}