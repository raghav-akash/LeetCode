class Solution {
public:
    void subset(int ind,vector<int> &nums, vector<int> &ds, vector<vector<int>> &vc)
    {
        vc.push_back(ds);
        for(int i=ind;i<nums.size();i++)
        {
            if(i!=ind && nums[i]==nums[i-1]) continue;
            ds.push_back(nums[i]);
            subset(i+1,nums,ds,vc);
            ds.pop_back();
        }
        
        
    }
    
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> vc;
        vector<int> ds;
        sort(nums.begin(),nums.end());
        subset(0,nums,ds,vc);
        return vc;
        
    }
};