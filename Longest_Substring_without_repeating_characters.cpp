class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i=0;
        vector<char>v(256,-1);
        int l=0;int m=0;int j=0;
        for(int i=0;i<s.size();i++)
        {
            if(v[s[i]]==-1)
            {
                v[s[i]]=1;l++;
            }
            else
            {
                v[s[j++]]=-1;
                i--;l--;
            }
            m=max(l,m);
        }
        return m;
    }
};
