#include "CNgay.h"

CNgay::CNgay(int ngay, int thang, int nam) : ngay(ngay), thang(thang), nam(nam) {}

CNgay& CNgay::operator=(const CNgay& n) {
    if (this != &n) {
        ngay = n.ngay;
        thang = n.thang;
        nam = n.nam;
    }
    return *this;
}

void CNgay::Xuat() {
    cout << ngay << "/" << thang << "/" << nam << endl;
}
