#pragma once
#include <iostream>
using namespace std;

class CDiemKhongGian
{
private:
	int x;
	int y;
	int z;
public:
	friend istream& operator>>(istream&, CDiemKhongGian&);
	friend ostream& operator<<(ostream&, CDiemKhongGian&);
	CDiemKhongGian();
	CDiemKhongGian(int, int, int);
	CDiemKhongGian(const CDiemKhongGian&);
	~CDiemKhongGian();
};