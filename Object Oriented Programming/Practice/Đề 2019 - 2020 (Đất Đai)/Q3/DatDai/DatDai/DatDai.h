#pragma once
#include "ChuSoHuu.h"
#include "Ngay.h"
class DatDai
{
private:
	int SoGiay;
	ChuSoHuu nguoi;
	int SoThuaDat;
	int SoToBanDo;
	string DiaChiDat;
	int DienTich;
	Ngay NgayCap;
	int TienThue;
public:
	virtual void Nhap();
	virtual void Xuat();
	virtual bool KiemTraNongNghiep();
	int TinhThue();
};

