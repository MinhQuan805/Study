#include "CTamGiac.h"
#include "CDiem.h"

int main() {
    CTamGiac tg1;

    CDiem A(0, 0);
    CDiem B(1, 0);
    CDiem C(0, 1);
    CTamGiac tg2(A, B, C);

    CTamGiac tg3(tg2);

    return 0;
}