#include "DatO.h"
#include "DatNongNghiep.h"
#include "DatDai.h"
#include "DanhSachDat.h"
int main() {
	DanhSachDat List;
	List.Nhap();
	DatDai* max = List.DongThueNhieuNhat();
	cout << endl;
	max->Xuat();
}