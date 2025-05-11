#include "TamGiac.h"
#include <cmath>
void CTamGiac::Nhap()
{
	cout << "Nhap toa do diem A: " << endl;
	A.Nhap();
	cout << "Nhap toa do diem B: " << endl;
	B.Nhap();
	cout << "Nhap toa do diem C: " << endl;
	C.Nhap();
}

void CTamGiac::Xuat()
{
	cout << "Thong tin cua tam giac: " << endl;
	cout << "A: ";
	A.Xuat();
	cout << "B: ";
	B.Xuat();
	cout << "C: ";
	C.Xuat();
}
float CTamGiac::ChuVi()
{
	float AB = A.KhoangCach(B);
	float AC = A.KhoangCach(C);
	float BC = B.KhoangCach(C);
	return (AB + AC + BC);
}
float CTamGiac::DienTich()
{
	float p = ChuVi() / 2;
	float a = A.KhoangCach(B);
	float c = A.KhoangCach(C);
	float b = B.KhoangCach(C);
	return sqrt(p * (p - a) * (p - b) * (p - c));
}

CDiem CTamGiac::TrongTam()
{
	CDiem G;
	float gtX = (A.getX() + B.getX() + C.getX()) / 3;
	float gtY = (A.getY() + B.getY() + C.getY()) / 3;
	G.setX(gtX);
	G.setY(gtY);
	return G;
}