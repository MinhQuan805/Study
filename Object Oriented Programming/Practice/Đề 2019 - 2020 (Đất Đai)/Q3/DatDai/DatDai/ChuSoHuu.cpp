#include "ChuSoHuu.h"

void ChuSoHuu::Nhap() {
	cout << "Nhap Ho Va Ten: ";
	cin.ignore();
	getline(cin, HoTen);
	cout << "Nhap Nam Sinh: ";
	cin >> NamSinh;
	cin.ignore();
	cout << "Nhap CMND: ";
	getline(cin, CMND);
	cout << "Nhap Dia Chi: ";
	getline(cin, DiaChi);
}
void ChuSoHuu::Xuat() {
	cout << HoTen << ", " << NamSinh << ", " << CMND << ", " << DiaChi << endl;
}