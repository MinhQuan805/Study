#pragma once
#include <iostream>
using namespace std;

class CDiem
{
private:
	int x;
	int y;
public:
	friend istream& operator>>(istream&, CDiem&);
	friend ostream& operator<<(ostream&, CDiem&);
	CDiem();
	CDiem(int, int);
	CDiem(const CDiem&);
	~CDiem();
};