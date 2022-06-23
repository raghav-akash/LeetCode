class Solution {
public:
    int firstUniqChar(string s) {
        vector<int> vc(26,0);
        for(auto c:s)
        {
            vc[c-'a']++;
        }
        
        for(int i=0;i<s.length();i++)
        {
            if(vc[s[i]-'a']==1) return i;
        }
        
        return -1;
    }
};