#pragma once
#include <iostream>
using namespace std;

class CMangDong
{
private:
	int n;
	float *a;
public:
	friend istream& operator>>(istream&, CMangDong&);
	friend	ostream& operator<<(ostream&, CMangDong&);
	CMangDong();
	CMangDong(int, float[]);
	CMangDong(const CMangDong&);
	~CMangDong();
};
