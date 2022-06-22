class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, char> mp1, mp2;
        int n=s.size();
        for(int i=0;i<n;i++)
        {
            
            if(mp1.find(s[i])==mp1.end())
            {
                if(mp2.find(t[i])!=mp2.end())
                {
                    return false;
                }
                mp1[s[i]]=t[i];
                mp2[t[i]]=s[i];
            }
            else if(mp1[s[i]]!=t[i])
            {
                return false;
            }
        }
        return true;
    }
};