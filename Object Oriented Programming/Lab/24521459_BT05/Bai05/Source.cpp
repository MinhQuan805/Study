#include "CSoPhuc.h"
int main() {
	CSoPhuc sp1(1, -1.4);
	cout << "So Phuc Truoc Khi Gan: ";
	sp1.Xuat();
	CSoPhuc sp2(3.6, 5);
	sp1 = sp2;
	cout << "So Phuc Sau Khi Gan: ";
	sp1.Xuat();
}