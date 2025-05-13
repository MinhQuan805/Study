#include <iostream>
#include <string>

#define LOAD 0.7
#define EMPTY 0
#define DELETE -1
using namespace std;

struct Hocsinh
{
    int Maso;
    string Hoten;
    int Namsinh;
    bool Gioitinh;
    double TBK;
};

struct Hashtable
{
    int M; // Kich thuoc bang bam
    int n; // so phan tu trong bang bam
    Hocsinh *table;
};
void Input(Hocsinh &x)
{
    cin >> x.Maso;
    getline(cin >> ws, x.Hoten);
    cin >> x.Namsinh;
    cin >> x.Gioitinh;
    cin >> x.TBK;
}

// ###INSERT CODE HERE -

// Tạo Hash Table mới
void CreateHashtable(Hashtable &H, int m)
{
    H.table = new Hocsinh[m];
    H.M = m;
    for (int i = 0; i < m; i++)
    {
        H.table[i].Maso = EMPTY;
    }
    H.n = 0;
}

// Hash Function
int Hash(Hashtable H, int x, int i) { return (x + i) % H.M; }

// Hàm thêm phần tử
void Insert(Hashtable &H, Hocsinh hs)
{
    if (H.n <= LOAD * H.M)
    {
        int i = 0;
        do
        {
            int key = Hash(H, hs.Maso, i);
            if (H.table[key].Maso == EMPTY || H.table[key].Maso == DELETE)
            {
                H.table[key] = hs;
                H.n++;
                return;
            }
            i++;
        } while (i < H.M);
    }
}

// Hàm in table
void PrintHashtable(Hashtable H)
{
    for (int i = 0; i < H.M; i++)
    {
        Hocsinh hs = H.table[i];
        cout << '[' << hs.Maso << ",  " << hs.Hoten << "  , " << hs.Gioitinh << ", " << hs.Namsinh << ", " << hs.TBK << "]\n";
    }
}

// Hàm giải phóng bộ nhớ
void DeleteHashtable(Hashtable &H)
{
    delete[] H.table;
    H.table = NULL;
    H.n = 0;
    H.M = 0;
}

// Hàm xóa 1 phần tử
void Delete(Hashtable &H, int x)
{
    for (int i = 0; i < H.M; i++)
    {
        int key = Hash(H, x, i);
        if (H.table[key].Maso == x)
        {
            H.table[key].Maso = DELETE;
            H.table[key].Hoten = "";
            H.table[key].Namsinh = 0;
            H.table[key].Gioitinh = 0;
            H.table[key].TBK = 0;
            H.n--;
            return;
        }
        if (H.table[key].Maso == EMPTY)
            break;
    }
    cout << "Khong Xoa Duoc" << endl;
}

// Hàm tìm 1 phần tử
int Search(Hashtable H, int maso)
{
    for (int i = 0; i < H.M; i++)
    {
        int key = Hash(H, maso, i);
        if (H.table[key].Maso == maso)
            return key;
        if (H.table[key].Maso == EMPTY)
            break;
    }
    return -1;
}

int main()
{
    Hashtable hashtable;

    int m, n;
    Hocsinh hs;

    cin >> m;
    CreateHashtable(hashtable, m);
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        Input(hs);
        Insert(hashtable, hs);
    }
    PrintHashtable(hashtable);
    int x;
    cout << "Nhap Ma So Sinh Vien Muon Xoa: ";
    cin >> x;
    Delete(hashtable, x);
    cout << "Danh Sach Sinh Vien Sau Khi Xoa" << endl;
    PrintHashtable(hashtable);
    cout << "Nhap Lai Danh Sach Sinh Vien\n";
    Input(hs);
    Insert(hashtable, hs);
    cout << "Danh Sach Sinh Vien Sau Khi Them" << endl;
    PrintHashtable(hashtable);
    DeleteHashtable(hashtable);
    return 0;
}
