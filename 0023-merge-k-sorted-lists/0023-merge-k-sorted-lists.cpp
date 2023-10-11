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
class cmp {
public:
    bool operator()(ListNode *a, ListNode *b){
        return a->val>b->val;
    }
};
class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        ListNode *head=new ListNode();
        ListNode *p=head,*x;

        //priority_queue<ListNode*> pq;
        priority_queue<ListNode*, vector<ListNode*>,cmp> pq;
        for(auto &i:lists) if(i!=NULL) pq.push(i);
        while(!pq.empty()){
            x=pq.top();
            pq.pop();
            if(x==NULL) continue;
            p->next=x;
            p=p->next;
            if(x->next!=NULL) pq.push(x->next);
        }
        return head->next;
    }
};