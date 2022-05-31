class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
       char c;
       for(int i=0;i<board.size();i++)
       {
           for(int j=0;j<board[0].size();j++)
           {
               c=board[i][j];
               if(c!='.')
               {
                   for(int k=0;k<board.size();k++)
                   {
                       if(k!=i && board[k][j]==c) return false;
                       if(k!=j && board[i][k]==c) return false;
                       int indx=3*(i/3)+k/3;
                       int indy=3*(j/3)+k%3;
                       if(indx!=i && indy!=j && board[indx][indy]==c) return false;
                   }
               }
           }
       }
        return true;
    }
};