#define ll long long
class Solution {
public:
    vector<long long> maximumEvenSplit(long long s) {
        vector<ll>v;
        if(s%2==1) {return v;}
        ll i=2;
        ll w=0;
        while(w+i<=s)
        {
            v.push_back(i);
            w+=i;i+=2;
        }
        if(s-w>0) v.back()+=s-w;
        return v;
    }
};
