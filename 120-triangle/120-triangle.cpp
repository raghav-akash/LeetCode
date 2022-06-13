class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int n=triangle.size();
        vector<int> vc(triangle.back());
        for(int i=n-2;i>=0;i--)
        {
            for(int j=0;j<=i;j++)
            {
                vc[j]=min(vc[j],vc[j+1])+triangle[i][j];
            }
        }
        return vc[0];
    }
};