class Solution {
public:
    string decodeString(string s) {
        stack<char> st;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]!=']')
            {
                st.push(s[i]);
            }
            else
            {
                string ns;
                while(st.top()!='[')
                {
                    ns=st.top()+ns;
                    st.pop();
                }
                st.pop();
                string num;
                while(st.size()>0 && isdigit(st.top()))
                {
                    num=st.top()+num; 
                    st.pop();
                }
                
                int n=stoi(num);
                
                while(n--)
                {
                for(int i=0;i<ns.size();i++)
                {
                    st.push(ns[i]);
                }
                }
            }
        }
        
        string fs="";
        while(!st.empty())
        {
            fs=st.top()+fs;
            st.pop();
        }
        
        return fs;
    }
};