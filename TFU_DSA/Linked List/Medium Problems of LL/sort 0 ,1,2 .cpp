#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(NULL) {}
};

ListNode* sortList(ListNode* head) {
    if (!head || !head->next) return head;

    // Dummy heads
    ListNode zeroD(-1), oneD(-1), twoD(-1);
    ListNode *zero = &zeroD, *one = &oneD, *two = &twoD;

    // Traverse list
    ListNode* curr = head;
    while (curr) {
        if (curr->val == 0) {
            zero->next = curr;
            zero = zero->next;
        } else if (curr->val == 1) {
            one->next = curr;
            one = one->next;
        } else {
            two->next = curr;
            two = two->next;
        }
        curr = curr->next;
    }

    // Merge: 0 -> 1 -> 2
    zero->next = oneD.next ? oneD.next : twoD.next;
    one->next = twoD.next;
    two->next = NULL;

    return zeroD.next;
}

// Helper to print list
void printList(ListNode* head) {
    while (head) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

// Example usage
int main() {
    // Input: 1 -> 0 -> 2 -> 0 -> 1
    ListNode* head = new ListNode(1);
    head->next = new ListNode(0);
    head->next->next = new ListNode(2);
    head->next->next->next = new ListNode(0);
    head->next->next->next->next = new ListNode(1);

    cout << "Before sorting: ";
    printList(head);

    head = sortList(head);

    cout << "After sorting: ";
    printList(head);

    return 0;
}
