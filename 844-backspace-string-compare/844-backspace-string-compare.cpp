class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> stk1,stk2;
        string s1,s2;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='#' && !stk1.empty())
            {
                stk1.pop();
            }
            else if(s[i]!='#')
            {
                stk1.push(s[i]);
            }
        }
        
        while(!stk1.empty())
        {
            s1=stk1.top()+s1;
            stk1.pop();
        }
        
        for(int i=0;i<t.size();i++)
        {
            if(t[i]=='#' && !stk2.empty())
            {
                stk2.pop();
            }
            else if(t[i]!='#')
            {
                stk2.push(t[i]);
            }
        }
        
        while(!stk2.empty())
        {
            s2=stk2.top()+s2;
            stk2.pop();
        }
        
        return s1==s2;
    }
};