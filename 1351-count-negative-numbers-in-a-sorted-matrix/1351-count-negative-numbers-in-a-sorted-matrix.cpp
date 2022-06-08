class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int n=grid.size();
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            int l=0;
            int r=grid[i].size()-1;
            while(l<=r)
            {
                int mid=l+(r-l)/2;
                if(grid[i][mid]>=0) l=mid+1;
                else r=mid-1;
            }
            cnt+=grid[i].size()-l;
        }
        return cnt;
    }
};