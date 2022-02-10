class Solution {
public:
    vector<int> rearrangeArray(vector<int>& v) {
        vector<int>v1,v2;
        for(int i=0;i<v.size();i++)
        {
            if(v[i]>0) v1.push_back(v[i]);
            else v2.push_back(v[i]);
        }
        int n=v.size();
        vector<int>q(n);
        int j=0;
        for(int i=0;i<n/2;i++)
        {
            q[j++]=v1[i];
            q[j++]=v2[i];
        }
        return q;
    }
};
