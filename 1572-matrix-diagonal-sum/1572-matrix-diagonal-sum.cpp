class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
      int r=mat.size();
      int sum=0;
      int i=0;
      while(i<r)
      {
          sum+=mat[i][i];
          i++;
      }
      int row=0;
      int col=r-1;
      while(row<r)
      {
          sum+=mat[row][col];
          row++;
          col--;
      }
        
      if(r%2!=0)
      {
          sum-=mat[r/2][r/2];
      }
        return sum;
    }
};