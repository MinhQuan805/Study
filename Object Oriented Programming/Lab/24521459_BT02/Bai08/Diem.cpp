#include "Diem.h"

void CDiem::Nhap() {
	cout << "Nhap Diem x: ";
	cin >> x;
	cout << "Nhap Diem y: ";
	cin >> y;
}
void CDiem::Xuat() {
	cout << "(" << x << ", " << y << ")" << endl;
}

float CDiem::KhoangCach(CDiem P) {
	float kq = sqrt((x - P.x) * (x - P.x) + (y - P.y) * (y - P.y));
	return kq;
}
void CDiem::setX(float xx) {
	x = xx;
}
float CDiem::getX() {
	return x;
}
void CDiem::setY(float yy) {
	y = yy;
}
float CDiem::getY() {
	return y;
}