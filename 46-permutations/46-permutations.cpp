class Solution {
public:
    void calculatepermute(vector<int> &ds,vector<int> &nums, vector<vector<int>> &vc,int mp[])
    {
        if(ds.size()==nums.size())
        {
            vc.push_back(ds);
            return;
        }
        
        for(int i=0;i<nums.size();i++)
        {
            if(!mp[i])
            {
                ds.push_back(nums[i]);
                mp[i]=1;
                calculatepermute(ds,nums,vc,mp);
                mp[i]=0;
                ds.pop_back();
            }
        }
    }
    
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> vc;
        vector<int> ds;
        int mp[nums.size()];
        for(int i=0;i<nums.size();i++) mp[i]=0;
        calculatepermute(ds,nums,vc,mp);
        return vc;
    }
};