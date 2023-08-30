/// O(N), space O(1) floyds tortoise-hare
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast && fast->next)
        {
            fast = fast->next->next;
            slow = slow->next;
            if(fast == slow)
            {
                return true;
            }
        }
        return false;
    }
};

//time O(N) space O(N)
// class Solution {
// public:
//     bool hasCycle(ListNode *head) {
//         ListNode* temp = head;
//         map<ListNode* , bool> visited;
//         while(temp)
//         {
//             if(visited[temp])
//             {
//                 return true;
//             }
//             visited[temp] = true;
//             temp = temp->next;
//         }
//         return false;
//     }
// };