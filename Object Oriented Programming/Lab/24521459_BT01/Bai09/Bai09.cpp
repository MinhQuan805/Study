#include <iostream>
#include <cmath>
using namespace std;
struct Diem {
    float x, y;
};
struct Circle {
    Diem O;
    float R;
};
void NhapDiem(Diem& d);
void XuatDiem(Diem d);
void NhapCircle(Circle& Tron);
void XuatCircle(Circle Tron);
float ChuVi(Circle Tron);
float DienTich(Circle Tron);

int main() {
    Circle Tron;
    NhapCircle(Tron);
    XuatCircle(Tron);
    cout << "Chu vi hinh tron la " << ChuVi(Tron) << endl;
    cout << endl;
    cout << "Dien tich hinh tron la " << DienTich(Tron) << endl;
}
void NhapDiem(Diem& d) {
    cout << "Nhap x: ";
    cin >> d.x; 
    cout << "Nhap y: ";
    cin >> d.y;
}
void XuatDiem(Diem d) {
    cout << "Tam duong tron la: (" << d.x << "," << d.y << ")" << endl;
}

void NhapCircle(Circle& Tron) {
    cout << "Nhap Duong Tron: " << endl;
    NhapDiem(Tron.O);
    cout << "Nhap Ban Kinh: ";
    cin >> Tron.R;
    cout << endl;
}
void XuatCircle(Circle Tron) {
    XuatDiem(Tron.O);
    cout << "Ban Kinh Duong Tron la " << Tron.R << endl;
    cout << endl;
}
float ChuVi(Circle Tron) {
    return 2 * 3.14 * Tron.R;
}
float DienTich(Circle Tron) {
    return 3.14 * Tron.R * Tron.R;
}   
