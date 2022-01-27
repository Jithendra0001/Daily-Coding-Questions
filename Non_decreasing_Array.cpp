class Solution {
public:
    bool checkPossibility(vector<int>& nums) {
        int k=0;int j=0;
        int n=nums.size();
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]>nums[i+1])
            {k++;j=i;}
        }
        if(k>1)
            return 0;
        int p=0,q=0;
        if(j<n-2)
        {
            if(nums[j]>nums[j+2])
                p=1;
        }
        if(j>0)
        {
            if(nums[j-1]>nums[j+1])
                q=1;
        }
        if(p==1 && q==1) return 0;
        return 1;
    }
};
