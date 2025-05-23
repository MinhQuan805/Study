
#include <iostream>

using namespace std;
struct TNODE
{
    int key;
    TNODE *pLeft;
    TNODE *pRight;
};
typedef TNODE *TREE;

void CreateEmptyTree(TREE &T)
{
    T = NULL;
}
TNODE *CreateTNode(int x)
{
    TNODE *p = new TNODE; // cấp phát vùng nhớ động
    p->key = x;           // gán trường dữ liệu của node = x
    p->pLeft = NULL;
    p->pRight = NULL;
    return p;
}
int Insert(TREE &T, TNODE *p)
{
    if (T)
    {
        if (T->key == p->key)
            return 0;
        if (T->key > p->key)
            return Insert(T->pLeft, p);
        return Insert(T->pRight, p);
    }
    T = p;
    return 1;
}
void CreateTree(TREE &T)
{
    int x;
    do
    {
        cin >> x;
        if (x == -1)
            break;
        Insert(T, CreateTNode(x));
    } while (true);
}

TNODE *FindParent(TREE Root, const int &x)
{
    if (Root == NULL)
        return NULL;
    if (Root->key == x)
        return NULL;

    TNODE *pre = NULL;
    TNODE *p = Root;
    while (p != NULL)
    {
        if (x == p->key)
            return pre;
        pre = p;
        if (x < p->key)
            p = p->pLeft;
        else
            p = p->pRight;
    }
    return NULL;
}
void FindSiblings(TREE T, int x)
{
    if (T == NULL)
    {
        cout << "Empty Tree.";
        return;
    }

    if (T->key == x)
    {
        cout << x << " is Root.";
        return;
    }

    TREE parent = FindParent(T, x);
    if (parent == NULL)
    {
        cout << "Not found " << x << ".";
        return;
    }

    if (parent->pLeft && parent->pRight)
    {
        if (parent->pLeft->key == x)
            cout << parent->pLeft->key << " and " << parent->pRight->key << " are siblings.";
        else
            cout << parent->pLeft->key << " and " << parent->pRight->key << " are siblings.";
    }
    else
    {
        cout << x << " has no siblings.";
    }
}

int main()
{
    TREE T;   // hay: TNODE* T;
    T = NULL; // Khoi tao cay T rong, or: CreateEmptyTree(T)
    CreateTree(T);

    int x;
    cin >> x;

    FindSiblings(T, x);

    return 0;
}
