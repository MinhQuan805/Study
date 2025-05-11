#include "CTamGiac.h"
int main() {
	CTamGiac p(1, 2, 4);
	cout << "Canh Tam Giac Truoc Khi Gan: ";
	p.Xuat();
	CTamGiac q(3, 6, 3);
	p = q;
	cout << "Canh Tam Giac Sau Khi Gan: ";
	p.Xuat();
}