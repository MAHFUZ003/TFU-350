class Solution {
public:
    ListNode* deleteHead(ListNode* &head) 
    {
        if(head==null ||head->next==null)
            return null;
        ListNode *temp = head;
        head->val = head->next->val;
        head->next=head->next->next;
        delete temp;
        return head;
    }
};