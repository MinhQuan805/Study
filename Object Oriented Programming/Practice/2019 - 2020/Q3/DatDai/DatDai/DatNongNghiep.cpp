#include "DatNongNghiep.h"

void DatNongNghiep::Nhap() {
	DatDai::Nhap();
	cout << "Nhap Nam Het Han: ";
	cin >> HetHan;
}
void DatNongNghiep::Xuat() {
	DatDai::Xuat();
	cout << "Nam Het Han La: " << HetHan << endl;
}
int DatNongNghiep::GetHetHan() {
	return HetHan;
}
bool DatNongNghiep::KiemTraNongNghiep() {
	return true;
}
