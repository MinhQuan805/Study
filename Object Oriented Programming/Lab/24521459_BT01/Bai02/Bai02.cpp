#include <iostream>
#include <cmath>
using namespace std;
struct Diem {
    float x, y;
};
void Nhap(Diem& d);
void Xuat(Diem d);
float KhoangCach(Diem A, Diem B);

int main() {
    Diem A;
    Diem B;
    Nhap(A);
    Nhap(B);
    Xuat(A);
    Xuat(B);
    cout << "Khoang cach giua hai diem = " << KhoangCach(A, B) << endl;
}
float KhoangCach(Diem A, Diem B) {
    return sqrt(pow((A.x - B.x), 2) + pow((A.y - B.y), 2));
}
void Nhap(Diem& d) {
    cout << "Nhap x: ";
    cin >> d.x;
    cout << "Nhap y: ";
    cin >> d.y;
}
void Xuat(Diem d) {
    cout << "Diem la: (" << d.x << "," << d.y << ")" << endl;
}
