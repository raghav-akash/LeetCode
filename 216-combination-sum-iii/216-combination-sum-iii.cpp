class Solution {
public:
    void combine(int ind,int k,int n,vector<int>& ds, vector<vector<int>> &vc)
    {
        if(ds.size()>k || n<0) return;
        if(ds.size()==k && n==0)
        {
            vc.push_back(ds);
            return;
        
        }
        
        for(int i=ind;i<=9;i++)
        {
            ds.push_back(i);
            combine(i+1,k,n-i,ds,vc);
            ds.pop_back();
        }
    }
    
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> vc;
        vector<int> ds;
        combine(1,k,n,ds,vc);
        return vc;
    }
};