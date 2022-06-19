class Solution {
public:
    string greatestLetter(string s) {
        int vc[128]={};
        
        for(auto i:s)
        {
            vc[i]++;
        }
        
        for(auto ch='Z';ch>='A';ch--)
        {
            if(vc[ch] && vc[ch+'a'-'A'])
                return string(1,ch);
        }
        return "";
    }
};