class Solution {
public:
    vector<char> vowel{'a','e','i','o','u'};
    void helper(int n,int last, int& cnt)
    {
        if(n==0) 
        {
            cnt++;
            return;
        }
        for(int i=0;i<5;i++)
        {
            if(i>=last)
            {
                helper(n-1,i,cnt);
            }
        }
    }
    
    int countVowelStrings(int n) {
        int cnt=0;
        helper(n,0,cnt);
        return cnt;
    }
};