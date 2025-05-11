#include "CNgay.h"
istream& operator>>(istream& is, CNgay& X)
{
    cout << "Nhap ngay: ";
    is >> X.ngay;
    cout << "Nhap thang: ";
    is >> X.thang;
    cout << "Nhap nam: ";
    is >> X.nam;
    return is;
}
ostream& operator<<(ostream& os, CNgay& X) {
    os << "Ngay thang nam la " << X.ngay << "/" << X.thang << "/" << X.nam << endl;
    return os;
}
CNgay::CNgay() {
    ngay = 1;
    thang = 1;
    nam = 2000;
    cout << "Phuong thuc khoi tao mac dinh\n";
}

CNgay::CNgay(int ngay, int thang, int nam) {
    this->ngay = ngay;
    this->thang = thang;
    this->nam = nam;
    cout << "Phuong thuc thiet lap khi biet dang thong tin cua doi tuong\n";
}

CNgay::CNgay(const CNgay& ng) {
    ngay = ng.ngay;
    thang = ng.thang;
    nam = ng.nam;
    cout << "Phuong thuc sao chep thong tin tu doi tuong khac\n";
}

CNgay::~CNgay() {
    cout << "Phuong thuc pha huy\n";
}
