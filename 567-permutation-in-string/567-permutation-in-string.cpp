class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int> s1hash(26,0);
        vector<int> s2hash(26,0);
        
        if(s1.size()>s2.size()){
            return false;
        }
        
        int l=0,r=0;
        while(r<s1.size())
        {
            s1hash[s1[r]- 'a'] +=1;
            s2hash[s2[r]- 'a'] +=1;
            r++;
        }
        r--;
        
        while(r<s2.size())
        {
            if(s1hash==s2hash)
            {
                return true;
            }
            r++;
            if(r!=s2.size())
            {
                s2hash[s2[r]- 'a']+=1;
            }
            s2hash[s2[l]- 'a']-=1;
            l++;
        }
        return false;
        
    }
};