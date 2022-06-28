class Solution {
public:
    int minDeletions(string s) {
        vector<int> vc(26,0);
        unordered_set<int> value;
        for(char i:s)
        {
            vc[i-'a']++;
        }
        
        int cnt=0;
        for(int i=0;i<26;i++)
        {
            while(vc[i]>0 && value.find(vc[i])!=value.end())
            {
                vc[i]--;
                cnt++;
            }
            value.insert(vc[i]);
        }
        
        return cnt;
    }
};