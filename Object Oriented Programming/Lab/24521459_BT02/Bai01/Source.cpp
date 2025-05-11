#include <iostream>
#include "PhanSo.h"
using namespace std;

int main() {
	CPhanSo PS;
	PS.Nhap();
	PS.Xuat();
	int kq = PS.XetAm();
	switch (kq)
	{
		case 1: cout << "\nPhan so > 0 ";
			break;
		case -1: cout << "\nPhan so < 0";
			break;
		case 0: cout << "\nPhan so = 0";
			break;
	}
	return 1;

}