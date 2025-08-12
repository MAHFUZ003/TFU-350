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
    bool hasCycle(ListNode *head) {
        // will hair and tortoise way used
        ListNode *slow=head,*fast=head;
        if(head==NULL)
        {
            return false;
        }
        if(head->next==NULL )
        {
            return false;
        }
       
        while(1)
        { 
            
        // hair will run fast 2 step at a time , 
        if(fast==NULL )
        {
            return false;
        }
       if(fast->next==NULL)
       {
        return false;
       }
         // tortoise will follow him
         fast = fast->next->next;
         slow = slow->next;
        // if hair meets tortoise ever it is cycle
        if(fast==slow )
        {
            return true;
        }
        // if finds null ever then no cycle

        }
       
        
    }
};