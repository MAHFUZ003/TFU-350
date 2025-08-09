/*
Definition of doubly linked list:
struct ListNode
{
    int val;
    ListNode *next;
    ListNode *prev;
    ListNode()
    {
        val = 0;
        next = NULL;
        prev = NULL;
    }
    ListNode(int data1)
    {
        val = data1;
        next = NULL;
        prev = NULL;
    }
    ListNode(int data1, ListNode *next1, ListNode *prev1)
    {
        val = data1;
        next = next1;
        prev = prev1;
    }
};
*/

class Solution {
public:
    ListNode* insertBeforeHead(ListNode* head, int X) {
    
    ListNode* temp = new ListNode(X, nullptr, nullptr);
    temp->val = X;
    temp->prev= NULL;
    temp->next = head;
    head->prev=temp;
    head = temp;
    return head;
    }
};