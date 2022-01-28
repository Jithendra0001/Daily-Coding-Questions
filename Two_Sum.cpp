class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>v1(2);
        for(int i=0;i<nums.size();i++)
        {
            int p=target-nums[i];
            auto it=find(nums.begin(),nums.begin()+i,p);
            if(it!=nums.begin()+i)
            {
                v1[0]=it-nums.begin();
                v1[1]=i;
                break;
            }
        }
        return v1;
    }
};
