class Solution {
public:
    bool checkPossibility(vector<int>& nums) {
        bool flag=false;
        int n=nums.size();
        for(int i=0;i<n-1;i++)
        {
            if(nums[i]<=nums[i+1])
            {
                continue;
            }  
            if(flag==true)
            {
                return false;
            }

            if(i==0 || nums[i+1]>=nums[i-1])
            {
                nums[i]=nums[i+1];
                flag=true;
            }
            else
            {
                nums[i+1]=nums[i];
                flag=true;
            }
        }
        return true;
    }
};