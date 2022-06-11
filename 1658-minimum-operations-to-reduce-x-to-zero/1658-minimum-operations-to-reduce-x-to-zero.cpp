class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int sum=0;
        for(auto i:nums)
        {
            sum+=i;
        }
        sum-=x;
        int n=nums.size();
        if(sum==0) return nums.size();
        int maxl=0,cur_sum=0,j=0,i=0;
        for(int j=0;j<n;j++)
        {
            cur_sum+=nums[j];
            while((cur_sum>sum) && i<j)
            {
                cur_sum-=nums[i];
                i++;
            }
            
            if(cur_sum==sum)
            {
                maxl=max(maxl,j-i+1);
            }
        }
        return maxl ? (n-maxl) : -1;
    }
};