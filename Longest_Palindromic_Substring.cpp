class Solution {
public:
    string longestPalindrome(string s) {
        int n=s.size();
        int t[n][n];
        int x=1;
        int a=0,b=0;
        for(int i=0;i<n;i++)
        {
            t[i][i]=1;
            if(i<n-1)
            {
                if(s[i]==s[i+1]) {t[i][i+1]=2;x=2;a=i;b=i+1;}
                else t[i][i+1]=0;
            }
        }
        int j=2;
        while(j<s.size())
        {
        for(int i=0;i<s.size();i++)
        {
            if(i+j>=n) break;
            if(s[i]==s[i+j] && t[i+1][i+j-1]>0) t[i][i+j]=t[i+1][i+j-1]+2;
            else t[i][i+j]=0;
            if(x<t[i][i+j])
            {
                a=i;b=i+j;
                x=t[i][i+j];
            }
        }
            j++;
        }
        return s.substr(a,b-a+1);
    }
};
