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
void AddHead(LIST &l, int x) {
    NODE *p = CreateNode(x);
    if (l.pHead == NULL) {
        l.pHead = p;
        l.pTail = l.pHead;
    }
    else {
        p->pNext = l.pHead;
        l.pHead = p;
    }
}
void CreateList(LIST &l) {
    int x;
    cin >> x;
    if (x == -1) {
        return;
    }
    while (x != -1) {
        AddHead(l, x);
        cin >> x;
    }
}
void PrintList(LIST l) {
    if (l.pHead == NULL) {
        cout << "Empty List." << endl;;
        return;
    }
    NODE *p;
    p = l.pHead;
    while (p) {
        cout << p->value << " ";
        p = p->pNext;
    }
}
int main() {
    LIST L;
	CreateEmptyList(L);

	CreateList(L);
    PrintList(L);

    return 0;
}
