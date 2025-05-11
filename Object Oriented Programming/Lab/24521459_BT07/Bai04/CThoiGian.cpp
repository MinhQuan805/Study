#include "CThoiGian.h"

CThoiGian::CThoiGian(int gio, int phut, int giay) : gio(gio), phut(phut), giay(giay) {}

bool CThoiGian::operator==(const CThoiGian& time) const {
    return (gio == time.gio && phut == time.phut && giay == time.giay);
}

bool CThoiGian::operator!=(const CThoiGian& time) const {
    return !(*this == time);
}
