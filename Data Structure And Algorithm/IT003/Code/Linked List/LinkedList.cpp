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
// Selection Sort For Linked List
void Swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void SelectionSort(LIST &L)
{
    Node *p, *q, *min;
    p = L.pHead;
    while (p != NULL && p->pNext != NULL)
    {
        min = p;
        q = p->pNext;
        while (q != NULL)
        {
            if (q->key < min->key)
                min = q;
            q = q->pNext;
        }
        if (min != p)
            Swap(min->key, p->key);
        p = p->pNext;
    }
}

// Quick Sort For Linked List
Node *SeparateHead(LIST &L)
{
    if (!L.pHead)
        return NULL;
    Node *p = L.pHead;
    L.pHead = L.pHead->pNext;
    if (!L.pHead)
        L.pTail = NULL;
    p->pNext = NULL;
    return p;
}

void Partition(LIST &L, LIST &L1, LIST &L2, Node *&pivot)
{
    Node *p;
    while (L.pHead != NULL)
    {
        p = SeparateHead(L);
        if (p->key <= pivot->key)
            AddTail(L1, p->key);
        else
            AddTail(L2, p->key);
    }
}
void Join(LIST &L, LIST L1, LIST L2, Node *&pivot)
{
    CreateEmptyList(L);
    if (L1.pHead)
    {
        L.pHead = L1.pHead;
        L.pTail = L1.pTail;
    }
    if (L.pTail)
    {
        L.pTail->pNext = pivot;
    }
    else
    {
        L.pHead = pivot;
    }
    L.pTail = pivot;
    L.pTail->pNext = NULL;

    if (L2.pHead)
    {
        L.pTail->pNext = L2.pHead;
        L.pTail = L2.pTail;
    }
}
void QuickSort_Ascending(LIST &L)
{
    if (L.pHead == NULL)
    {
        return;
    }
    LIST L1, L2;
    CreateEmptyList(L1);
    CreateEmptyList(L2);
    Node *pivot = SeparateHead(L);
    Partition(L, L1, L2, pivot);
    QuickSort_Ascending(L1);
    QuickSort_Ascending(L2);
    Join(L, L1, L2, pivot);
}

// Reverse Linked List
void Reverse(LIST &L)
{
    if (!L.pHead || !L.pHead->pNext)
        return;

    Node *prev = NULL, *curr = L.pHead, *next = NULL;
    L.pTail = L.pHead;

    while (curr != NULL)
    {
        next = curr->pNext;
        curr->pNext = prev;
        prev = curr;
        curr = next;
    }

    L.pHead = prev;
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

// Giải phóng bộ nhớ danh sách
void FreeList(LIST &l)
{
    Node *p;
    while (l.pHead != NULL)
    {
        p = l.pHead;
        l.pHead = l.pHead->pNext;
        delete p;
    }
    l.pTail = NULL;
}

int main()
{
    LIST L;
    CreateEmptyList(L);
    cout << "Nhap danh sach: ";
    CreateList(L);
    cout << "Danh Sach Ban Dau: ";
    PrintList(L);
    cout << endl;
    int x;
    cout << "Nhap gia tri xoa: ";
    cin >> x;
    bool deleted = DeleteNode(L, x);
    if (!deleted)
    {
        cout << "Khong Xoa Duoc Phan Tu " << x << endl;
    }
    else
    {
        cout << "Danh Sach sau khi xoa: ";
        PrintList(L);
        cout << endl;
    }

    int n, k;
    cout << "Nhap gia tri them: ";
    cin >> n;
    cout << "Nhap vi tri muon them vao: ";
    cin >> k;
    InsertNode(L, n, k);
    cout << "Danh Sach sau khi them la: ";
    PrintList(L);

    cout << "Danh Sach sau khi dao nguoc: ";
    Reverse(L);
    PrintList(L);
    cout << endl;
    SelectionSort(L);
    cout << "Danh Sach sau khi sap xep tang dan: ";
    PrintList(L);
    return 0;
}