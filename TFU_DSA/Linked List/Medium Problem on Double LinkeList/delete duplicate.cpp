class Solution {
public:
    ListNode* removeDuplicates(ListNode* head) {
        if (!head) return head;

        ListNode* curr = head;

        while (curr != NULL && curr->next != NULL) {
            if (curr->val == curr->next->val) {
                // Duplicate found, remove curr->next
                ListNode* temp = curr->next;
                curr->next = temp->next;
                if (curr->next != NULL) {
                    curr->next->prev = curr;
                }
                delete temp; // free memory
            } else {
                // Move to next node
                curr = curr->next;
            }
        }

        return head;
    }
};
