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
        if(!head || !head->next)    return head;
        ListNode* prev = NULL;
        ListNode* curr = head;
        ListNode* n = head->next;
        while(curr)
        {
            curr->next = prev;
            prev = curr;
            curr = n;
            if(n)   n = n->next;
        }
        return prev;   
    }
};