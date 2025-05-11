    #include <iostream>
    #include <string>
    using namespace std;

    class MONHOC
    {
    private:
        int Ma;
        string Ten;
        float HeSo;
        float He1;
        float He2;
    public:
        MONHOC(int Ma = 0, string Ten = "", float HeSo = 1, float He1 = 0, float He2 = 0) : Ma(Ma), Ten(Ten), HeSo(HeSo), He1(He1), He2(He2) {}
        friend istream &operator>>(istream &is, MONHOC &Mon)
        {
            cout << "Nhap Ma Mon Hoc: ";
            is >> Mon.Ma;
            cout << "Nhap Ten Mon Hoc: ";
            // Dùng hàm nhập cin cho string
            is.ignore();
            getline(is, Mon.Ten);
            cout << "Nhap He So Mon Hoc: ";
            is >> Mon.HeSo;
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
            os << "He So Mon Hoc: " << Mon.HeSo << endl;
            os << "Diem He So 1: " << Mon.He1 << endl;
            os << "Diem He So 2: " << Mon.He2 << endl;
            return os;
        }
        float GetHeSo1() const { return He1; }
        float GetHeSo2() const { return He2; }
        float GetHeSo() const { return HeSo; }

        // Viết phương thức thuần ảo này vì đây là lớp cha nên khi dùng danh sách có con trỏ trỏ tới lớp cha
        // Mà không có hàm này thì nó không định nghĩa được
        virtual double DTKMH() const = 0;
        virtual void Xuat(ostream &os) const = 0;
    };
    class MONKIEMTRA : public MONHOC
    {
    private:
        int He3;
    public:
        // Overload toán tử >> và << từ lớp cha
        friend istream &operator>>(istream &is, MONKIEMTRA &Mon)
        {
            is >> (MONHOC&)Mon; // Ép kiểu về Mon về tham chiếu lớp cha MONHOC -> nó thành operator>>(istream &is, (MONHOC&) Mon);
            cout << "Nhap Diem Kiem Tra Het Mon (He So 3): ";
            is >> Mon.He3;
            return is;
        }
        // Không dùng được xuất dưới vì os << *List.DanhSach[i] << endl;  chỉ xuất được lớp cha thôi
        // friend ostream &operator<<(ostream &os, const MONKIEMTRA &Mon)
        // {
        //     os << (const MONHOC &)Mon;
        //     os << "Diem He So 3: " << Mon.He3 << endl;
        //     os << "Diem Trung Binh Ket Thuc Mon: " << Mon.DTKMH() << endl;
        //     return os;
        // }
        void Xuat(ostream &os) const override {
            os << (const MONHOC&)(*this);
            os << "Diem He So 3: " << He3 << endl;
            os << "Diem Trung Binh Mon Hoc: " << DTKMH() << endl;
        }
        
        double DTKMH() const {
            return (GetHeSo1() + GetHeSo2() * 2 + He3 * 3) / 6;
        }
    };
    class MONTHI : public MONHOC
    {
    private:
        int He3;
    public:
        friend istream &operator>>(istream &is, MONTHI &Mon)
        {
            is >> (MONHOC&)Mon;
            cout << "Nhap Diem Thi Het Mon (He So 3): ";
            is >> Mon.He3;
            return is;
        }
        void Xuat(ostream &os) const override {
            os << (const MONHOC&)(*this);
            os << "Diem He So 3: " << He3 << endl;
            os << "Diem Trung Binh Mon Hoc: " << DTKMH() << endl;
        }
        double DTKMH() const {
            return ((GetHeSo1() + GetHeSo2() * 2)/3 + He3) / 2;
        }
    };
    class DANHSACHMON
    {
    private:
        MONHOC* DanhSach[100];
        int size;
        int M;
        int N;
    public:
        friend istream &operator>>(istream &is, DANHSACHMON &List)
        {
            int j = 0;
            cout << "Nhap So Mon Thi: ";
            is >> List.M;
            cout << endl;
            cout << "Nhap Thong Tin Mon Thi" << endl;
            for (int i = 0; i < List.M; i++) {
                cout << "Mon Thi Thu " << i + 1 << endl;
                // List.DanhSach[j] = new MONKIEMTRA();
                // is >> *List.DanhSach[j];
                // Không dùng cách trên được vid DanhSach[j] trỏ tới class MONHOC, nên dùng operator
                // của MONHOC thay vì MONTHI và MONKIEMTRA
                MONTHI* Mon = new MONTHI();
                is >> *Mon;
                List.DanhSach[j++] = Mon;
                cout << endl;
            }
            cout << "Nhap So Mon Kiem Tra: ";
            is >> List.N;
            cout << endl;
            cout << "Nhap Thong Tin Kiem Tra" << endl;
            for (int i = 0; i < List.N; i++) {
                cout << "Mon Thi Thu " << i + 1 << endl;
                MONKIEMTRA* Mon = new MONKIEMTRA();
                is >> *Mon;
                List.DanhSach[j++] = Mon;
                cout << endl;
            }
            List.size = List.M + List.N;
            return is;
        }
        friend ostream &operator<<(ostream &os, const DANHSACHMON &List)
        {
            for (int i = 0; i < List.size; i++) {
                List.DanhSach[i]->Xuat(os);
                os << endl;
            }
            return os;
        }
        float DiemTBHK() {
            float tu = 0;
            float mau = 0;
            for (int i = 0; i < size; i++) {
                float Diem = DanhSach[i]->DTKMH();
                float HeSo = DanhSach[i]->GetHeSo();
                tu += Diem * HeSo;
                mau += HeSo;
            }
            if (mau == 0) return 0;
            return tu/mau;
        }
    };
    int main()
    {
        DANHSACHMON KiemTra;
        cin >> KiemTra;
        cout << endl;
        cout << KiemTra;
        cout << "Diem Trung Binh Hoc Ki: " << KiemTra.DiemTBHK();

    }