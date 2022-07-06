class Solution {
public:
    bool isAnagram(string s, string t) {
       vector<int> s1(26,0);
       vector<int> s2(26,0);
        
        if(s.size()!=t.size()){
            return false;
        }
        int x=0;
        while(x<s.size())
        {
            s1[s[x]-'a']++;
            s2[t[x]-'a']++;
            x++;
        }
        if(s1==s2){
            return true;
        }
        return false;
    }
};