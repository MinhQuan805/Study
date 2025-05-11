#pragma once
#include <iostream>
using namespace std;

class CDaThucDong
{
private:
	int n;
	float *a;
public:
	friend istream& operator>>(istream&, CDaThucDong&);
	friend ostream& operator<<(ostream&, const CDaThucDong&);
	CDaThucDong();
	CDaThucDong(int, float[]);
	CDaThucDong(const CDaThucDong&);
	~CDaThucDong();
};