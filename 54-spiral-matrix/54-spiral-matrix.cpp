class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
       vector<int> vc;
       int m=matrix.size();
       int n=matrix[0].size();
       int row=0,col=0;
       while(row<m && col<n)
       {
           for(int i=col;i<n;i++)
           {
               vc.push_back(matrix[row][i]);
           }
           row++;
           for(int i=row;i<m;i++)
           {
               vc.push_back(matrix[i][n-1]);
           }
           n--;
           if(row<m)
           {
               for(int i=n-1;i>=col;i--)
               {
               vc.push_back(matrix[m-1][i]);
               }
               m--;
           }
           if(col<n)
           {
               for(int j=m-1;j>=row;j--)
               {
                    vc.push_back(matrix[j][col]);
               }
               col++;
           }
           
       }
       return vc;
    }
};