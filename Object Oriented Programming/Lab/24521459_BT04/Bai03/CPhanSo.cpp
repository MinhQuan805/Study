#include "CPhanSo.h"

istream& operator>>(istream& is, CPhanSo& X)
{
	cout << "Nhap tu: ";
	is >> X.tu;
	cout << "Nhap mau: ";
	is >> X.mau;
	return is;
}
ostream& operator<<(ostream& os, CPhanSo& X) {
	os << "Phan So = " << X.tu << "/" << X.mau << endl;
	return os;
}
CPhanSo::CPhanSo() {
	tu = 0;
	mau = 1;
	cout << "Phuong thuc khoi tao mac dinh \n";
}
CPhanSo::CPhanSo(int a, int b) {
	tu = a;
	mau = (b == 0) ? 1 : b;
	cout << "Phuong thuc thiet lap khi biet dang thong tin cua doi tuong \n";
}
CPhanSo::CPhanSo(const CPhanSo& k) {
	tu = k.tu;
	mau = k.mau;
	cout << "Phuong thuc sao chep thong tin tu doi tuong khac \n";
}
CPhanSo::~CPhanSo() {
	cout << "Phuong thuc pha huy \n";
}