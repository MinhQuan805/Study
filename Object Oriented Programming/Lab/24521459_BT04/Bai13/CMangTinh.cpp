#include "CMangTinh.h"


istream& operator>>(istream& is, CMangTinh& X) {
	cout << "Nhap n: ";
	is >> X.n;
	for (int i = 0; i < X.n; i++) {
		cout << "Nhap a[" << i << "]: ";
		is >> X.a[i];
	}
	return is;
}
ostream& operator<<(ostream& os, CMangTinh& X) {
	for (int i = 0; i < X.n; i++) {
		os << "a[" << i << "]: " << X.a[i] << endl;
	}
	return os;
}
CMangTinh::CMangTinh() {
    n = 0;
    for (int i = 0; i < 100; i++) {
        a[i] = 0;
    }
    cout << "Phuong thuc khoi tao mac dinh\n";
}

CMangTinh::CMangTinh(int size, float arr[]) {
    n = size;
    for (int i = 0; i < n; i++) {
        a[i] = arr[i];
    }
    cout << "Phuong thuc thiet lap khi biet dang thong tin cua doi tuong\n";
}

CMangTinh::CMangTinh(const CMangTinh& X) {
    n = X.n;
    for (int i = 0; i < n; i++) {
        a[i] = X.a[i];
    }
    cout << "Phuong thuc sao chep thong tin tu doi tuong khac\n";
}
CMangTinh::~CMangTinh() {
    cout << "Phuong thuc pha huy\n";
}