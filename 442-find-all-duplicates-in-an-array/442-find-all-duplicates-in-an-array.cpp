class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int n=nums.size();
        vector<int> vc;
        for(int i=0;i<n;i++)
        {
            if(nums[i]!=nums[nums[i]-1])
            {
                swap(nums[i],nums[nums[i]-1]);
                i--;
            }
        }
        
        for(int i=0;i<n;i++)
        {
            if(nums[i]!=(i+1))
            {
                vc.push_back(nums[i]);
            };
        }
        
        return vc;
    }
};