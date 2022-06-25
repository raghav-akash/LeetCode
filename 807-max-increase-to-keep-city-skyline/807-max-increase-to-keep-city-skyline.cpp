class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) 
    {
        vector<int> row;
        vector<int> col;
        int n=grid.size(),m=grid[0].size();
        for(int i=0;i<n;i++)
        {
            int rmax=0,cmax=0;
            for(int j=0;j<m;j++)
            {
                rmax=max(rmax,grid[i][j]);
                cmax=max(cmax,grid[j][i]);
            }
            row.push_back(rmax);
            col.push_back(cmax);
        }
        int sum=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                sum+=min(row[i],col[j])-grid[i][j];
            }
        }
        return sum;
    }
};