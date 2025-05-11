#include "CPhanSo.h"
int main() {
	CPhanSo PS1(1, 2);
	cout << "Phan So Truoc Khi Gan: ";
	PS1.Xuat();
	CPhanSo PS2(3, 5);
	PS1 = PS2;
	cout << "Phan So Sau Khi Gan: ";
	PS1.Xuat();
}