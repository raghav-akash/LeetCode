class Solution {
public:
    int partitionString(string s) {
        vector<int> vc(26,0);
        int cnt=1;
        for(int i=0;i<s.length();i++)
        {
            if(vc[s[i]-'a'])
            {
                cnt++;
                fill(vc.begin(),vc.end(),0);  
            }
            vc[s[i]-'a']++;
        }
        
        return cnt;
    }
};