class Solution {
public:
    string longestPalindrome(string s) {
        int n=s.length();
        vector<vector<int>> vc(n,vector<int>(n,0));
        int start=0,maxlen=1;
        for(int i=0;i<n;i++)
            vc[i][i]=1;
        
        for(int i=0;i<n-1;i++)
        {
            if(s[i]==s[i+1])
            {
                vc[i][i+1]=1;
                start=i;
                maxlen=2;
            }
        }
        
        for(int k=3;k<=n;++k)
        {
            for(int i=0;i<n-k+1;++i)
            {
                int j=i+k-1;
                if(s[i]==s[j] && vc[i+1][j-1]==1)
                {
                    vc[i][j]=1;
                    
                    if(k>maxlen)
                    {
                        maxlen=k;
                        start=i;
                    }
                    
                }
            }
        }
 
        string ns=s.substr(start,maxlen);
        return ns;
    }
};