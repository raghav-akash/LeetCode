class Solution {
public:
    void helper(string curr,string s,vector<string> &vc,int i)
    {
        if(i==s.length())
        {
            vc.push_back(curr);
            return;
        }
        
        if(isalpha(s[i]))
        {
            string s1=curr;
            s1.push_back(tolower(s[i]));
            helper(s1,s,vc,i+1);
        
            string s2=curr;
            s2.push_back(toupper(s[i]));
            helper(s2,s,vc,i+1);     
        }
        else
        {
            curr.push_back(s[i]);
            helper(curr,s,vc,i+1);
        }
    }
                   
    vector<string> letterCasePermutation(string s) {
        vector<string> vc;
        helper("",s,vc,0);
        return vc;
    }
};