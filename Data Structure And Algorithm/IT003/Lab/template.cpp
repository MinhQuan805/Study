/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
###End banned keyword*/

#include <iostream>
using namespace std;

//###INSERT CODE HERE -
struct NODE {
    int value;
    NODE* pNext;
};
struct LIST {
    NODE* pHead;
    NODE* pTail;
};
void CreateEmptyList(LIST &l) {
    l.pHead = NULL;
    l.pTail = NULL;
}
NODE* CreateNode(int x) {
    NODE *p;
    p = new NODE;
    if (p == NULL) {
        exit(1);
    }
    p->value = x;
    p->pNext = NULL;
    return p;
}
void AddTail(LIST &l, int x) {
    NODE *p = CreateNode(x);
    if (l.pHead == NULL) {
        l.pHead = p;
        l.pTail = l.pHead;
    }
    else {
        l.pTail->pNext = p;
        l.pTail = p;
    }
}
void CreateList(LIST &l) {
    int x;
    cin >> x;
    if (x == -1) {
        return;
    }
    while (x != -1) {
        AddTail(l, x);
        cin >> x;
    }
}
void PrintList(NODE *l) {
    if (l == NULL) {
        cout << "Empty List." << endl;;
        return;
    }
    NODE *p;
    p = l;
    while (p) {
        cout << p->value << " ";
        p = p->pNext;
    }
}
int main() {
    LIST L;
	CreateEmptyList(L);
	CreateList(L);
    PrintList(L.pHead);
    return 0;
}
