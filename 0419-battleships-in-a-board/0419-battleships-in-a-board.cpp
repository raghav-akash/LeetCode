class Solution {
public:
    void modify(vector<vector<char>>& board,int i,int j)
    {
        if(i<0 || i>=board.size() || j<0 || j>=board[0].size() || board[i][j]!='X') 
        {
            return;
        }
        board[i][j]='.';
        modify(board,i+1,j);
        modify(board,i-1,j);
        modify(board,i,j+1);
        modify(board,i,j+1);
        
    }
    
    int countBattleships(vector<vector<char>>& board) {
        int battleship=0;
        for(int i=0;i<board.size();i++)
        {
            for(int j=0;j<board[0].size();j++)
            {
                if(board[i][j]=='X')
                {
                    battleship++;
                    modify(board,i,j);
                }
            }
        }
        return battleship;
    }
};