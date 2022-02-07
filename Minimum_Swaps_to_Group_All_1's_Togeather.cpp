class Solution {
public:
    int minSwaps(vector<int>& nums) {
        int n=nums.size();
        vector<int>v(n,0);
        int k=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==1) {v[k++]=1;}
        }
        int p=0;
        for(int i=0;i<k;i++)
        {
            if(v[i]!=nums[i]) p++;
        }
        if(p==0) return p;
        int j=0;
        int sum=p;
        int z=0;
        for(int i=k;i<n;i++)
        {
            if(v[j]!=nums[j]) p--;
            j++;
            v[i]=1;
            if(v[i]!=nums[i]) p++;
            sum=min(p,sum);
            if(i==n-1 && z==0) {i=-1;n=k-1;z=1;}
        }
        return sum;
    }
};
