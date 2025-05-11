#include <iostream>
using namespace std;
#include "TamGiac.h"
#include "Diem.h"
int main()
{
	CTamGiac tg;
	tg.Nhap();
	tg.Xuat();
	float p = tg.ChuVi();
	float s = tg.DienTich();
	cout << "Chu vi tam giac = " << p << endl;
	cout << "Dien tich tam giac = " << s << endl;
	CDiem G = tg.TrongTam();
	cout << "Trong tam tam giac = ";
	G.Xuat();
	return 1;
}