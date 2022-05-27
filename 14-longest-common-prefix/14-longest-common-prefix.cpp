class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string x;
        for(int i=0;i<strs[0].size();i++)
        {
            for(int j=1;j<strs.size();j++)
            {
                if(strs[0][i]!=strs[j][i]) 
                    return x;
            }
            x=x+strs[0][i];
        }
        return x;
    }
};