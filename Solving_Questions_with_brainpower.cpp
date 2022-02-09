class Solution {
public:
    long long mostPoints(vector<vector<int>>& q) {
       vector<long long>v(q.size(),-1);
        int i=0;
        v[0]=fun(q,v,0);
        
        long long sum=INT_MIN;
        for(int i=0;i<v.size();i++)
        {
            sum=max(sum,v[i]);
        }
        return sum;
    }
    long long fun(vector<vector<int>>& q,vector<long long>& v,int i)
    {
        if(i>=q.size()) {return 0;}
        if(v[i]!=-1) return v[i];
        v[i]=max(q[i][0]+fun(q,v,i+q[i][1]+1),fun(q,v,i+1));
        return v[i];
    }
};
