class Solution {
public:
    string mergeAlternately(string word1, string word2) {
    string s="";
    int n=word1.size();
    int m=word2.size();
    int p=max(n,m);
    for (int i = 0; i <p; i++) {
        if (i<n)
            s+=word1[i];
        if (i<m)
            s+=word2[i];
    }
    return s;
    }
};