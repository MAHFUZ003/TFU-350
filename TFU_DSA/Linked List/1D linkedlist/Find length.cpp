class Solution {
public:
    int getLength(ListNode* head) {
        // Your code goes here
        int len =1;
        while(head->next!=nullptr)
        {
            len++;
            head= head->next;
        }
        return len;
    }
};