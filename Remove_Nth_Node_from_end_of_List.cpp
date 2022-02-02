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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* newnode=head;
        int c=0;
        while(newnode)
        {
            newnode=newnode->next;
            c++;
        }
        if(c==1) {newnode=NULL;return newnode;} 
        n=c-n+1;
        newnode=head;int i=1;
        ListNode* z=head;
        while(i<n)
        {
            i++;
            z=newnode;
            newnode=newnode->next;
        }
        if(n==1) {newnode=newnode->next;delete z;return newnode;}
        z->next=newnode->next;
        delete newnode;
        return head;
    }
};
