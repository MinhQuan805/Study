#include <iostream>
#include <vector>
using namespace std;
struct HASHTABLE
{
    int n;
    vector<int> table;
};
// Hash Function
int Hash(HASHTABLE ht, int key, int i) { return (key + i) % ht.n; }

// Tạo Hash Table
void CreateEmptyHashTable(HASHTABLE &H)
{
    cout << "Nhap Kich Thuoc Bang Bam: ";
    cin >> H.n;
    H.table = vector<int>(H.n, -1);
}

void InsertTable(HASHTABLE &H, int key)
{
    int i = 0;
    while (i < H.n)
    {
        int j = Hash(H, key, i);
        if (H.table[j] != -1)
        {
            i++;
        }
        else
        {
            H.table[j] = key;
            return;
        }
    }
}

void PrintTable(HASHTABLE H)
{
    for (int i = 0; i < H.n; i++)
    {
        cout << "(" << i << ") ";
        cout << H.table[i];
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
    for (int i = 0; i < n; i++)
    {
        cout << "Phan tu thu " << i + 1 << " : ";
        cin >> x;
        InsertTable(ht, x);
    }
    cout << endl;
    PrintTable(ht);
    return 0;
}