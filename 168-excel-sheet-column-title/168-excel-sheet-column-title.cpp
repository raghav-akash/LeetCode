class Solution {
public:
    string convertToTitle(int col) {
        string ans;
        while(col--)
        {
            ans=(char)('A'+col%26)+ans;
            col/=26;
        }
        return ans;
    }
};