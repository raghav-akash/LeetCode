class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        int count=0;
        map<char,int> mp1;
        map<char,int> mp2;
        for(int i=0;i<s1.size();i++)
        {
            mp1[s1[i]]++;
            mp2[s2[i]]++;
            if(s1[i]!=s2[i])
                count++;
        }
        if(mp1==mp2){
        if(count==2 || count==0)
            return true;
        }
        return false;
    }
};