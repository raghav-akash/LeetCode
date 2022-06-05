class Solution {
public:
    bool isSafe(int row,int col,vector<string> &board, int n)
    {
        int r=row;
        int c=col;
        while(row>=0 && col>=0)
        {
            if(board[row][col]=='Q') return false;
            row--;
            col--;
        }
        
        row=r;
        col=c;
        
        while(col>=0)
        {
            if(board[row][col]=='Q') return false;
            col--;
        }
        
        col=c;
        while(row<n && col>=0)
        {
            if(board[row][col]=='Q') return false;
            row++;
            col--;
        }
        
        return true;
    }
    
    int solve(int col,vector<string> &board,int n)
    {
        if(col==n)
        {
            return 1;
        }
        int res=0;
        for(int row=0;row<n;row++)
        {
            if(isSafe(row,col,board,n))
            {
                board[row][col]='Q';
                res+=solve(col+1,board,n);
                board[row][col]='.';
            }
        }
        return res;
    }
        
    int totalNQueens(int n) {
        vector<string> board(n);
        string s(n,'.');
        for(int i=0;i<n;i++)
        {
            board[i]=s;
        }
        
        int soln=solve(0,board,n);
        return soln;
    }
};