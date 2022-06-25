class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int area=0;
        int r=grid.size(),c=grid[0].size();
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                if(grid[i][j]==1)
                {
                    area+=4;
                    if(i<r-1 && grid[i+1][j])
                    {
                        area--;
                    }
                    if(i>0 && grid[i-1][j])
                    {
                        area--;
                    }
                    if(j<c-1 && grid[i][j+1])
                    {
                        area--;
                    }
                    if(j>0 && grid[i][j-1])
                    {
                        area--;
                    }
                }
            }
        }
        return area;
    }
};