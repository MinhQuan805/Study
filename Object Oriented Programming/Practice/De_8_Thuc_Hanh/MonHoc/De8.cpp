#include <iostream>
#include <string>
using namespace std;

class MONHOC
{
private:
    int Ma;
    string Ten;
    int He1;
    int He2;

public:
    MONHOC(int Ma = 0, string Ten = "", int He1 = 0, int He2 = 0) : Ma(Ma), Ten(Ten), He1(He1), He2(He2) {}
    friend istream &operator>>(istream &is, MONHOC &Mon)
    {
        cout << "Nhap Ma Mon Hoc: ";
        is >> Mon.Ma;
        cout << "Nhap Ten Mon Hoc: ";
        is >> Mon.Ten;
        cout << "Nhap Diem He So 1: ";
        is >> Mon.He1;
        cout << "Nhap Diem He So 2: ";
        is >> Mon.He2;
        return is;
    }
    friend ostream &operator<<(ostream &os, const MONHOC &Mon)
    {
        os << "Mon Hoc: " << Mon.Ten << endl;
        os << "Ma: " << Mon.Ma << endl;
        os << "Diem He So 1: " << Mon.He1 << endl;
        os << "Diem He So 2: " << Mon.He2 << endl;
        return os;
    }
    virtual void DTKMH() {};
};
class MONKIEMTRA : public MONHOC
{
private:
    int He3;

public:
    // Overload toán tử >> và << từ lớp cha
    friend istream &operator>>(istream &is, MONKIEMTRA &Mon)
    {
        is >> (MONHOC &)Mon; // Ép kiểu về Mon về tham chiếu lớp cha MONHOC -> nó thành operator>>(istream &is, (MONHOC&) Mon);
        cout << "Nhap Diem Kiem Tra Het Mon (He So 3): ";
        is >> Mon.He3;
        return is;
    }
    friend ostream &operator<<(ostream &os, const MONKIEMTRA &Mon)
    {
        os << (const MONHOC &)Mon << endl;
        os << "Diem Kiem Tra Het Mon: " << Mon.He3 << endl;
        return os;
    }
};
// class MONTHI : public MONHOC
// {
// };
// class DANHSACHMON
// {
// };
int main()
{
    MONKIEMTRA KiemTra;
    cin >> KiemTra;
    cout << endl;
    cout << KiemTra;
}