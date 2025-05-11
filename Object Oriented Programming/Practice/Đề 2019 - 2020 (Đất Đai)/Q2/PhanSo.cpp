#include <iostream>
using namespace std;


class PhanSo {
private:
    int tu;
    int mau;
public:
    PhanSo();
    PhanSo(int a);
    PhanSo(int a, int b);
    PhanSo operator+(const PhanSo&) const;
    friend PhanSo operator+(const PhanSo& ps, int x);
    friend PhanSo operator+(int x, const PhanSo& ps);
    bool operator==(PhanSo&);
    friend istream& operator>>(istream& is, PhanSo& x);
    friend ostream& operator<<(ostream& os, const PhanSo& x);
};
PhanSo::PhanSo() {
    tu = 0;
    mau = 1;
}
PhanSo::PhanSo(int a) {
    tu = a;
    mau = 1;
}
PhanSo::PhanSo(int a, int b) {
    tu = a;
    mau = b;
}
PhanSo PhanSo::operator+(const PhanSo& x) const {
    // Vì đây là hàm thành viên của lớp PhanSo,
    // nên có quyền truy cập vào các thành phần private của đối tượng x cùng kiểu PhanSo.
    PhanSo temp;
    temp.tu = x.tu * this->mau + this->tu * x.mau;
    temp.mau = this->mau * x.mau;
    return temp;
}
// Phải dùng friend vì có 2 đối tượng (ps và x) không thể viết cả 2 vào được
// Với hàm thành viên, thì đối tượng ở bên trái toán tử phải là đối tượng thuộc lớp đó, bên phải là đối số
// Bên trái giải thích cho >> và <<
PhanSo operator+(const PhanSo& ps, int x) {
    return ps + PhanSo(x);
}
PhanSo operator+(int x, const PhanSo& ps) {
    return PhanSo(x) + ps;
}

bool PhanSo::operator==(PhanSo &y) {
    float s1 = (float) this->tu / this->mau;
    float s2= (float) y.tu / y.mau;
    if (s1 == s2) 
        return true;
    return false;
}
istream& operator>>(istream& is, PhanSo& x) {
    cout << "Nhap tu so: ";
	is >> x.tu;
	cout << "Nhap mau so: ";
	is >> x.mau;
	return is;
}
ostream& operator<<(ostream& os, const PhanSo& x) {
	os << x.tu  << "/" << x.mau;
	return os;
}
int main() {
    PhanSo a(5, 3);
    PhanSo b, c, kq;
    cin >> b >> c;
    kq = a + b + 5 + c;
    cout << "Ket qua la: " << kq;
    if (a == b)
        cout << "Phan so a bang phan so b" << endl;
}