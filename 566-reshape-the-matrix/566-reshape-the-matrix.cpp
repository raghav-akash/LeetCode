class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& M, int r, int c) {
        
        vector<vector<int>> v(r,vector<int>(c));
        int Mrow=M.size();
        int Mcol=M[0].size();
        int Nrow=0,Ncol=0;
        if(Mrow*Mcol!=r*c)
            return M;
        for(int i=0;i<Mrow;i++)
        {
            for(int j=0;j<Mcol;j++)
            {
               v[Nrow][Ncol]=M[i][j];
                Ncol++;
                if(Ncol==c)
                {
                    Nrow++;
                    Ncol=0;
                }
            }
        }
        return v;
    }
};