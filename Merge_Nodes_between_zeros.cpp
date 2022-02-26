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
#define ll long long
class Solution {
public:
    ListNode* mergeNodes(ListNode* head) {
        vector<int>v;
        ListNode* newnode=head;
        ll s=0;
        newnode=newnode->next;
        while(newnode!=NULL)
        {
            if(newnode->val==0)
            {
                v.push_back(s);
                s=0;
            }
            else
            s+=newnode->val;
            newnode=newnode->next;
        }
        newnode=head;
        for(int i=0;i<v.size();i++)
        {
            head->val=v[i];
            if(i==v.size()-1) {head->next=NULL;}
            else head=head->next;
        }
        return newnode;
    }
};
