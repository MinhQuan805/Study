#include "CThoiGian.h"
int main() {
	CThoiGian n1(1, 2, 12);
	cout << "Thoi Gian Truoc Khi Gan: ";
	n1.Xuat();
	CThoiGian n2(3, 12, 30);
	n1 = n2;
	cout << "Thoi Gian Sau Khi Gan: ";
	n1.Xuat();
}