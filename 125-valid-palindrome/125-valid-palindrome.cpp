class Solution {
public:
    bool isPalindrome(string s) {
        string curr="";
        for(int i=0;i<s.length();i++)
        {
            if(isalnum(s[i]))
            {
                curr+=tolower(s[i]);
            }
        }
        int l=0,r=curr.length()-1;
        while(l<=r)
        {
            if(curr[l]!=curr[r]) return false;
            l++;
            r--;
        }
        return true;
    }
};