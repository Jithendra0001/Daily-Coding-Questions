class Solution {
public:
    int reverse(int x) {
        int i=0;
        if(x<0){i++;x=abs(x);}
        long long int s=0;
        while(x>0)
        {
            s=s*10+(x%10);
            x=x/10;
        }
        if(i==1) s=(-1)*s;
        if(s>pow(2,31)-1)
            return 0;
        if(s<(-1)*pow(2,31)) return 0;
        return s;
    }
};
