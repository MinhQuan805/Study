#include "CDuongThang.h"
int main() {
	CDuongThang n1(1, 2);
	cout << "Duong Thang Truoc Khi Gan: ";
	n1.Xuat();
	CDuongThang n2(3, -2);
	n1 = n2;
	cout << "Duong Thang Sau Khi Gan: ";
	n1.Xuat();
}