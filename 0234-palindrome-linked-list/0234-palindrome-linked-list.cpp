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
    ListNode* reverseList(ListNode* head)
    {
        if(!head || !head->next)   return head;
        ListNode* curr = head;
        ListNode* n = head->next;
        ListNode* prev = NULL;
        while(curr)
        {
            curr->next = prev;
            prev = curr;
            curr = n;
            if(n) n = n->next;;
        }
        return prev;
    }
    bool isPalindrome(ListNode* head) {
        //find mid
        ListNode* fast  =head;
        ListNode* slow  =head;
        while(fast->next && fast->next->next)
        {
            fast = fast->next->next;
            slow = slow->next;
        }
        //reverse the second half of the list
        slow->next = reverseList(slow->next);
        ListNode* head2 = slow->next;
        while(head && head2)
        {
            if(head->val != head2->val) return false;
        
            head = head->next;
            head2 = head2->next;
        }
        return true;
    }
};