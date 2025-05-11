#pragma once
#include "DatDai.h"
#include <iostream>
using namespace std;
class DatNongNghiep : public DatDai 
{
private:
	int HetHan;
public:
	void Nhap();
	void Xuat();
	int GetHetHan();
	bool KiemTraNongNghiep();
};

