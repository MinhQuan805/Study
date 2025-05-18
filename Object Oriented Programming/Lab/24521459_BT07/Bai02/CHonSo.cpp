#include "CHonSo.h"

CHonSo::CHonSo(int tu, int mau) : tu(tu), mau(mau == 0 ? 1 : mau) {}

bool CHonSo::operator==(const CHonSo& PS) {
    float Tu = nguyen + (float)tu / mau;
    float Mau = nguyen + (float)PS.tu / PS.mau;
    if (Tu == Mau)
        return true;
    return false;
}
bool CHonSo::operator>(const CHonSo& PS) {
    float Tu = nguyen + (float)tu / mau;
    float Mau = nguyen + (float)PS.tu / PS.mau;
    if (Tu > Mau)
        return true;
    return false;
}
bool CHonSo::operator<(const CHonSo& PS) {
    float Tu = nguyen + (float)tu / mau;
    float Mau = nguyen + (float)PS.tu / PS.mau;
    if (Tu < Mau)
        return true;
    return false;
}
bool CHonSo::operator>=(const CHonSo& PS) {
    float Tu = nguyen + (float)tu / mau;
    float Mau = nguyen + (float)PS.tu / PS.mau;
    if (Tu >= Mau)
        return true;
    return false;
}
bool CHonSo::operator<=(const CHonSo& PS) {
    float Tu = nguyen + (float)tu / mau;
    float Mau = nguyen + (float)PS.tu / PS.mau;
    if (Tu <= Mau)
        return true;
    return false;
}
bool CHonSo::operator!=(const CHonSo& PS) {
    float Tu = nguyen + (float)tu / mau;
    float Mau = nguyen + (float)PS.tu / PS.mau;
    if (Tu != Mau)
        return true;
    return false;
}
istream& operator>>(istream& is, CHonSo& X) {
    cout << "Nhap So Nguyen: ";
    is >> X.nguyen;
    cout << "Nhap Tu So: ";
    is >> X.tu;
    do {
        cout << "Nhap Mau So: ";
        is >> X.mau;
    } while (X.mau == 0);
    return is;
}
ostream& operator<<(ostream& os, CHonSo& X) {
    os << X.nguyen << " " << X.tu << "/" << X.mau << endl;
    return os;
}
