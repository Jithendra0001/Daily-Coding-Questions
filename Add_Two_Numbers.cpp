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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* l3=NULL,*newnode,*tail;
        int a=0,b=0;int s=0;int c=0;
        while(l1 || l2)
        {
            if(l1) {a=l1->val;}
            else a=0;
            if(l2) {b=l2->val;}
            else b=0;
            s=a+b;
            if(l1) l1=l1->next;
            if(l2) l2=l2->next;
            newnode=new ListNode;
            if(s+c>9)
            {
                s=s+c-10;
            newnode->val=s;
                c=1;
            }
            else {
                newnode->val=s+c;
                c=0;
            }
            if(!l3) {
                l3=newnode;
                tail=newnode;
            }
            else{
                tail->next=newnode;
                tail=newnode;
            }
        }
        if(c==1) {newnode=new ListNode;newnode->val=c;tail->next=newnode;}
        return l3;
    }
};
