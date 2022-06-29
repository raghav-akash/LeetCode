class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> s1hash(26,0);
        vector<int> s2hash(26,0);
        
        vector<int> vc;
        
        if(s.size()<p.size())
            return vc;
        
        int l=0,r=0;
        while(r<p.size())
        {
            s1hash[p[r]- 'a'] +=1;
            s2hash[s[r]- 'a'] +=1;
            r++;
        }
        r--;
        
        while(r<s.size())
        {
            if(s1hash==s2hash)
            {
                vc.push_back(l);
            }
            r++;
            
            if(r!=s.size())
            {
                s2hash[s[r]- 'a']+=1;
            }
            s2hash[s[l]- 'a']-=1;
            l++;
        }
        return vc;
    }
};