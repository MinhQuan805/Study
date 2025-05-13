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
    cin >> x.Gioitinh;
    cin >> x.Namsinh;
    cin >> x.TBK;
}

// ###INSERT CODE HERE -
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

void DeleteHashtable(Hashtable &H)
{
    delete[] H.table;
    H.table = NULL;
    H.n = 0;
    H.M = 0;
}
int Search(Hashtable H, int k, int &nprob)
{
    for (int i = 0; i < H.M; i++)
    {
        if (H.table[i].Maso == k)
        {
            nprob = i;
            return 1;
        }
        if (H.table[i].Maso == EMPTY) // Nếu gặp phần tử trống, dừng tìm kiếm
        {
            break;
        }
    }
    return -1;
}
int main()
{
    Hashtable hashtable;

    int m, n, k, nprob;
    Hocsinh hs;

    cin >> m;
    CreateHashtable(hashtable, m);
    for (int i = 0; i < m; i++)
    {
        Input(hs);
        hashtable.table[i] = hs;
        if (hs.Maso > 0)
            hashtable.n++;
    }
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> k;
        if (Search(hashtable, k, nprob) > -1)
        {
            cout << "THAM DO " << nprob << endl;
        }
        else
        {
            cout << "KHONG TIM THAY" << endl;
        }
    }
    DeleteHashtable(hashtable);
    return 0;
}
