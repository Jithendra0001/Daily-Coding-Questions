class Solution {
public:
    int minMoves(int t, int m) {
        int count=0;
        while(m>0 && t!=1)
        {
            if(t%2==1) {
                t--;count++;
            }
            t/=2;count++;
            m--;
        }
        return count+t-1;
    }
};
