class Solution {
public:
    void paths(int start,int des,vector<int> &ds,vector<vector<int>> &vc,vector<vector<int>>& graph)
    {
        if(start==des) 
        {
            vc.push_back(ds);
            return;
        }
        for(auto it:graph[start])
        {
            
            ds.push_back(it);
            paths(it,des,ds,vc,graph);
            ds.pop_back();
        }
    }
    
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {        
        int n=graph.size();
        vector<vector<int>> vc;
        vector<int> ds;
        ds.push_back(0);
        paths(0,n-1,ds,vc,graph);
        return vc; 
    }
};