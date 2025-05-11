/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
###End banned keyword*/


#include <iostream>
#include <cmath>
using namespace std;

// Cấu trúc của một node
struct NODE {
	int info;
	NODE* pNext;
};
// Cấu trúc của một DSLK
struct LIST {
	NODE* pHead;
	NODE* pTail;
};

//###INSERT CODE HERE -
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
    p->info = x;
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
void PrintEvenNumbers(NODE *l) {
    if (l == NULL) {
        cout << "Danh sach rong." << endl;;
        return;
    }
	bool SoChan = false;
    NODE *p;
    p = l;
    while (p) {
		if (p->info % 2 == 0) {
        	cout << p->info << " ";
			SoChan = true;
		}
        p = p->pNext;
    }
	if (!SoChan) {
		cout << "Danh sach khong co so chan." << endl;
		return;
	}

}
int main() {
    LIST L;
	CreateEmptyList(L);

	CreateList(L);
    PrintEvenNumbers(L.pHead);

    return 0;
}
