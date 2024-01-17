/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        Node* temp = head;
        map<Node*, Node*> realToCopy;
        while(temp)
        {
            Node* newNode = new Node(temp->val);
            realToCopy[temp] = newNode;
            temp = temp->next;
        }

        Node* temp2 = head;
        while(temp2)
        {
            realToCopy[temp2]->next = realToCopy[temp2->next];
            realToCopy[temp2]->random = realToCopy[temp2->random];
            temp2=temp2->next;
        }
        return realToCopy[head];    
    }
};