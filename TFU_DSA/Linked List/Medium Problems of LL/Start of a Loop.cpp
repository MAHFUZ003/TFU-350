/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* detectCycle(ListNode* head) {
        ListNode *slow = head, *fast = head;
        if (head == NULL) {
            return NULL;
        }
        if (head->next == NULL) {
            return NULL;
        }
        while (1) {
            // hair will run fast 2 step at a time ,
            if (fast == NULL) {
                return NULL;
            }
            if (fast->next == NULL) {
                return NULL;
            }
            // tortoise will follow him
            fast = fast->next->next;
            slow = slow->next;
            // if hair meets tortoise ever it is cycle
            if (fast == slow) {
                break;
            }
            // if finds null ever then no cycle
        }
        fast = head;
        while(fast!=slow)
        {
            slow = slow->next;
            fast = fast->next;
        }
        return fast;
    }
};