class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.length();
        int s1[256]={0};
        int maxi=0;
        int l=0;
        int r=0;
        
        while(r<s.length())
        {
            s1[s[r]]++;
            while(s1[s[r]]>1)
            {
                s1[s[l]]--;
                l++;
            }
            maxi=max(maxi,r-l+1);
            r++;
        }
        return maxi;
        
    }
};