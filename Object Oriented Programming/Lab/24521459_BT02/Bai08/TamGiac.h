#pragma once
#include <iostream>
#include "Diem.h"
using namespace std;

class CTamGiac
{
private:
	CDiem A;
	CDiem B;
	CDiem C;

public:
	void Nhap();
	void Xuat();
	float ChuVi();
	float DienTich();
	CDiem TrongTam();
};
