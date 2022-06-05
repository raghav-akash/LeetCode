class Solution {
public:
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
        vector<int> vc;
        vector<int> deg(n,0);
        for(auto i:edges)
        {
            deg[i[1]]++;
        }
        for(int i=0;i<deg.size();i++)
        {
            if(deg[i]==0) vc.push_back(i);
        }
        
        return vc;
    }
};