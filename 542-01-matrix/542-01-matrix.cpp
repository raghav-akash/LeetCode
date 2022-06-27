class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int n=mat.size();
        int m=mat[0].size();
        vector<vector<int>> ans(n,vector<int>(m,-1));
        queue<pair<int,int>> q;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(mat[i][j]==0)
                {
                    ans[i][j]=0;
                    q.push({i,j});
                }
            }
        }
        int dx[4]={1,-1,0,0};
        int dy[4]={0,0,1,-1};
        while(!q.empty())
        {
            auto ele=q.front();
            q.pop();
            for(int i=0;i<4;i++)
            {
                int x=ele.first+dx[i], y=ele.second+dy[i];
                if(x>=0 && x<=n-1 && y>=0 && y<=m-1 && ans[x][y]==-1)
                {
                    ans[x][y]=ans[ele.first][ele.second]+1;
                    q.push({x,y});
                }
            }
        }
        
        return ans;
    }
};