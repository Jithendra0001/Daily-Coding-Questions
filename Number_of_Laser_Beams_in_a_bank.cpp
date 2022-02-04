class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int a=0,b=0;
        int sum=0;
        for(auto v:bank)
        {
            a=0;
            for(auto it:v)
            {
                if(it=='1') a++;
            }
            if(a>0){
                if(b>0)
                     {sum+=a*b;}
                b=a;
            } 
        }
        return sum;
    }
};
