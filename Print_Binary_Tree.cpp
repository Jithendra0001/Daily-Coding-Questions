/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
struct node{
    int a,b;
};
class Solution {
public:
    vector<vector<string>> printTree(TreeNode* root) {
        int h=0;
        queue<TreeNode*>q1;
        q1.push(root);
        int n=q1.size();
        while(n--)
        {
            TreeNode* p=q1.front();
            q1.pop();
            if(p->left!=NULL) q1.push(p->left);
            if(p->right!=NULL) q1.push(p->right);
            if(!n) {h++;n=q1.size();}
        }
        vector<vector<string>>v(h,vector<string>(-1+pow(2,h),""));
        queue<pair<TreeNode*,node>>q;
        node z;z.a=0;z.b=v[0].size()-1;
        q.push({root,z});
        n=q.size();
        h=0;
        while(n--)
        {
            TreeNode* newnode=q.front().first;
            z=q.front().second;
            q.pop();
            int mid=(z.a+z.b)/2;
            v[h][mid]=to_string(newnode->val);
            if(newnode->left)
            {
                node k;k.a=z.a;k.b=mid-1;
                q.push({newnode->left,k});
            }
            if(newnode->right)
            {
                z.a=mid+1;
                node k;k.a=mid+1;k.b=z.b;
                q.push({newnode->right,k});
            }
            if(!n) {n=q.size();h++;}
        }
        return v;
    }
};
