#include <iostream>

using namespace std;
struct Node
{
    int key;
    Node *pNext;
};
struct LIST
{
    Node *pHead, *pTail;
};
struct HASHTABLE
{
    int M;
    int n;
    LIST *table;
};

// Tạo Danh Sách Liên Kết
void CreateEmptyList(LIST &l)
{
    l.pHead = NULL;
    l.pTail = NULL;
}

// Tạo Node mới
Node *CreateNode(int x)
{
    Node *p = new Node;
    if (!p)
        exit(1);
    p->key = x;
    p->pNext = NULL;
    return p;
}

// Thêm vào đầu danh sách
void AddHead(LIST &l, int x)
{
    Node *p = CreateNode(x);
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

// Thêm phần tử vào cuối
void AddTail(LIST &l, int x)
{
    Node *p = CreateNode(x);
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

// Tạo danh sách
void CreateList(LIST &l)
{
    int x;
    cin >> x;
    if (x == -1)
    {
        return;
    }
    while (x != -1)
    {
        AddTail(l, x);
        cin >> x;
    }
}

// Tìm Node có giá trị x
Node *SearchNode(LIST &l, int x)
{
    Node *p = l.pHead;
    while (p && p->key != x)
    {
        p = p->pNext;
    }
    return p;
}

// Xóa các Node có giá trị x
bool DeleteNode(LIST &l, int x)
{
    Node *curr = l.pHead;
    Node *dummy = new Node;
    dummy->pNext = l.pHead;
    Node *prev = dummy;
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
// Thêm Node vào linked list
void InsertNode(LIST &l, int x, int k)
{
    // k là vị trí chèn
    Node *p = CreateNode(x);
    Node *dummy = l.pHead;
    int i = 0;
    while (i < k && dummy->pNext)
    {
        dummy = dummy->pNext;
        i++;
    }

    p->pNext = dummy->pNext;
    dummy->pNext = p;

    if (!p->pNext)
        l.pTail = p;
}

// In ra danh sách
void PrintList(LIST l)
{
    Node *p;
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

// Tạo Hash Table
void CreateEmptyHashTable(HASHTABLE &H)
{
    cin >> H.M;
    H.table = new LIST[H.M];
    for (int i = 0; i < H.M; i++)
    {
        CreateEmptyList(H.table[i]);
    }
}

void Delete(HASHTABLE &H, int key)
{
}

int main()
{
    LIST L;
    CreateEmptyList(L);
    CreateList(L);
    cout << "Danh Sach Ban Dau: ";
    PrintList(L);
    bool deleted = DeleteNode(L, 5);
    if (!deleted)
        cout << "Khong Xoa Duoc Phan Tu";
    else
    {
        cout << "Danh Sach sau khi xoa: ";
        PrintList(L);
        cout << endl;
    }

    InsertNode(L, 3, 10);
    cout << "Danh Sach sau khi them la: ";
    PrintList(L);
    return 0;
}