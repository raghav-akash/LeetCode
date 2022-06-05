class Solution {
public:
    bool ans=false;
    void dfs(int src,int dest,vector<int> adj[],vector<int> &vis)
    {
        if(src==dest)
        {
            ans=true;
        }
        vis[src]=1;
        for(auto i:adj[src])
        {
            if(!vis[i]) dfs(i,dest,adj,vis);
        }
    }
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        vector<int> adj[n];
        for(auto i:edges)
        {
            adj[i[0]].push_back(i[1]);
            adj[i[1]].push_back(i[0]);
        }
        vector<int> vis(n,0);
        dfs(source,destination,adj,vis);
        return ans;
        
    }
};