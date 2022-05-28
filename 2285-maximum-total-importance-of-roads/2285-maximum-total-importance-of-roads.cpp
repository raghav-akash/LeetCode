class Solution {
public:
    long long maximumImportance(int n, vector<vector<int>>& roads) {
        vector<int> vc(n,0);
        for(auto i:roads)
        {
            vc[i[0]]++;
            vc[i[1]]++;
        }
        long long sum=0,rank=1;
        sort(vc.begin(),vc.end());
        for(auto i: vc)
        {
            sum+=i*rank;
            rank++;
        }
        
        return sum;
    }
};