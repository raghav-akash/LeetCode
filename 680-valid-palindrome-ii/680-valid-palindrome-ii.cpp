class Solution {
public:
    bool helper(string s, int l, int r)
    {
        while(l<r)
        {
            if(s[l]!= s[r])
                return false;
            
            l++;
            r--;
        }
        return true;
    }

    bool validPalindrome(string s) {
        int i=0 , j=s.length()-1;
        while(i<j)
        {
            if(s[i] != s[j])
            {
                return helper(s, i+1, j) || helper(s, i, j-1);
            }
            i++;
            j--;
        }
        return true;
    }
};