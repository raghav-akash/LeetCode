class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=INT_MIN,curr_sum=0;;
        for(int i=0;i<nums.size();i++)
        {
            curr_sum+=nums[i];
            sum=max(sum,curr_sum);
            
            if(curr_sum<0)
                curr_sum=0;
            
        }
        return sum;
    }
};