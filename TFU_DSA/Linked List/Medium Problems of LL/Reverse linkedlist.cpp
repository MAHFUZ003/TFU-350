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
    ListNode* reverseList(ListNode* head) {
        ListNode *prev,*curr,*next;
        if(head==nullptr || head->next == nullptr)
        {
            return head;
        }
        prev=nullptr,curr=head,next=head->next;
        while(curr!=nullptr)
        {//shift
            next = curr->next;
            //update
            curr->next = prev;
            prev = curr;
            curr = next;
            if(!((curr==nullptr )|| (curr->next==nullptr)))
            {
                next = curr->next;
            }
            


        }
        return prev;
    }
};