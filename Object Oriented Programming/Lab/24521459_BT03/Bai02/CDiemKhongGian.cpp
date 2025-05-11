#include "CDiemKhongGian.h"

CDiemKhongGian::~CDiemKhongGian() {
	cout << "Phuong thuc pha huy \n";
}
CDiemKhongGian::CDiemKhongGian() {
	x = 0;
	y = 0;
	z = 0;
	cout << "Phuong thuc khoi tao mac dinh \n";
}
CDiemKhongGian::CDiemKhongGian(int xx, int yy, int zz) {
	x = xx;
	y = yy;
	z = zz;
	cout << "Phuong thuc thiet lap khi biet dang thong tin cua doi tuong \n";
}

CDiemKhongGian::CDiemKhongGian(const CDiemKhongGian& a) {
	x = a.x;
	y = a.y;
	z = a.z;
	cout << "Phuong thuc sao chep thong tin tu doi tuong khac \n";
}