#include "CDiem.h"
istream& operator>>(istream& is, CDiem& X)
{
	cout << "Nhap x: ";
	is >> X.x;
	cout << "Nhap y: ";
	is >> X.y;
	return is;
}
ostream& operator<<(ostream& os, CDiem& X) {
	os <<  "(" << X.x << ", " << X.y << ")\n";
	return os;
}
CDiem::~CDiem() {
	cout << "Phuong thuc pha huy \n";
}
CDiem::CDiem() {
	x = 0;
	y = 0;
	cout << "Phuong thuc khoi tao mac dinh \n";
}
CDiem::CDiem(int xx, int yy) {
	x = xx;
	y = yy;
	cout << "Phuong thuc thiet lap khi biet dang thong tin cua doi tuong \n";
}

CDiem::CDiem(const CDiem& a) {
	x = a.x;
	y = a.y;
	cout << "Phuong thuc sao chep thong tin tu doi tuong khac \n";
}