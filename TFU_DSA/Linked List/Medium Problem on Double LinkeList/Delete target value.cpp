class Solution {
   public:
    ListNode* deleteAllOccurrences(ListNode* head, int target) {
        // 1. Remove target nodes from the head
        while (head != NULL && head->val == target) {
            ListNode* temp = head;
            head = head->next;
            if (head != NULL) head->prev = NULL;
            delete temp;
        }

        if (head == NULL) return NULL;

        // 2. Traverse remaining list
        ListNode* curr = head;
        while (curr != NULL) {
            if (curr->val == target) {
                ListNode* prev = curr->prev;
                ListNode* next = curr->next;

                if (prev != NULL) prev->next = next;
                if (next != NULL) next->prev = prev;

                ListNode* temp = curr;
                curr = next;
                delete temp;
            } else {
                curr = curr->next;
            }
        }

        return head;
    }
};
