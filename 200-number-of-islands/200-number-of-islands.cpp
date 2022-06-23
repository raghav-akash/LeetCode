class Solution {
public:
    void dfs(int row,int col,vector<vector<char>> &grid)
    {
        if(row<0 || row>=grid.size() || col<0 || col>=grid[row].size())
            return;
        if(grid[row][col]=='0' || grid[row][col]=='2')
            return;
        
        grid[row][col]='2';
        
        dfs(row+1,col,grid); //Down
        dfs(row-1,col,grid); //Up
        dfs(row,col+1,grid); //Right
        dfs(row,col-1,grid); //Left      
    }
    
    int numIslands(vector<vector<char>>& grid) {
        int count=0;
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[i].size();j++)
            {
                if(grid[i][j]=='1')
                {
                    dfs(i,j,grid);
                    count++;
                }
            }
        }
        return count;
    }
};