#include "Ngay.h"

CNgay::CNgay() : ngay(1), thang(1), nam(1) {}
CNgay::CNgay(int d, int m, int y) : ngay(d), thang(m), nam(y) {}

void CNgay::Nhap()
{
    cout << "Nhap ngay: ";
    cin >> ngay;
    cout << "Nhap thang: ";
    cin >> thang;
    cout << "Nhap nam: ";
    cin >> nam;
}
void CNgay::Xuat() {
    cout << ngay << "/" << thang << "/" << nam << endl;
}

bool CNgay::NamNhuan(int a) {
    if (a % 4 == 0 && a % 100 != 0)
        return true;
    if (a % 400 == 0)
        return true;
    return false;
}

long CNgay::SoThuTu() {
    long num = 0;
    for (int i = 1; i < nam; i++) {
        if (CNgay::NamNhuan(i))
            num += 366;
        else
            num += 365;
    }
    int month[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    if (CNgay::NamNhuan(nam))
        month[1]++;
    for (int i = 1; i < thang; i++) {
        num += month[i - 1];
    }
    num += ngay;
    return num;
}

CNgay CNgay::TimNgay(long num) {
    int year = 1;
    int day = 365;
    while (num - day > 0) {
        num -= day;
        year++;
        if (CNgay::NamNhuan(year))
            day = 366;
        else
            day = 365;
    }
    int months[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    if (CNgay::NamNhuan(year))
        months[1]++;
    int month = 1;
    while (num - months[month - 1] > 0) {
        num = num - months[month - 1];
        month++;
    }
    return CNgay(num, month, year);
}

CNgay CNgay::NgayMai() {
    long num = this->SoThuTu();
    num++;
    return (this->TimNgay(num));
}