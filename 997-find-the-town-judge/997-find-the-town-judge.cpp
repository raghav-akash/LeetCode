class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<int> vc(n+1,0);
        for(auto i:trust)
        {
            vc[i[0]]--;
            vc[i[1]]++;
        }
        for(int j=1;j<=n;j++)
        {
            if(vc[j]==n-1) return j;
        }
        return -1;
    }
};