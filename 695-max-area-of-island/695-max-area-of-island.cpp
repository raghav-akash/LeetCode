class Solution {
public:
    int dfs(int i,int j,vector<vector<int>>& grid)
    {
        if(i<0 || i>=grid.size() || j<0 || j>=grid[0].size() || grid[i][j]==0)
            return 0;
        
        grid[i][j]=0;
        int sum=1;
        sum+=dfs(i+1,j,grid);
        sum+=dfs(i-1,j,grid);
        sum+=dfs(i,j+1,grid);
        sum+=dfs(i,j-1,grid);
        
        return sum;
    }
    
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int area=0;
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {
                if(grid[i][j]==1)
                {
                    area=max(area,dfs(i,j,grid));
                }
            }
        }
        return area;
    }
};