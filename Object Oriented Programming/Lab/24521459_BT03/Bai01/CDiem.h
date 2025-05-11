#pragma once
#include <iostream>
using namespace std;

class CDiem
{
private:
	int x;
	int y;
public:
	CDiem();
	CDiem(int xx, int yy);
	CDiem(const CDiem& a);
	~CDiem();
};