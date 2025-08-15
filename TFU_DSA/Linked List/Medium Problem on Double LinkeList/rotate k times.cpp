class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if (!head || !head->next || k == 0) return head;

        // 1. Find length and tail
        ListNode* curr = head;
        int n = 1;
        while (curr->next != NULL) {
            curr = curr->next;
            n++;
        }
        ListNode* tail = curr;

        // 2. Make it circular
        tail->next = head;

        // 3. Find new tail: (n - k % n - 1)th node
        k %= n;
        int stepsToNewTail = n - k - 1;
        ListNode* newTail = head;
        for (int i = 0; i < stepsToNewTail; i++) {
            newTail = newTail->next;
        }

        // 4. Set new head and break circle
        ListNode* newHead = newTail->next;
        newTail->next = NULL;

        return newHead;
    }
};
