/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
###End banned keyword*/

#include <iostream>
#include <string>

#define LOAD 0.7
using namespace std;

struct Hocsinh {
    int Maso;
    string Hoten;
    int Namsinh;
    bool Gioitinh;
    double TBK;
};

struct Node {
    Hocsinh data;
    Node *next;
};

struct List {
    Node * head, *tail;
};

struct Hashtable {
    int M; // Kich thuoc bang bam
    int n; // so phan tu trong bang bam
    List *table;
};
void Input(Hocsinh &x) {
    cin >> x.Maso;
    getline(cin>>ws, x.Hoten);
    cin >> x.Gioitinh;
    cin >> x.Namsinh;
    cin >> x.TBK;
}
/*MỘT SỐ LƯU Ý TRONG TEMPLATE NÀY
Trong các bài tập Search, Delete, input là bảng băm đã có.
Tức là trước đó, GV đã thêm các phần tử vào bảng băm (theo đúng kỹ thuật của bài Insert),
sau đó xuất toàn bộ bảng băm đó ra file inputx.txt (lần lượt xuất từng List ứng với mỗi địa chỉ).

Đoạn code bên dưới tái hiện lại bảng băm đã có nên SV không cần viết lại hàm Insert, chỉ cần tập trung vào chức năng Search
for (int i = 0; i < m; i++) { //duyệt từng List ứng với mỗi địa chỉ
        cin >> k; //số phần tử trong List[i]
        hashtable.n += k; //tăng số lượng phần tử trong bảng băm theo số lượng phần tử của List[i]
        for (int j = 0; j < k; j++) { //lần lượt nhập k học sinh và thêm vào cuối danh sách List[i]
            Input(hs);
            AddTail(hashtable.table[i], hs);
        }
}
*/

//###INSERT CODE HERE -
Node *CreateNode(Hocsinh s)
{
    Node *p = new Node;
    if (!p)
        exit(1);
    p->data = s;
    p->next = NULL;
    return p;
}
void AddTail(List &L, Hocsinh hs)
{
    Node *p = CreateNode(hs);
    if (L.head == NULL)
    {
        L.head = p;
        L.tail = L.head;
    }
    else
    {
        L.tail->next = p;
        L.tail = p;
    }
}
void initList(List &l)
{
    l.head = NULL;
    l.tail = NULL;
}
void CreateHashtable(Hashtable &H, int m)
{
    H.table = new List[m];
    H.M = m;
    for (int i = 0; i < m; i++)
    {
        initList(H.table[i]);
    }
    H.n = 0;
}
void DeleteList(List &L)
{
    Node *p = L.head;
    while (p)
    {
        Node *temp = p;
        p = p->next;
        delete temp;
    }
    L.head = NULL;
    L.tail = NULL;
}

void DeleteHashtable(Hashtable &H)
{
    for (int i = 0; i < H.M; i++)
    {
        DeleteList(H.table[i]);
    }
    delete[] H.table;
    H.table = NULL;
    H.n = 0;
    H.M = 0;
}

Node* Search(Hashtable H, int k) {
    Node* p;
    for (int i = 0; i < H.M; i++) {
        List l = H.table[i];
        if (l.head) {
            p = l.head;
            while (p) {
                if ((p->data).Maso == k) {return p;}
                p = p->next;
            }
        }
    }
    return p;
}
int main()
{
    Hashtable hashtable;

    int m, n, k;
    Hocsinh hs;

    cin >> m;
    CreateHashtable(hashtable, m);
    for (int i = 0; i < m; i++) {
        cin >> k;
        hashtable.n += k;
        for (int j = 0; j < k; j++) {
            Input(hs);
            AddTail(hashtable.table[i], hs);
        }
    }
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> k;
        Node * p = Search(hashtable, k);

        if (p == NULL)
            cout << "KHONG TIM THAY\n";
        else {
            hs = p->data;
            cout << '[' << hs.Maso << ",  " << hs.Hoten << "  , " << hs.Gioitinh << ", " << hs.Namsinh << ", " << hs.TBK << "]\n";
        }
    }
    DeleteHashtable(hashtable);
    return 0;
}
