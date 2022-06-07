class Solution {
public:
    int maximalNetworkRank(int n, vector<vector<int>>& roads) {
        vector<vector<int>> adj(n,vector<int> (n,0));
        vector<int> deg(n,0);
        for(auto i:roads)
        {
            deg[i[0]]++;
            deg[i[1]]++;
            adj[i[0]][i[1]]=1;
            adj[i[1]][i[0]]=1;
        }
        int maxx=0;
        int sum=0;
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                sum=deg[i]+deg[j];
                if(adj[i][j]==1) sum--;
                maxx=max(maxx,sum);
            }
        }
        return maxx;
    }
};