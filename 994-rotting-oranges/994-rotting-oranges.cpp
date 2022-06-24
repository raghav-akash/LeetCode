class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        if(grid.empty()) return 0;
        queue<pair<int,int>> pq;
        int n=grid.size(),m=grid[0].size(),time=0,tot=0,cnt=0;
        int dx[4] = {0, 0, 1, -1};
        int dy[4] = {1, -1, 0, 0};
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]!=0) tot++;
                if(grid[i][j]==2) pq.push({i,j});
            }
        }
        
        while(!pq.empty())
        {
            int k=pq.size();
            cnt+=k;
            while(k--)
            {
                int x=pq.front().first, y=pq.front().second;
                pq.pop();
                for(int i=0;i<4;i++)
                {
                    int nx=(x+dx[i]) , ny=(y+dy[i]);
                    if(nx<0 || nx>=n || ny<0 || ny>=m || grid[nx][ny]!=1) continue;
                    grid[nx][ny]=2;
                    pq.push({nx,ny});
                }
            }
            if(!pq.empty()) time++;
        }
        
        return (cnt==tot) ? time : -1;
        
        return -1;
    }
};