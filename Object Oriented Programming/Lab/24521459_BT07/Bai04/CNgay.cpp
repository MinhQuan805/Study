#include "CNgay.h"

CNgay::CNgay(int day, int month, int year) : day(day), month(month), year(year) {}

bool CNgay::operator==(const CNgay& ngay) const {
    return day == ngay.day && month == ngay.month && year == ngay.year;
}

bool CNgay::operator!=(const CNgay& ngay) const {
    return !(*this == ngay);
}
