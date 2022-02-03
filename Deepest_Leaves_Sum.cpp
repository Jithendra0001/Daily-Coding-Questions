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
class Solution {
public:
    int deepestLeavesSum(TreeNode* root) {
        queue<TreeNode*>q;
        q.push(root);
        int s;
        while(!q.empty())
        {
            int n=q.size();
            s=0;
        for(int i=0;i<n;i++)
        {
            root=q.front();
            q.pop();
            s=s+(root->val);
            if(root->left) {q.push(root->left);}
            if(root->right) q.push(root->right);
        }
        }
        return s;
    }
};
