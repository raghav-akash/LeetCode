class Solution {
public:
    bool isPalindrome(string s)
    {
        int i=0,j=s.length()-1;
        while(i<j)
        {
            if(s[i]!=s[j])
            {
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
    
    bool isStrictlyPalindromic(int n) {
        for(int i=2;i<n-1;i++)
        {
            string ans="";
            int num=n;
            while(num>0)
            {
                ans+=(to_string(num%i));
                num=num/i;
            }
            
            if(!isPalindrome(ans))
            {
                return false;
            }
        }
        
        return true;
    }
};