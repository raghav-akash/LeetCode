class Solution {
public:
    int longestPalindrome(string s) {
        vector<int> vc(128,0);
        for(auto c:s)
        {
            vc[c]++;
        }
        int cnt=0;
        for(int num:vc)
        {
            cnt+=num/2*2;
        }
        
        if(cnt<s.length()) cnt++;
        
        return cnt;
    }
    
};