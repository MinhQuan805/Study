#pragma once
#include <iostream>
using namespace std;
class CDiemKhongGian
{
private:
	int x, y, z;
public:
	CDiemKhongGian();
	CDiemKhongGian(int xx, int yy, int zz);
	CDiemKhongGian(const CDiemKhongGian& a);
	~CDiemKhongGian();
};