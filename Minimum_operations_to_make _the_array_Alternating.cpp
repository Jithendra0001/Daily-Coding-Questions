class Solution {
public:
    int minimumOperations(vector<int>& v) {
        if(v.size()==1)
        {
            return 0;
        }
        unordered_map<int,int>m;
        int n=v.size();
        for(int i=0;i<v.size();i+=2)
        {
            m[v[i]]++;
        }
        multimap<int,int>w;
        for(auto it:m)
        {
            w.insert({it.second,it.first});
        }
        unordered_map<int,int>q;
        for(int i=1;i<v.size();i+=2)
        {
            q[v[i]]++;
        }

        multimap<int,int>z;
         for(auto it:q)
        {
            z.insert({it.second,it.first});
        }
        int b=n/2;
        int a=n-b;
        int fe=w.rbegin()->second;
        int fv=w.rbegin()->first;
        int se=z.rbegin()->second;
        int sv=z.rbegin()->first;
        if(se!=fe)
        {
            return (a-fv+b-sv);
        }
        else{
            if(fv<=sv)
            {
                if(a!=fv)
                {
                auto it=w.rbegin();it++;
                return (b-sv+a-(it->first));
                }
                else{
                    return (b-sv+a);
                }
            }
            else{
                if(b>sv)
                {
                    auto it=z.rbegin();it++;
                    return (b-(it->first)+a-fv);
                }
                  else{
                      return (b+a-fv);
                  }
            }
        }
    }
};
