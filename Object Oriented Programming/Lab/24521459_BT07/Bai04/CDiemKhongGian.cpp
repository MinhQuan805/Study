#include "CDiemKhongGian.h"

CDiemKhongGian::CDiemKhongGian(int x, int y, int z) : x(x), y(y), z(z) {}

bool CDiemKhongGian::operator==(const CDiemKhongGian& A) {
    return x == A.x && y == A.y && z == A.z;
}

bool CDiemKhongGian::operator!=(const CDiemKhongGian& A) {
    return !(*this == A);
}
