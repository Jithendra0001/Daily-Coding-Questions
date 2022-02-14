#define ll long long
class Solution {
public:
    long long minimumRemoval(vector<int>& v) {
        map<ll,ll>m;
        long long sum2=0;
        ll n=v.size();
        for(ll i=0;i<v.size();i++)
        {
            m[v[i]]++;
            sum2+=v[i];
        }
        long long sum1=0;
        long long k=10e11;
        for(auto it:m)
        {
            ll p=it.first,q=it.second;
            sum2-=p*q; 
            n=n-q;
            if(n>0)
            k=min(sum2-(p*n)+sum1,k);
            else k=min(sum1,k);
            sum1+=p*q;
        }
        return k;
    }
};
