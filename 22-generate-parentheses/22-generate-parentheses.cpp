class Solution {
public:
    void helper(int open,int close,int n,vector<string> &vc,string s)
    {
        //Base case when open and close become equal to n
        if(open==n && close==n)
        {
            vc.push_back(s);
            return;
        }
        
        //If open<n we have a choice to take "("
        if(open<n)
        {
            helper(open+1,close,n,vc,s+"(");
        }
        
        //If close<n we have a choice to take ")"
        if(close<open)
        {
            helper(open,close+1,n,vc,s+")");
        }
    }
    
    vector<string> generateParenthesis(int n) {
        vector<string> vc;
        int open=0,close=0;
        string s;
        helper(open,close,n,vc,s);
        return vc;
    }
};