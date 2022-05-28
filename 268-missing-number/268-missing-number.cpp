class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int i=0;
        for(i=0;i<n;i++)
        {
            if(i!=nums[i])
                break;
        }
        return i;
    }
};