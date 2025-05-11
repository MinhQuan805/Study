#pragma once
#include <iostream>
using namespace std;
class CDiem
{
private:
	float x;
	float y;

public:
	void Nhap();
	void Xuat();
	float KhoangCach(CDiem);
	void setX(float xx);
	float getX();
	void setY(float yy);
	float getY();
};