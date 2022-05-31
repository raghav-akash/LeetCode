class Solution {
public:
    bool ispalindrome(string s)
    {
        string s1(s.rbegin(),s.rend());
        if(s==s1) return true;
        return false;
    }
    
    void solve(int ind,string s,vector<string> &ds,vector<vector<string>> &vc)
    {
        if(ind==s.length())
        {
            vc.push_back(ds);
            return;
        }
        
        for(int i=ind;i<s.size();i++)
        {
            if(ispalindrome(s.substr(ind,i-ind+1)))
            {
                ds.push_back(s.substr(ind,i-ind+1));
                solve(i+1,s,ds,vc);
                ds.pop_back();
            }
        }
    }
    
    vector<vector<string>> partition(string s) {
        vector<vector<string>> vc;
        vector<string> ds;
        solve(0,s,ds,vc);
        return vc;
    }
};