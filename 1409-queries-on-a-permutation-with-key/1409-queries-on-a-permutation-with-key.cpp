class Solution {
public:
    vector<int> processQueries(vector<int>& queries, int m) {
        vector<int> p,ans;
        int index;
        for(int i=1;i<=m;i++) p.push_back(i);
        
        for(int j=0;j<queries.size();j++)
        {
            index=find(p.begin(),p.end(),queries[j])-p.begin();
            ans.push_back(index);
            p.insert(p.begin(),p[index]);
            p.erase(p.begin()+index+1);
        }
        return ans;
    }
};