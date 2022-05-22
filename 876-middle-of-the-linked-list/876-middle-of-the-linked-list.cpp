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
// Time Complexity 0(n).

// Space Comlexity of 0(1).
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode*temp=head;
        int size=0;
        while(temp != NULL)
        {
            temp = temp->next;
            size++;
        }
        int destination = (size/2)+1;
        int index = 1;
        temp = head; 
        while(index < destination)
        {
            temp = temp->next;
            index++;
        }
        return temp;
    }
};