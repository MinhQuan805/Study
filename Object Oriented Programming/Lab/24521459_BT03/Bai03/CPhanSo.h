#pragma once
#include <iostream>
using namespace std;
class CPhanSo
{
private:
	int tu;
	int mau;
public:
	CPhanSo();
	CPhanSo(int a, int b);
	CPhanSo(const CPhanSo& k);
	~CPhanSo();
};