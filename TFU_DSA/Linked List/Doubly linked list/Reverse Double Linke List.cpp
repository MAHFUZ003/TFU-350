class Solution {
public:
    ListNode* reverseDLL(ListNode* head) {
        // Your code goes here
        //Stores the locations
          ListNode *curr,*next;
          ListNode *back,*front;

        curr= head;
       
        while(curr!=nullptr)
        {// store
        head = curr;
            front = curr->next;
            back = curr->prev;
next = curr->next;
            //update
            curr->next = back;
            curr->prev = front;
        
            //shift
            curr=next;


        }
        return head ;
    }
};