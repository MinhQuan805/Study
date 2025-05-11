#include <iostream>
#include <cmath>

using namespace std;

struct Diem {
    float x, y;
};

struct TamGiac
{
    Diem A, B, C;
};

void NhapDiem(Diem& d);
void XuatDiem(Diem d);
float KhoangCach(Diem A, Diem B);
void NhapTam(TamGiac& t);
void XuatTam(TamGiac t);
void NhapDiem(Diem& d);
void XuatTam(TamGiac t);
float ChuVi(float AB, float AC, float BC);
float DienTich(float AB, float AC, float BC);
void ToaDo(TamGiac t);

int main() {
    TamGiac t;
    NhapTam(t);
    XuatTam(t);
    float AB = KhoangCach(t.A, t.B);
    cout << "Khoang cach giua hai diem A va B la " << AB << endl;
    float AC = KhoangCach(t.A, t.C);
    cout << "Khoang cach giua hai diem A va C la " << AC << endl;
    float BC = KhoangCach(t.B, t.C);
    cout << "Khoang cach giua hai diem B va C la " << BC << endl;
    cout << endl;
    cout << "Chu Vi cua tam giac la " << ChuVi(AB, AC, BC) << endl;
    cout << endl;
    cout << "Dien Tich cua tam giac la " << DienTich(AB, AC, BC) << endl;
    cout << endl;
    ToaDo(t);
}
float KhoangCach(Diem A, Diem B) {
    return sqrt(pow((A.x - B.x), 2) + pow((A.y - B.y), 2));
}
void NhapDiem(Diem& d) {
    cout << "Nhap x: ";
    cin >> d.x;
    cout << "Nhap y: ";
    cin >> d.y;
}
void XuatDiem(Diem d) {
    cout << "(" << d.x << "," << d.y << ")" << endl;
}

void NhapTam(TamGiac& t)
{
    cout << "Nhap diem A" << endl;
    NhapDiem(t.A);
    cout << endl;
    cout << "Nhap diem B" << endl;
    NhapDiem(t.B);
    cout << endl;
    cout << "Nhap diem C" << endl;
    NhapDiem(t.C);
    cout << endl;
}
void XuatTam(TamGiac t)
{
    cout << "Diem A: ";
    XuatDiem(t.A);
    cout << "Diem B: ";
    XuatDiem(t.B);
    cout << "Diem C: ";
    XuatDiem(t.C);
    cout << endl;
}

float ChuVi(float AB, float AC, float BC) {
    return (AB + AC + BC);
}

float DienTich(float AB, float AC, float BC) {
    float p = (AB + AC + BC) / 2;
    return sqrt(p * (p - AB) * (p - AC) * (p - BC));
}
void ToaDo(TamGiac t) {
    cout << "Toa Do tam giac la " << "(" << (t.A.x + t.B.x + t.C.x) / 3 << "," << (t.A.y + t.B.y + t.C.y) / 3 << ")" << endl;
}
