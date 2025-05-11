#include "Ngay.h"

int main() {
    CNgay x;
    x.Nhap();
    cout << "Ngay nhap la ";
    x.Xuat();
    cout << endl;
    CNgay result = x.NgayMai();
    cout << "Ngay ke tiep la ";
    result.Xuat();
    cout << endl;
    return 0;
}