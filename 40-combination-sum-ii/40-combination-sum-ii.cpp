class Solution {
public:
    void combination(int ind, int target,vector<int> &arr, vector<int> &ds, vector<vector<int>> & vc)
    {
        if(target==0) 
        {
            vc.push_back(ds);
            return ; 
        }
            
        
        for(int i=ind;i<arr.size();i++)
        {
            if(i>ind && arr[i]==arr[i-1]) continue;
            if(arr[ind]>target) break;
            ds.push_back(arr[i]);
            combination(i+1,target-arr[i],arr,ds,vc);
            ds.pop_back();
        }
    }
    
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> vc;
        vector<int> ds;
        sort(candidates.begin(),candidates.end());
        combination(0,target,candidates,ds,vc);
        return vc;
    }
};