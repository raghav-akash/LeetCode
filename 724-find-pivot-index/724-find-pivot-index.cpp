class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int rsum=0;
        int lsum=0;
        for(int i=0;i<nums.size();i++)
        {
            rsum+=nums[i];
        }
        
        for(int j=0;j<nums.size();j++)
        {          
            if(lsum==rsum-lsum-nums[j])
            {
                return j;
            }
            lsum+=nums[j];
        }
        return -1;
    }
};