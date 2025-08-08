
class Solution {
public:
    bool searchKey(ListNode* head, int key) {
        // Your code goes here
     
        while(head!=nullptr)
        {
            if(head->val == key)
            {
                return true;
            }
            head=head->next;
        }
        return false;
    }
};