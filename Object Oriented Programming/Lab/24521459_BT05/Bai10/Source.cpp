#include "CDuongTron.h"
int main() {
	CDuongTron p(1, 2, 4);
	cout << "Duong Tron Truoc Khi Gan: ";
	p.Xuat();
	CDuongTron q(3, -2, 3);
	p = q;
	cout << "Duong Tron Sau Khi Gan: ";
	p.Xuat();
}