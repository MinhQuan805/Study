#include <iostream>
#include "CDiem.h"
#include "CNgay.h"
#include "CThoiGian.h"
#include "CDonThuc.h"
#include "CDiemKhongGian.h"
#include "CDuongThang.h"
#include "CTamGiac.h"
#include "CHinhCau.h"

using namespace std;

int main() {
    CDiem A(3, 4), B(5, 6);
    cout << "Hai Diem: ";
    cout << ((A == B) ? "A == B" : "A != B") << endl;
    cout << endl;

    CNgay day1(9, 5, 2025), day2(9, 5, 2025);
    cout << ((day1 == day2) ? "Hai ngay giong nhau" : "Hai ngay khac nhau") << endl;
    cout << endl;


    CThoiGian t1(12, 0, 60), t2(13, 1, 0);
    cout << "Hai Thoi Gian: ";
    cout << ((t1 == t2) ? "t1 == t2" : "t1 != t2") << endl;
    cout << endl;

    CDonThuc dt1(2, 3), dt2(2, 3);
    cout << "Hai Don Thuc: ";
    cout << ((dt1 == dt2) ? "dt1 == dt2" : "dt1 != dt2") << endl;
    cout << endl;

    CDiemKhongGian C(2, 4, 3), D(2, 4, 3);
    cout << "Hai Diem Khong Gian: ";
    cout << ((C == D) ? "C == D" : "C != D") << endl;
    cout << endl;

    CDuongThang AB(2, 3), CD(2, 3);
    cout << "Hai Duong Thang: ";
    cout << ((AB == CD) ? "AB == CD" : "AB != CD") << endl;
    cout << endl;

    CTamGiac ABC(CDiem(3, 4), CDiem(1, 0), CDiem(2, 1));
    CTamGiac DEF(CDiem(3, 4), CDiem(1, 0), CDiem(2, 1));
    cout << "Hai Tam Giac: ";
    cout << ((ABC == DEF) ? "ABC == DEF" : "ABC != DEF") << endl;
    cout << endl;

    CHinhCau S1(CDiem(0, 2), 5), S2(CDiem(0, 2), 5);
    cout << "Hai Hinh Cau: ";
    cout << ((S1 == S2) ? "S1 == S2" : "S1 != S2") << endl;
    cout << endl;

    return 0;
}
