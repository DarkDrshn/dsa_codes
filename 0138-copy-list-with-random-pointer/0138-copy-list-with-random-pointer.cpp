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
        if(!head) return NULL;
        
        Node* p = head;
        
        while(p){
            Node* node = new Node(p->val);
            node->next = p->next;
            p->next = node;
            p = node->next;
        }
        
        p = head;
        while(p){
            p->next->random = (p->random)?p->random->next:NULL;
            p = p->next->next;
        }
        
        Node* ans = head->next;
        p = head->next;
        while(head){
            head->next = p->next;
            head = head->next;
            if(!head) break;
            p->next = head->next;
            p = p->next;
        }
        return ans;
    }
};