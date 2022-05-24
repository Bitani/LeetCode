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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* start;
        if(head == NULL)
        {
            return head;
        }
        while(head && head->val == val)
        {
           head= head->next;
        }
        
        start = head;
        while(start!= NULL && start->next!= NULL)
        {
            if(start->next && start->next->val == val)
            {
                start->next = start->next->next;
            }
            else
                start = start->next;
        }
        return head;
    }
};