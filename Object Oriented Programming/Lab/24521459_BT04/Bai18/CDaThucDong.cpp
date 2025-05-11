#include "CDaThucDong.h"

istream& operator>>(istream& is, CDaThucDong& X) {
	cout << "Nhap bac: ";
	is >> X.n;

	X.a = new float[X.n + 1];
	for (int i = X.n; i >= 0; i--) {
		cout << "Nhap a[" << i << "]: ";
		is >> X.a[i];
	}
	return is;
}

ostream& operator<<(ostream& os, const CDaThucDong& X) {
	for (int i = X.n; i > 0; i--) {
		os << X.a[i];
		os << "x^";
		os << i;
		os << " + ";
	}
	os << X.a[0];
	os << endl;
	return os;
}

CDaThucDong::CDaThucDong() {
	n = 0;
	a = new float[1];
	a[0] = 0;
	cout << "Phuong thuc khoi tao mac dinh\n";
}

CDaThucDong::CDaThucDong(int nn, float arr[]) {
	n = nn;
	a = new float[n + 1];
	for (int i = 0; i <= n; i++) {
		a[i] = arr[i];
	}
	cout << "Phuong thuc thiet lap khi biet thong tin\n";
}

CDaThucDong::CDaThucDong(const CDaThucDong& X) {
	n = X.n;
	a = new float[n + 1];
	for (int i = 0; i <= n; i++) {
		a[i] = X.a[i];
	}
	cout << "Phuong thuc sao chep\n";
}

CDaThucDong::~CDaThucDong() {
	if (a != nullptr) {
		delete[] a;
	}
	cout << "Phuong thuc pha huy\n";
}




