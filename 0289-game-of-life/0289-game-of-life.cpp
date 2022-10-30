class Solution {
public:
    int checkneighbour(vector<vector<int>>& board,int r,int c)
    {
        int neighbour=0;
        for(int i=r-1;i<r+2;i++)
        {
            for(int j=c-1;j<c+2;j++)
            {
                if(i<0 || j<0 || i>=board.size() || j>=board[0].size() || (i==r && j==c))
                {
                    continue;
                }
                else if(board[i][j]==1 || board[i][j]==3)
                {
                    neighbour++;
                }
            }
        }
        return neighbour;
    }
    void gameOfLife(vector<vector<int>>& board) {
        int n=board.size();
        int m=board[0].size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                int num=checkneighbour(board,i,j);
                if(board[i][j]==1)
                {
                    if(num==2 || num==3)
                    {
                        board[i][j]=3;
                    }
                }
                else
                {
                    if(num==3)
                    {
                        board[i][j]=2;
                    }
                }
            }
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                int num=checkneighbour(board,i,j);
                if(board[i][j]==1)
                {
                    board[i][j]=0;
                }
                else
                {
                    if(board[i][j]==2 || board[i][j]==3)
                    {
                        board[i][j]=1;
                    }
                }
            }
        }
    }
};