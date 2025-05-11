#include "CDonThuc.h"
int main() {
	CDonThuc n1(1, 2);
	cout << "Don Thuc Truoc Khi Gan: ";
	n1.Xuat();
	CDonThuc n2(3, 2);
	n1 = n2;
	cout << "Don Thuc Sau Khi Gan: ";
	n1.Xuat();
}