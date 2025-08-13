/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        ListNode * odd,*even;
        odd=head;if (!head || !head->next) return head; 
        ListNode *oddtemp = head;
        ListNode *eventemp= head->next;
        even = head->next;
        
        
        while(oddtemp->next !=NULL && eventemp ->next!=NULL)
        {
        oddtemp->next= eventemp->next;
        oddtemp = eventemp->next;
        eventemp->next = oddtemp->next;
        if(oddtemp!=NULL){eventemp = oddtemp->next;}

        }
        oddtemp->next= even;
        return head;

    }
};