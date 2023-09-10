/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* p1 = headA;
        ListNode* p2 = headB;
        while(p1 != p2)
        {
            p1 = p1->next;
            p2 = p2->next;
            
            if(!p1 && !p2)  return NULL;
            if(p1 == NULL) p1 = headB;
            if(p2 == NULL) p2 = headA;
        }
        return p1;
    }
};


// 1. o(N^2)
// 2. make visited
// 3. find diff in len and use it as delay bw two pointers
// 4. optimal