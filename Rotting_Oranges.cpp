class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        queue<pair<int,int>>q;
        int count1=0;
        int s=0;
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {
                if(grid[i][j]==2) q.push({i,j});
                if(grid[i][j]==1) count1++;
            }
        }
        if(count1==0) return 0;
        int n=q.size();
        int time=0;
        while(n--)
        {
            pair t=q.front();
            q.pop();
            int a=t.first;
            int b=t.second;
            int dx[]={-1,1,0,0};
            int dy[]={0,0,-1,1};
            for(int i=0;i<4;i++)
            {
                int newx=a+dx[i];
                int newy=b+dy[i];
                if(newx>=0 && newx<grid.size() && newy>=0 && newy<grid[0].size() && grid[newx][newy]==1)
                {
                    grid[newx][newy]=2;s++;
                    q.push({newx,newy});
                }
            }
            if(!n) {n=q.size();time++;}
        }
        if(s==count1) return time-1;
        return -1;
    }
};
