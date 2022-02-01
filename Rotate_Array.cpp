class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        while(k>=n)
        {k=k-n;}
        if(k==0) return;
        int i=n-k;
        int j=n-1;
        while(i<j)
        {
            swap(nums[i],nums[j]);
            i++;
            j--;
        }
        i=0;j=n-k-1;
        while(i<j)
        {
            swap(nums[i],nums[j]);
            i++;j--;
        }
        i=0;j=n-1;
        while(i<j)
        {
            swap(nums[i],nums[j]);
            i++;j--;
        }
    }
};
