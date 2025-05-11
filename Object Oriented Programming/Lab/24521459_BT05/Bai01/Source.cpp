#include "CDiem.h"
int main() {
	CDiem d(1, 2);
	cout << "Diem Truoc Khi Gan: ";
	d.Xuat();
	CDiem p(3, 5);
	d = p;
	cout << "Diem Truoc Khi Gan: ";
	d.Xuat();
}