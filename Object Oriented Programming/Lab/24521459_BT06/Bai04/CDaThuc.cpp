#include "CDaThuc.h"

istream& operator>>(istream& is, CDaThuc& F) {
	cout << "Nhap So Bac: ";
	is >> F.n;
	for (int i = F.n; i >= 0; i--) {
		cout << "Nhap a[" << i << "]: ";
		is >> F.a[i];
	}
	return is;
}
ostream& operator<<(ostream& os, const CDaThuc F) {
	os << F.a[F.n] << "x^" << F.n;
	for (int i = F.n - 1; i >= 0; i--) {
		if (F.a[i] != 0) {
			if (F.a[i] >= 0) {
				os << " + ";
				os << F.a[i];
			}
			else {
				os << " - ";
				os << -F.a[i];
			}
			if (i != 0) {
				os << "x^";
				os << i;
			}
		}
	}
	return os;
}
int LonNhat(int a, int b) {
	return (a >= b) ? a : b;
}
void CDaThuc::RutGon() {
	while (n > 0 && a[n] == 0)
		n--;
}

CDaThuc CDaThuc::operator+(const CDaThuc& F) {
	CDaThuc temp;
	temp.n = LonNhat(n, F.n);
	for (int i = 0; i <= temp.n; i++)
		temp.a[i] = 0;
	for (int i = 0; i <= n; i++)
		temp.a[i] += a[i];
	for (int i = 0; i <= F.n; i++)
		temp.a[i] += F.a[i];
	temp.RutGon();
	return temp;
}
	CDaThuc CDaThuc::operator-(const CDaThuc& F) {
		CDaThuc temp;
		temp.n = LonNhat(n, F.n);
		for (int i = 0; i <= temp.n; i++)
			temp.a[i] = 0;
		for (int i = 0; i <= n; i++)
			temp.a[i] += a[i];
		for (int i = 0; i <= F.n; i++)
			temp.a[i] -= F.a[i];
		temp.RutGon();
		return temp;
	}

CDaThuc& CDaThuc::operator+=(const CDaThuc& F) {
	CDaThuc temp;
	temp.n = LonNhat(n, F.n);
	for (int i = 0; i <= temp.n; i++)
		temp.a[i] = 0;
	for (int i = 0; i <= n; i++)
		temp.a[i] += a[i];
	for (int i = 0; i <= F.n; i++)
		temp.a[i] += F.a[i];
	temp.RutGon();
	*this = temp;
	return *this;
}
CDaThuc& CDaThuc::operator-=(const CDaThuc& F) {
	CDaThuc temp;
	temp.n = LonNhat(n, F.n);
	for (int i = 0; i <= temp.n; i++)
		temp.a[i] = 0;
	for (int i = 0; i <= n; i++)
		temp.a[i] += a[i];
	for (int i = 0; i <= F.n; i++)
		temp.a[i] -= F.a[i];
	temp.RutGon();
	*this = temp;
	return *this;
}

CDaThuc CDaThuc::operator*(const CDaThuc& F) {
	CDaThuc temp;
	temp.n = LonNhat(n, F.n);
	for (int i = 0; i <= temp.n; i++)
		temp.a[i] = 0;
	for (int i = 0; i < F.n; i++)
		for (int j = 0; j < n; j++)
			temp.a[i + j] += F.a[i] * a[j];
	temp.RutGon();
	return temp;
}
CDaThuc CDaThuc::operator/(const CDaThuc& F) {
	CDaThuc temp;
	temp.n = LonNhat(n - F.n, 0);
	for (int i = 0; i <= temp.n; i++)
		temp.a[i] = 0;
	CDaThuc BC = *this;
	CDaThuc C = F;
	while (BC.n >= C.n) {
		CDaThuc TG;
		TG.n = BC.n - C.n;
		for (int i = 0; i <= TG.n; i++)
			TG.a[i] = 0;
		TG.a[TG.n] = BC.a[BC.n] / C.a[C.n];
		temp = temp + TG;
		CDaThuc Tru = TG * C;
		BC = BC - Tru;
	}
	temp.RutGon();
	return temp;
}
CDaThuc& CDaThuc::operator*=(const CDaThuc& F) {
	CDaThuc temp;
	temp.n = LonNhat(n, F.n);
	for (int i = 0; i <= temp.n; i++)
		temp.a[i] = 0;
	for (int i = 0; i <= F.n; i++)
		for (int j = 0; j <= n; j++)
			temp.a[i + j] += F.a[i] * a[j];
	temp.RutGon();
	*this = temp;
	return *this;
}
CDaThuc& CDaThuc::operator/=(const CDaThuc& F) {
	CDaThuc temp;
	temp.n = LonNhat(n - F.n, 0);
	for (int i = 0; i <= temp.n; i++)
		temp.a[i] = 0;
	CDaThuc BC = *this;
	CDaThuc C = F;
	while (BC.n >= C.n) {
		CDaThuc TG;
		TG.n = BC.n - C.n;
		for (int i = 0; i <= TG.n; i++)
			TG.a[i] = 0;
		TG.a[TG.n] = BC.a[BC.n] / C.a[C.n];
		temp = temp + TG;
		CDaThuc Tru = TG * C;
		BC = BC - Tru;
		BC.RutGon();
	}
	temp.RutGon();
	*this = temp;
	return *this;
}