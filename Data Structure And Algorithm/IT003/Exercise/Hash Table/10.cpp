#include <iostream>
#include <cstring>
#include <string>
#define M 10 // M là số nút có trên bảng băm, đủ để chứa các nút nhập vào bảng băm
#define NULLKEY -1
using namespace std;

// ###INSERT CODE HERE -
struct Hash
{
    int size;
    int table[10000];
};
void initHash(Hash &H)
{
    for (int i = 0; i < M; i++)
    {
        H.table[i] = NULLKEY;
    }
}
int HashFunction(int x, int i)
{
    return ((x + i * i) % M);
}

void insertHash(Hash &H, int key)
{
    int i = 0;
    cout << endl;
    if (H.size == M)
    {
        cout << "Bang bam bi day\n";
    }
    while (true)
    {
        int j = HashFunction(key, i++);
        if (H.table[j] == NULLKEY)
        {
            H.table[j] = key;
            H.size++;
            cout << "So Lan Bam: " << i - 1 << endl;
            return;
        }
    }
}
void traverseAllHash(Hash &H)
{
    for (int i = 0; i < M; i++)
    {
        cout << i;
        if (H.table[i] != NULLKEY)
            cout << " -> " << H.table[i];
        cout << endl;
    }
}
int main()
{
    Hash H;
    initHash(H);

    int n, x;
    cout << "Nhap so luong gia tri can phai luu tru: ";
    cin >> n; // n la so luong gia tri can phai luu tru
    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        cout << "\nInsert " << x;
        insertHash(H, x); // them 1 gia tri du lieu vao bang bam
    }
    cout << "\nCreated Hash:" << endl;
    traverseAllHash(H);

    return 0;
}
