#include <iostream>

using namespace std;

struct PhanSo {
    int tu, mau;
};
int SoLonNhat(PhanSo& PS1, PhanSo& PS2);
void Nhap(PhanSo& PS);
void Xuat(PhanSo& PS);

int main() {
    PhanSo PS1;
    PhanSo PS2;
    Nhap(PS1);
    Nhap(PS2);
    int result = SoLonNhat(PS1, PS2);
    switch (result) {
    case 1:
        Xuat(PS1);
        break;
    case 2:
        Xuat(PS2);
        break;
    case 0:
        cout << "Hai Phan So Bang Nhau" << endl;
        break;
    }
}
int SoLonNhat(PhanSo& PS1, PhanSo& PS2) {
    if (PS1.tu * PS2.mau > PS2.tu * PS1.mau)
        return 1;
    else if (PS1.tu * PS2.mau < PS2.tu * PS1.mau)
        return 2;
    else
        return 0;
}

void Nhap(PhanSo& PS) {
    cout << "Nhap tu so: ";
    cin >> PS.tu;
    cout << "Nhap mau so: ";
    cin >> PS.mau;
}
void Xuat(PhanSo& PS) {
    cout << "Phan so lon nhat la: " << PS.tu << "/" << PS.mau << endl;
}
