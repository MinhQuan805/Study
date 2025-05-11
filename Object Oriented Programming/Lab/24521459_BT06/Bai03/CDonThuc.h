#include <iostream>
using namespace std;
class CDonThuc {
private:
    double heSo;
    int soMu;

public:
    CDonThuc(double heSo = 0, int soMu = 0);
    friend istream& operator>>(istream& is, CDonThuc& dt);
    friend ostream& operator<<(ostream& os, const CDonThuc& dt);
    CDonThuc operator*(const CDonThuc& DT);
    CDonThuc operator/(const CDonThuc& DT);
    CDonThuc& operator*=(const CDonThuc& DT);
    CDonThuc& operator/=(const CDonThuc& DT);

    void Xuat();
};
