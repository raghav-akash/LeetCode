class Solution {
public:
    bool canFinish(int n, vector<vector<int>>& pre) {
        vector<int> adj[n];
        vector<int> in(n,0);
        queue<int> q;
        int size=pre.size();
        for(int i=0;i<size;i++)
        {
            adj[pre[i][1]].push_back(pre[i][0]);
        }
        for(int i=0;i<n;i++)
        {
            for(auto it:adj[i])
            {
                in[it]++;
            }
        }
        
        for(int i=0;i<n;i++)
        {
            if(in[i]==0) q.push(i);
        }
        
        int cnt=0;
        while(!q.empty())
        {
            int node=q.front();
            q.pop();
            cnt++;
            for(auto it: adj[node])
            {
                in[it]--;
                if(in[it]==0) q.push(it);
            }
        }
        
        if(cnt==n) return true;
        return false;
        
    }
};