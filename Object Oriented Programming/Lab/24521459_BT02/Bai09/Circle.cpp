#include "Circle.h"
#include "Diem.h"

void CCircle::NhapCircle() {
    O.NhapDiem();
    cout << "Nhap Ban Kinh: ";
    cin >> R;
    cout << endl;
}
void CCircle::XuatCircle() {
    O.XuatDiem();
    cout << "Ban Kinh Duong Tron: " << R << " cm" << endl;
    cout << endl;
}
float CCircle::ChuVi() {
    return 2 * 3.14 * R;
}
float CCircle::DienTich() {
    return 3.14 * R * R;
}