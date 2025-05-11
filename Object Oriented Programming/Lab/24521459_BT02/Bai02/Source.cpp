#include <iostream>
#include "Diem.h"
using namespace std;

int main() {
    CDiem A;
    CDiem B;
    cout << "Nhap diem thu nhat \n";
    A.Nhap();
    cout << "Nhap diem thu hai \n";
    B.Nhap();
    cout << endl;
    cout << "Diem thu nhat: ";
    A.Xuat();
    cout << "Diem thu hai: ";
    B.Xuat();
    cout << "Khoang cach giua hai diem = " << A.KhoangCach(B) << endl;
}