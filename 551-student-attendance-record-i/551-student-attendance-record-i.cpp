class Solution {
public:
   bool checkRecord(string s) {
    int A=0, L=0;
    for(int i=0;i<s.length();i++) {
        if(s[i]=='A') A++;
        if(s[i]=='L') L++;
        else L=0;
        if(A>=2||L>2) return false;
    }
    return true;
    }
};