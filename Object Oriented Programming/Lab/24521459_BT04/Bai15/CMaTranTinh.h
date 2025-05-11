#pragma once
#include <iostream>
using namespace std;

class CMaTranTinh
{
private:
	int m;
	int n;
	float a[100][100];
public:
	friend istream& operator>>(istream&, CMaTranTinh&);
	friend	ostream& operator<<(ostream&, CMaTranTinh&);
	CMaTranTinh();
	CMaTranTinh(int, int, float[][100]);
	CMaTranTinh(const CMaTranTinh&);
	~CMaTranTinh();
};
