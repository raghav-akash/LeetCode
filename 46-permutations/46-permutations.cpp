class Solution {
public:
    void calculatepermute(int ind,vector<int> &nums, vector<vector<int>> &vc)
    {
        if(ind==nums.size())
        {
            vc.push_back(nums);
            return;
        }
        
        for(int i=ind;i<nums.size();i++)
        {
            swap(nums[ind],nums[i]);
            calculatepermute(ind+1,nums,vc);
            swap(nums[i],nums[ind]);
        }
    }

    
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> vc;
        vector<int> ds;
        calculatepermute(0,nums,vc);
        return vc;
    }
};