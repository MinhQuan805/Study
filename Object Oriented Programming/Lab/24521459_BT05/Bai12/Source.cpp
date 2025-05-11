#include "CHinhCau.h"
int main() {
	CHinhCau p(1, 2, 4, 7);
	cout << "Hinh Cau Truoc Khi Gan" << endl;
	p.Xuat();
	cout << endl;
	CHinhCau q(3, 6, 3, 6);
	p = q;
	cout << "Hinh Cau Sau Khi Gan" << endl;
	p.Xuat();
}