#include <iostream>
#include <string>

#define LOAD 0.7
using namespace std;

struct Hocsinh
{
    int Maso;
    string Hoten;
    int Namsinh;
    bool Gioitinh;
    double TBK;
};

struct Node
{
    Hocsinh data;
    Node *next;
};

struct List
{
    Node *head, *tail;
};

struct Hashtable
{
    int M; // Kich thuoc bang bam
    int n; // so phan tu trong bang bam
    List *table;
};
int Hash(Hashtable H, int maso)
{
    return maso % H.M;
}
void Input(Hocsinh &x)
{
    cin >> x.Maso;
    getline(cin >> ws, x.Hoten);
    cin >> x.Namsinh;
    cin >> x.Gioitinh;
    cin >> x.TBK;
}
/*
MỘT SỐ GỢI Ý:
    Hàm CreateHashtable(hashtable, m) khởi tạo bảng băm
    {
        Bước 1: vì table được hiểu là 1 con trỏ quản lý 1 mảng động nên cần cấp phát vùng nhớ cho mảng các List
        lúc này, ở mỗi List đã có 2 con trỏ head và tail nhưng các con trỏ chưa khởi tạo
        Bước 2: Lần lượt khởi tạo con trỏ head, tail của mỗi List, nên viết hàm initList riêng
        Bước 3: khởi tạo các thuộc tính còn lại của bảng băm là M,n
    }
    Hàm Insert(hashtable, hs) thêm 1 học sinh hs vào bảng băm. Có thể thiết kế Hàm Insert sẽ trả về kết quả 1 nếu thêm phần tử thành công và trả về 0 nếu không thêm phần tử được
    {
        Kiểm tra hệ số tải. Hệ số tải của bảng băm được ấn định là 0.7, nghĩa là bảng băm luôn đảm bảo số phần tử được lưu trong bảng băm không quá 70% kích thước của bảng băm.
        Tìm địa chỉ phù hợp cho hs
        Từ địa chỉ này sẽ xác định được List mà hs thuộc về
        Gọi hàm thêm 1 phần tử vào List, nên viết hàm addHead hay addTail riêng
        Nhớ tăng số lượng phần tử của bảng băm
    }
    Hàm  PrintHashtable(hashtable) in bảng băm
    {
        Duyệt từng địa chỉ hay còn hiểu là duyệt từng List
            Ứng với mỗi List, xuất tất cả các phần tử trong List theo 1 format quy ước (ghi trong đề)
    }
    Hàm DeleteHashtable(hashtable) xóa toàn bộ bảng băm
    {
        Duyệt từng địa chỉ hay còn hiểu là duyệt từng List
            Ứng với mỗi List, xóa toàn bộ node trong danh sách, vì 2 con trỏ head, tail là biến tĩnh nên chỉ có thể gán về NULL
        Xóa vùng nhớ của mảng các List (vì cũng là mảng động), cũng nên gán lại con trỏ table về NULL cho an toàn
        Reset các thuộc tính còn lại của bảng băm

    }

*/
// ###INSERT CODE HERE -
Node *CreateNode(Hocsinh s)
{
    Node *p = new Node;
    if (!p)
        exit(1);
    p->data = s;
    p->next = NULL;
    return p;
}
void AddTail(List &L, Hocsinh s)
{
    Node *p = CreateNode(s);
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
void Insert(Hashtable &H, Hocsinh hs)
{
    int add = Hash(H, hs.Maso);
    if (H.n <= LOAD * H.M)
    {
        AddTail(H.table[add], hs);
        H.n++;
    }
}
void PrintList(List l)
{
    if (l.head != NULL)
    {
        Node *p = l.head;
        while (p)
        {
            Hocsinh hs = p->data;
            cout << '[' << hs.Maso << ", " << hs.Hoten << " , " << hs.Gioitinh << ", " << hs.Namsinh << ", " << hs.TBK << "] ";
            p = p->next;
        }
    }
    cout << endl;
}
void PrintHashtable(Hashtable H)
{
    for (int i = 0; i < H.M; i++)
    {
        PrintList(H.table[i]);
    }
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
int main()
{
    Hashtable hashtable;

    int m, n;
    Hocsinh hs;

    cin >> m;
    CreateHashtable(hashtable, m);
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        Input(hs);
        Insert(hashtable, hs);
    }
    PrintHashtable(hashtable);
    DeleteHashtable(hashtable);
    return 0;
}
