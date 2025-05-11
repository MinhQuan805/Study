#include "CDiemKhongGian.h"
int main() {
	CDiemKhongGian d(1, 2, 5);
	cout << "Diem Truoc Khi Gan: ";
	d.Xuat();
	CDiemKhongGian p(3, 5, 8);
	d = p;
	cout << "Diem Sau Khi Gan: ";
	d.Xuat();
}