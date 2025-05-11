#include "CHonSo.h"

CHonSo::CHonSo(int nguyen, int tu, int mau) : nguyen(nguyen), tu(tu), mau(mau == 0 ? 1 : mau) {}

CHonSo& CHonSo::operator=(const CHonSo& h) {
    if (this != &h) {
        nguyen = h.nguyen;
        tu = h.tu;
        mau = h.mau;
    }
    return *this;
}

void CHonSo::Xuat() {
    cout << nguyen << " " << tu << "/" << mau << endl;
}
