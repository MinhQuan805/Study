#pragma once
#include <iostream>
using namespace std;

class CDaThucTinh
{
private:
	int n;
	float a[100];
public:
	friend istream& operator>>(istream&, CDaThucTinh&);
	friend	ostream& operator<<(ostream&, CDaThucTinh&);
	CDaThucTinh();
	CDaThucTinh(int, float[]);
	CDaThucTinh(const CDaThucTinh&);
	~CDaThucTinh();
};