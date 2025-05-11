#include "CNgay.h"
int main() {
	CNgay n1(1, 2, 30);
	cout << "Ngay Truoc Khi Gan: ";
	n1.Xuat();
	CNgay n2(3, 5, 2025);
	n1 = n2;
	cout << "Ngay Sau Khi Gan: ";
	n1.Xuat();
}