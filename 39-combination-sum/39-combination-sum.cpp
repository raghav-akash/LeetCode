class Solution {
public:
    void combination(int ind,int target,vector<int> &arr, vector<int> &ds,vector<vector<int> > &vc)
    {
        if(ind==arr.size())
        {
            if(target==0) vc.push_back(ds);
            return;
        }
        
        if(arr[ind]<=target)
        {
            ds.push_back(arr[ind]);
            combination(ind,target-arr[ind],arr,ds,vc);
            ds.pop_back();
        }
        combination(ind+1,target,arr,ds,vc);
    }
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> vc;
        vector<int> ds;
        combination(0,target,candidates,ds,vc);
        return vc;
        
    }
};