class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0) return 0;
        sort(nums.begin(),nums.end());
        int maxf=INT_MIN,curr_max=1;
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i+1]==nums[i])
            {
            continue;
            }
            else if(nums[i+1]==nums[i]+1)
            {
                curr_max++;
            }
            else
            {
                curr_max=1;
            }
            maxf=max(maxf,curr_max);
        }
        maxf=max(maxf,curr_max);
        return maxf;
    }
};