#include <iostream>
#include <vector>
using namespace std;

struct NODE
{
    int key;
};
typedef NODE HASHTABLE[10000];

int sizeTable;

// Hash Function
int Hash(int key, int i) { return (key + i) % sizeTable; }

// Tạo Hash Table
void CreateEmptyHashTable(HASHTABLE &H)
{
    cout << "Nhap Kich Thuoc Bang Bam: ";
    cin >> sizeTable;
    for (int i = 0; i < sizeTable; i++)
    {
        H[i].key = -1;
    }
}

bool isFull(int CurrSize)
{
    return (CurrSize == sizeTable - 1);
}
int SearchTable(HASHTABLE &H, int key)
{
    int i = 0;
    int b = Hash(key, i);
    while (H[b].key != key && H[b].key != -1)
    {
        b = Hash(key, ++i);
    }
    if (H[b].key == key)
        return b;
    return -1;
}
int InsertTable(HASHTABLE &H, int &CurrSize, int key)
{
    if (isFull(CurrSize))
        return -2;
    int i = 0;
    int b = Hash(key, i);
    while (i < sizeTable && H[b].key != key && H[b].key != -1)
    {
        b = Hash(key, ++i);
    }

    if (H[b].key == key)
        return -1;
    H[b].key = key;
    CurrSize += 1;
    return b;
}

void PrintTable(HASHTABLE H)
{
    for (int i = 0; i < sizeTable; i++)
    {
        cout << "(" << i << ") ";
        cout << H[i].key;
        cout << endl;
    }
}
int main()
{
    HASHTABLE ht;
    CreateEmptyHashTable(ht);
    int n;
    cout << "Nhap So Luong Phan Tu: ";
    cin >> n;
    int x;
    int CurrSize = 0;
    for (int i = 0; i < n; i++)
    {
        cout << "Phan tu thu " << i + 1 << " : ";
        cin >> x;
        int result = InsertTable(ht, CurrSize, x);
        if (result == -2)
            break;
    }
    cout << endl;
    PrintTable(ht);
    return 0;
}