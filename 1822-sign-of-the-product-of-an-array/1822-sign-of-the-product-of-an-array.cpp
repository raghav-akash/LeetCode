class Solution {
public:
    int arraySign(vector<int>& nums) {
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>0)
                nums[i]=1;
            else if(nums[i]<0)
                nums[i]=(-1);
            else{
                return 0;
            }
        }
        int pro=1;
        for(int j=0;j<nums.size();j++){
            pro*=nums[j];
        }
        
        return pro;
    }
};