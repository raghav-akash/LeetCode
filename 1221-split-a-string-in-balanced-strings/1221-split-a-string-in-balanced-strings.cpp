class Solution {
public:
    int balancedStringSplit(string s) {
        int cnt=0,bal=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='L') bal++;
            else bal--;
            
            if(bal==0) cnt++;
        }
        
        return cnt;
    }
};