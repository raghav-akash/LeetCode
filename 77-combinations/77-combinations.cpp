class Solution {
public:
    void combination(int ind,int n, int k, vector<int> &ds, vector<vector<int>> &vc)
    {
        if(ds.size()==k)
        {
            vc.push_back(ds);
            return ;
        }
        
        for(int i=ind;i<=n;i++)
        {
            ds.push_back(i);
            combination(i+1,n,k,ds,vc);
            ds.pop_back();
        }
    }
    
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> vc;
        vector<int> ds;
        combination(1,n,k,ds,vc);
        return vc;
    }
};