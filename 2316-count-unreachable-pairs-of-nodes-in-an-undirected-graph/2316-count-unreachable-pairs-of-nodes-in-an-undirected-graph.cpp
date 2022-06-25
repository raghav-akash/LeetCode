class Solution {
public: 
    void dfs(int i, vector<vector<long long int>> &adj,vector<int> &vis,long long int &cnt)
    {
        vis[i]=1;
        cnt++;
        for(auto it:adj[i])
        {
            if(!vis[it])
            {
                dfs(it,adj,vis,cnt); 
            }
        }
    }
    
    long long countPairs(int n, vector<vector<int>>& edges) {
        vector<vector<long long int>> adj(n);
        for(auto i:edges)
        {
            adj[i[0]].push_back(i[1]);
            adj[i[1]].push_back(i[0]);
        }
        vector<int> vis(n,0);
        long long int length=((long long int)n*(n-1))/2;
        for(int i=0;i<n;i++)
        {
            long long int cnt;
            if(!vis[i])
            {
                cnt=0;
                dfs(i,adj,vis,cnt);
                length-=cnt*(cnt-1)/2;
            } 
        }
        return length;
    }
};