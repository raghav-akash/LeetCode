class Solution {
public:
    vector<vector<int>> restoreMatrix(vector<int>& r, vector<int>& c) {
        int n=r.size();
        int m=c.size();
        vector<vector<int>> vc(n,vector<int>(m,0));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                vc[i][j]=min(r[i],c[j]);
                r[i]-=vc[i][j];
                c[j]-=vc[i][j];
            }
        }
        
        return vc;
    }
};