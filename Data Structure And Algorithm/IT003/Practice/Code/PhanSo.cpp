#include <iostream>
#include <vector>

struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

// Hàm tạo danh sách liên kết từ vector
ListNode *createLinkedList(const std::vector<int> &nums)
{
    if (nums.empty())
        return nullptr;
    ListNode *head = new ListNode(nums[0]);
    ListNode *current = head;
    for (size_t i = 1; i < nums.size(); i++)
    {
        current->next = new ListNode(nums[i]);
        current = current->next;
    }
    return head;
}

// Hàm in danh sách liên kết
void printLinkedList(ListNode *head)
{
    ListNode *current = head;
    while (current)
    {
        std::cout << current->val << " -> ";
        current = current->next;
    }
    std::cout << "NULL\n";
}

// Hàm hủy danh sách liên kết để tránh rò rỉ bộ nhớ
void deleteLinkedList(ListNode *head)
{
    while (head)
    {
        ListNode *temp = head;
        head = head->next;
        delete temp;
    }
}

// Khai báo lại hàm swapNodes
ListNode *Nodes(ListNode *head, int k)
{
    ListNode *p = head;
    int len = 0;
    while (p && p->next)
    {
        p = p->next;
        len++;
    }
    ListNode *first = head;
    ListNode *second = head;
    for (int i = 1; i < k; i++)
    {
        first = first->next;
    }
    for (int i = 1; i <= len - k + 1; i++)
    {
        second = second->next;
    }
    int temp = first->val;
    first->val = second->val;
    second->val = temp;
    return head;
}

int main()
{
    int n, k;
    // Nhập số lượng phần tử
    std::cin >> n;
    std::vector<int> nums(n);

    // Nhập danh sách liên kết
    for (int i = 0; i < n; i++)
    {
        std::cin >> nums[i];
    }

    // Nhập giá trị k
    std::cout << "k: ";
    std::cin >> k;

    // Tạo danh sách liên kết
    ListNode *head = createLinkedList(nums);
    std::cout << "Danh sách trước khi hoán đổi:\n";
    printLinkedList(head);

    // Gọi hàm swapNodes
    ListNode *p = Nodes(head, k);
    printLinkedList(p);
    // Giải phóng bộ nhớ
    deleteLinkedList(head);
    return 0;
}
