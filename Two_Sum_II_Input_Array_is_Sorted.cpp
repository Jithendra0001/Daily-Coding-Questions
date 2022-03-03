class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int t) {
        int p=0;int q=nums.size()-1; int s;
        vector<int>v;
        while(1)
        {
            s=nums[p]+nums[q];
            if(t==s) {v.push_back(p+1);v.push_back(q+1);break;}
            else if(t>s) {p++;}
            else q--;
        }
        return v;
    }
};
