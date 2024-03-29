class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& g) {
        vector<vector<int>> vc;
        unordered_map<int,vector<int>> mp;
        for(int i=0;i<g.size();i++)
        {
            mp[g[i]].push_back(i);
            if(mp[g[i]].size()==g[i])
            {
                vc.push_back(mp[g[i]]);
                mp[g[i]]={};
            }
        }
        
        return vc;
    }
};