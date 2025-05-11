#pragma once
#include <iostream>
using namespace std;
class CDiemKhongGian
{
private:
	int x, y, z;
public:
	friend istream& operator>>(istream&, CDiemKhongGian&);
	friend ostream& operator<<(ostream&, const CDiemKhongGian&);
	CDiemKhongGian();
	CDiemKhongGian(int, int, int);
	CDiemKhongGian(const CDiemKhongGian&);
	~CDiemKhongGian();
};