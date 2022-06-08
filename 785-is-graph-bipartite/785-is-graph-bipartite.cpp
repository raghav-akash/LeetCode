class Solution {
public:
    bool bipartite(int node, vector<vector<int>>& graph,vector<int> &col)
    {
        queue<int> q;
        q.push(node);
        col[node]=1;
        while(!q.empty())
        {
            int x=q.front();
            q.pop();
            for(auto it:graph[x])
            {
                if(col[it]==-1)
                {
                    col[it]=1-col[x];
                    q.push(it);
                }
                else if(col[it]==col[x]) return false;
            }
        }
        return true;
    }
    
    bool isBipartite(vector<vector<int>>& graph) {
        vector<int> col(graph.size(),-1);
        for(int i=0;i<graph.size();i++)
        {
            if(col[i]==-1)
            {
                if(!bipartite(i,graph,col)) return false;
            }
        }
        return true;
    }
};