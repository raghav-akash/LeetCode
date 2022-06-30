class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        int n=coordinates.size();
        if(n==2)
            return true;
        int y0=coordinates[0][1];
        int x0=coordinates[0][0];
        int dy=coordinates[1][1]-coordinates[0][1];
        int dx=coordinates[1][0]-coordinates[0][0];
        for(int i=2;i<n;i++)
        {
            int x = coordinates[i][0];
            int y = coordinates[i][1];
            if(dy*(x-x0)!=dx*(y-y0))
                return false;
        }
        return true;
    }
};