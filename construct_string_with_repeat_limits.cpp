class Solution {
public:
    string repeatLimitedString(string s, int k) {
        map<char,int,greater<int>>m;
        for(auto it:s)
        {
            m[it]++;
        }
        string q="";
        set<char,greater<int>>w;
        for(int i=0;i<s.size();i++) w.insert(s[i]);//bbbaaaa
        while(!w.empty())
        {
            char x=*(w.begin());//a
            w.erase(x);
            char y;
            if(w.size()>0) y=*(w.begin());//a
            int z=0;
            for(int i=0;i<m[x];i++)
            {
                q+=x;z++;
                if(i!=m[x]-1 && z==k) {
                    if(w.size()==0) {z=0;break;}
                    q+=y;m[y]--;z=0;
                    if(m[y]==0) {w.erase(y);y=*(w.begin());}
                }
            }
        }
        return q;
    }
};
