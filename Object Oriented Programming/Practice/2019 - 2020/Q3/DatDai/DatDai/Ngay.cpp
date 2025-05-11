#include "Ngay.h"

void Ngay::Nhap() {
	cout << "Nhap Ngay: ";
	cin >> day;
	cout << "Nhap Thang: ";
	cin >> month;
	cout << "Nhap Nam: ";
	cin >> year;
}
void Ngay::Xuat() {
	cout << day << "/" << month << "/" << year << endl;
}
int Ngay::Nam() {
	return year;
}