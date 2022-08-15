class Solution {
public:
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
        int n=grid.size();
        vector<vector<int>> vc(n-2,vector<int>(n-2));

        for(int i=0;i<n-2;i++)
        {
            for(int j=0;j<n-2;j++)
            {
                int maxx=INT_MIN;
                for(int row=i;row<i+3;row++)
                {
                    for(int col=j;col<j+3;col++)
                    {
                        maxx=max(maxx,grid[row][col]);
                    }
                }
                vc[i][j]=maxx;
            }
        }
        
        return vc;
    }
};