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
      // Initialize current, previous and 
        // next pointers 
        ListNode *temp = head; 
        ListNode *prev = NULL, *after = NULL; 
  
  
        while (temp != NULL) 
        { 
            // Store next 
            after = temp->next; 
  
            // Reverse current node's pointer 
            temp->next = prev; 
  
            // Move pointers one position ahead. 
            prev = temp; 
            temp = after; 
        } 
        head = prev; 
        return prev;
    }
};