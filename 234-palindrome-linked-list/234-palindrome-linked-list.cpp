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
    bool isPalindrome(ListNode* head) {
        ListNode* start = head; 
        ListNode* tail = head;
        if(head==NULL || head->next==NULL)
        {
            return true;
        }
         ListNode* rev = NULL;
         ListNode* temp;
        while (tail != NULL and tail->next != NULL)
        {
            temp = start;
            start = start->next;
            tail = tail->next->next;
            temp->next = rev;
            rev = temp;
            
            if (tail != NULL and tail->next == NULL) 
            {
                start = start->next;
                break;
            }
        }
        
        
        while (rev != NULL and start != NULL) 
        {
            if (rev->val != start->val)
                return false;
            rev = rev->next;
            start = start->next;
        }
        
        return true;
   }
};