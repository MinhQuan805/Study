#include <iostream>
#include <cmath>

using namespace std;

struct Ngay {
    int ngay, thang, nam;
};

void Nhap(Ngay&);
void Xuat(Ngay);
bool NamNhuan(Ngay);
long SoThuTu(Ngay);
Ngay TimNgay(int, Ngay);
Ngay NgayMai(Ngay);

int main() {
    Ngay x;
    Nhap(x);
    cout << "Ngay nhap la ";
    Xuat(x);
    cout << endl;
    Ngay result = NgayMai(x);
    cout << "Ngay ke tiep la ";
    Xuat(result);
    cout << endl;
    return 0;
}

void Nhap(Ngay& x)
{
    cout << "Nhap ngay: ";
    cin >> x.ngay;
    cout << "Nhap thang: ";
    cin >> x.thang;
    cout << "Nhap nam: ";
    cin >> x.nam;
}
void Xuat(Ngay x) {
    cout << x.ngay << "/" << x.thang << "/" << x.nam << endl;
}

bool NamNhuan(int a) {
    if (a % 4 == 0 && a % 100 != 0)
        return true;
    if (a % 400 == 0)
        return true;
    return false;
}

long SoThuTu(Ngay x) {
    int nam = 1;
    long num = 0;
    for (int i = 1; i < x.nam; i++) {
        if (NamNhuan(i))
            num += 366;
        else
            num += 365;
    }
    int thang[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    if (NamNhuan(x.nam))
        thang[1]++;
    for (int i = 1; i < x.thang; i++) {
        num += thang[i - 1];
    }
    num += x.ngay;
    return num;
}

Ngay TimNgay(long num, Ngay& x) {
    int nam = 1;
    int ngay = 365;
    while (num - ngay > 0) {
        num -= ngay;
        nam++;
        if (NamNhuan(nam))
            ngay = 366;
        else
            ngay = 365;
    }
    int thang[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    if (NamNhuan(nam))
        thang[1]++;
    x.thang = 1;
    while (num - thang[x.thang - 1] > 0) {
        num = num - thang[x.thang - 1];
        x.thang++;
    }
    x.ngay = num;
    return x;
}

Ngay NgayMai(Ngay x) {
    long num = SoThuTu(x);
    num++;
    return (TimNgay(num, x));
}
