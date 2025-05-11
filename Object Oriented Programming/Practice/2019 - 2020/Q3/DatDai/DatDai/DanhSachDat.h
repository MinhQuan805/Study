#pragma once
#include "DatDai.h"
#include "DatNongNghiep.h"
#include "DatO.h"

class DanhSachDat
{
protected:
	DatDai* ListDat[50];
	int size;
public:
	void Nhap() {
		cout << "Nhap So Luong Dat: ";
		cin >> size;
		int n;
		for (int i = 0; i < size; i++) {
			cout << "Nhap Kieu Dat: 1 = Dat Nong Nghiep, 2 = Dat O: ";
			cin >> n;
			if (n == 1) {
				ListDat[i] = new DatNongNghiep();
				ListDat[i]->Nhap();
			}
			else {
				ListDat[i] = new DatO();
				ListDat[i]->Nhap();
			}
		}
	}
	DatDai* DongThueNhieuNhat() {
		DatDai *max = ListDat[0];
		for (int i = 0; i < size; i++) {
			if (max->TinhThue() <= ListDat[i]->TinhThue()) {
				max = ListDat[i];
			};
		}
		return max;
	}
};

