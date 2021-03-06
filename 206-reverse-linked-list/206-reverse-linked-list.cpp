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

// Time Complexity of 0(n).

// Space Complexity of O(1).

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
     //temp is indicating the current position of the pointer on the list.
       ListNode *temp = head, *pre = NULL, *after = NULL; 
  
        while (temp != NULL) 
        {  
            after = temp->next; 
            temp->next = pre; // For reversing the temp's pointer
            pre = temp; 
            temp = after; 
        } 
       
        return pre;
    }
};