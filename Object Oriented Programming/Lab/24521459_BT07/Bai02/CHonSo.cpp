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
void CHonSo::Nhap() {
    cout << "Nhap So Nguyen: ";
    cin >> nguyen;
    cout << "Nhap Tu So: ";
    cin >> tu;
    do {
        cout << "Nhap Mau So: ";
        cin >> mau;
    } while (mau == 0);
}
void CHonSo::Xuat() {
    cout << nguyen << " " << tu << "/" << mau << endl;
}
