#pragma once
#include <iostream>
using namespace std;

class CMaTranDong
{
private:
	int m;
	int n;
	float** a;
public:
	friend istream& operator>>(istream&, CMaTranDong&);
	friend	ostream& operator<<(ostream&, CMaTranDong&);
	CMaTranDong();
	CMaTranDong(int, int, float[][100]);
	CMaTranDong(const CMaTranDong&);
	~CMaTranDong();
};