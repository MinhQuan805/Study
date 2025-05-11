#include "DatDai.h"

void DatDai::Nhap() {
	cout << "Nhap So Giay Chung Nhan: ";
	cin >> SoGiay;
	cout << "Nhap Thong Tin Nguoi So Huu" << endl;
	nguoi.Nhap();
	cout << "Nhap So Thua Dat: ";
	cin >> SoThuaDat;
	cout << "Nhap So To Ban Do: ";
	cin >> SoToBanDo;
	cin.ignore();
	cout << "Nhap So Dia Chi Dat: ";
	getline(cin, DiaChiDat);
	cout << "Nhap Dien Tich Dat (m2): ";
	cin >> DienTich;
	cout << "Nhap So Tien Thue Phai Dong Tren Moi m2 (trieu): ";
	cin >> TienThue;
	cout << "Nhap Ngay Cap" << endl;
	NgayCap.Nhap();
}
void DatDai::Xuat() {
	cout << "So Giay Chung Nhan: " << SoGiay << endl;
	cout << "Thong Tin Nguoi So Huu: ";
	nguoi.Xuat();
	cout << "So Thua Dat: " << SoThuaDat << endl;
	cout << "So To Ban Do: " << SoToBanDo << endl;
	cout << "So Dia Chi Dat: " << DiaChiDat << endl;
	cout << "Dien Tich Dat: " << DienTich << " m2" << endl;
	cout << "So Tien Thue Phai Dong Tren Moi m2: " << TienThue << " trieu" << endl;
	cout << "Tong So Tien Thue Phai: " << this->TinhThue() << " trieu" << endl;
	cout << "Ngay Cap La: ";
	NgayCap.Xuat();
}
bool DatDai::KiemTraNongNghiep() {
	return false;
}
int DatDai::TinhThue() {
	return DienTich * TienThue;
}