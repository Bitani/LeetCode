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
          int total = 0 , count = 0;
    int getDecimalValue(ListNode* head) {
        if(head == NULL) 
        {
            return 0;
        }
        getDecimalValue(head->next);
        
        total = total + head->val * pow(2,count++);
        
        return total;
    }
};