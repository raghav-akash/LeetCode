class Solution {
public:
    int lengthOfLastWord(string s) {
        int r=s.length()-1;
        int cnt=0;
        for(int i=r;i>=0;i--)
        {
            if(s[i]!=' ') cnt++;
            else if(cnt>0) break;;
        }
        return cnt;
    }
};