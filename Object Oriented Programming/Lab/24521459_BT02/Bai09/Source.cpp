#include "Circle.h"

int main() {
    CCircle Tron;
    Tron.NhapCircle();
    Tron.XuatCircle();
    cout << "Chu vi hinh tron la " << Tron.ChuVi() << " cm" << endl;
    cout << endl;
    cout << "Dien tich hinh tron la " << Tron.DienTich() << " cm" << endl;
}