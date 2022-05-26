class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> vc(numRows);
        int count=1;
        for(int i=0;i<numRows;i++)
        {
            vc[i].resize(count);
            vc[i][0]=1;
            vc[i][i]=1;
            for(int j=1;j<i;j++)
            {
                vc[i][j]=vc[i-1][j-1]+vc[i-1][j];
            }
            count++;
        }
        return vc;
    }
};