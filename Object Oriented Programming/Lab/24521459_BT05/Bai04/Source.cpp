#include "CHonSo.h"
int main() {
	CHonSo hs1(1, 1, 1);
	cout << "Hon So Truoc Khi Gan: ";
	hs1.Xuat();
	CHonSo hs2(3, 5, 6);
	hs1 = hs2;
	cout << "Hon So Sau Khi Gan: ";
	hs1.Xuat();
}