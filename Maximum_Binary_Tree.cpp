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
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        int a=0;int b=nums.size()-1;
        return fun(nums,a,b);
    }
    TreeNode* fun(vector<int>nums,int a,int b)
    {
        int mid=a;
        if(a>b) return NULL;
        for(int i=a+1;i<=b;++i)
        {
            if(nums[mid]<nums[i]) mid=i;
        }
        TreeNode*k=new TreeNode;
        k->val=nums[mid];
        k->left=fun(nums,a,mid-1);
        k->right=fun(nums,mid+1,b);
        return k;
    }
};
