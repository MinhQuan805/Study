#include <iostream>
using namespace std;

struct TNODE
{
    int key;
    TNODE *pLeft;
    TNODE *pRight;
};
typedef TNODE *TREE;

TREE CreateNode(int x)
{
    TREE temp = new TNODE;
    temp->key = x;
    temp->pLeft = NULL;
    temp->pRight = NULL;
    return temp;
}
void Insert(TREE &root, int x)
{
    if (!root)
        root = CreateNode(x);
    TREE T = root;
    while (T != NULL)
    {
        if (x == T->key)
            return;
        else if (x > T->key)
        {
            if (T->pRight)
                T = T->pRight;
            else
                T->pRight = CreateNode(x);
        }
        else
        {
            if (T->pLeft)
                T = T->pLeft;
            else
                T->pLeft = CreateNode(x);
        }
    }
}
void CreateTree(TREE &T)
{
    int x;
    cin >> x;
    while (x != -1)
    {
        Insert(T, x);
        cin >> x;
    }
}
void Print(TREE T)
{
    if (!T)
        return;
    Print(T->pLeft);
    cout << T->key << " ";
    Print(T->pRight);
}
void PrintTree(TREE T)
{
    if (!T)
    {
        cout << "Empty Tree." << endl;
    }
    else
    {
        Print(T);
    }
}
TREE FindMin(TREE T)
{
    if (!T)
        return NULL;
    while (T->pLeft)
        T = T->pLeft;
    return T;
}
TREE FindMax(TREE T)
{
    if (!T)
        return NULL;
    while (T->pRight)
        T = T->pRight;
    return T;
}

// Tìm 1 Node trong cây
TREE Search(TREE T, int x)
{
    while (T)
    {
        if (T->key == x)
            return T;
        else if (x < T->key)
            T = T->pLeft;
        else
            T = T->pRight;
    }
    return NULL;
}

// Xóa 1 Node trong cây
void DeleteNode(TREE &T, int x)
{
    if (!T)
        return;
    if (x < T->key)
        DeleteNode(T->pLeft, x);
    else if (x > T->key)
        DeleteNode(T->pRight, x);
    else
    {
        if (!T->pLeft && !T->pRight)
        {
            delete T;
            T = NULL;
        }
        else if (!T->pLeft)
        {
            TREE temp = T;
            T = T->pRight;
            delete temp;
        }
        else if (!T->pRight)
        {
            TREE temp = T;
            T = T->pLeft;
            delete temp;
        }
        else
        {
            TREE temp = FindMin(T->pRight);
            T->key = temp->key;
            DeleteNode(T->pRight, temp->key);
        }
    }
}

// Đếm số Node trong cây
int CountNode(TREE T)
{
    if (!T)
        return 0;
    return 1 + CountNode(T->pLeft) + CountNode(T->pRight);
}

// Tính chiều cao của cây
int Height(TREE T)
{
    if (!T)
        return 0;
    int leftHeight = Height(T->pLeft);
    int rightHeight = Height(T->pRight);
    return 1 + max(leftHeight, rightHeight);
}

// Duyệt giữa (In-order)
void InOrder(TREE T)
{
    if (!T)
        return;
    InOrder(T->pLeft);
    cout << T->key << " ";
    InOrder(T->pRight);
}

// Duyệt tiền tự (Pre-order)
void PreOrder(TREE T)
{
    if (!T)
        return;
    cout << T->key << " ";
    PreOrder(T->pLeft);
    PreOrder(T->pRight);
}

// Duyệt hậu tự (Post-order)
void PostOrder(TREE T)
{
    if (!T)
        return;
    PostOrder(T->pLeft);
    PostOrder(T->pRight);
    cout << T->key << " ";
}

// Giải phóng bộ nhớ cây
void FreeTree(TREE &T)
{
    if (!T)
        return;
    FreeTree(T->pLeft);
    FreeTree(T->pRight);
    delete T;
    T = NULL;
}

int main()
{
    TREE T = NULL;
    cout << "Nhap cac so nguyen: ";
    CreateTree(T);

    cout << "Duyet giua (In-order): ";
    InOrder(T);
    cout << endl;

    TREE minNode = FindMin(T);
    if (minNode)
        cout << "Gia tri nho nhat: " << minNode->key << endl;

    TREE maxNode = FindMax(T);
    if (maxNode)
        cout << "Gia tri lon nhat: " << maxNode->key << endl;

    int x;
    cout << "Nhap gia tri can tim: ";
    cin >> x;
    TREE found = Search(T, x);
    if (found)
        cout << "Tim thay " << x << " trong cay." << endl;
    else
        cout << x << " khong ton tai trong cay." << endl;

    cout << "Nhap gia tri muon xoa: ";
    cin >> x;
    DeleteNode(T, x);
    cout << "Cay sau khi xoa " << x << ": ";
    InOrder(T);
    cout << endl;

    FreeTree(T);
    return 0;
}
