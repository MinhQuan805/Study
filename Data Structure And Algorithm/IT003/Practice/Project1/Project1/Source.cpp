#include <iostream>

using namespace std;
struct Node
{
    int key;
    Node* pNext;
};
struct LIST
{
    Node* pHead, * pTail;
};
struct HASHTABLE
{
    int M;
    int n;
    LIST* table;
};

// T?o Danh Sách Liên K?t
void CreateEmptyList(LIST& l)
{
    l.pHead = NULL;
    l.pTail = NULL;
}

// T?o Node m?i
Node* CreateNode(int x)
{
    Node* p = new Node;
    if (!p)
        exit(1);
    p->key = x;
    p->pNext = NULL;
    return p;
}

// Thêm vào ??u danh sách
void AddHead(LIST& l, int x)
{
    Node* p = CreateNode(x);
    if (!l.pHead)
    {
        l.pHead = p;
        l.pTail = l.pHead;
    }
    else
    {
        p->pNext = l.pHead;
        l.pHead = p;
    }
}

// Thêm ph?n t? vào cu?i
void AddTail(LIST& l, int x)
{
    Node* p = CreateNode(x);
    if (!l.pHead)
    {
        l.pHead = p;
        l.pTail = l.pHead;
    }
    else
    {
        l.pTail->pNext = p;
        l.pTail = p;
    }
}

// Tìm Node có giá tr? x
Node* SearchNode(LIST& l, int x)
{
    Node* p = l.pHead;
    while (p && p->key != x)
    {
        p = p->pNext;
    }
    return p;
}

// Xóa các Node có giá tr? x
bool DeleteNode(LIST& l, int x)
{
    Node* curr = l.pHead;
    Node* dummy = new Node;
    dummy->pNext = l.pHead;
    Node* prev = dummy;
    bool deleted = false;
    while (curr)
    {
        if (curr->key == x)
        {
            prev->pNext = curr->pNext;
            delete curr;
            curr = prev->pNext;
            deleted = true;
        }
        else
        {
            prev = curr;
            curr = curr->pNext;
        }
    }
    l.pHead = dummy->pNext;
    if (!l.pHead)
        l.pTail = NULL;
    else if (prev->pNext == NULL)
        l.pTail = prev;
    return deleted;
}

// In ra danh sách
void PrintList(LIST l)
{
    Node* p;
    if (l.pHead == NULL)
    {
        cout << "Empty List.";
    }
    else
    {
        p = l.pHead;
        while (p)
        {
            cout << p->key << " ";
            p = p->pNext;
        }
    }
    cout << endl;
}
// Hash Function
int Hash(HASHTABLE ht, int key) { return key % ht.M; }

// T?o Hash Table
void CreateEmptyHashTable(HASHTABLE& H)
{
    cout << "Nhap Kich Thuoc Bang Bam: ";
    cin >> H.M;
    H.table = new LIST[H.M];
    for (int i = 0; i < H.M; i++)
    {
        CreateEmptyList(H.table[i]);
    }
}

void InsertTable(HASHTABLE& H, int key)
{
    int i = Hash(H, key);
    LIST L = H.table[i];
    AddTail(L, key);
}

void PrintTable(HASHTABLE H)
{
    for (int i = 0; i < H.M; i++)
    {
        LIST l = H.table[i];
        PrintList(l);
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
    PrintTable(ht);
    return 0;
}