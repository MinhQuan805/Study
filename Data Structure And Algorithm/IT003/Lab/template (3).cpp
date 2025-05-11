    /*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
###End banned keyword*/
#include <iostream>
using namespace std;
//###INSERT CODE HERE -
struct NODE {
    int value;
    NODE* pNext;
};

void CreateEmptyList(NODE*& pHead) {
    pHead = NULL;
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
void AddTail(NODE*& pHead, int x) {
    NODE *p = CreateNode(x);
    if (pHead == NULL) {
        pHead = p;
    }
    else {
        NODE *temp = pHead;
        while (temp->pNext != NULL) {
            temp = temp->pNext;
        }
        temp->pNext = p;
    }
}
void CreateList(NODE*& pHead) {
    int x;
    cin >> x;
    if (x == -1) {
        return;
    }
    while (x != -1) {
        AddTail(pHead, x);
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
    NODE* pHead;
	CreateEmptyList(pHead);

	CreateList(pHead);
    PrintList(pHead);

    return 0;
}
