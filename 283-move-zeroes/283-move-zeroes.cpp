class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int index=0,count=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]!=0){
                nums[index++]=nums[i];
            }
            else{
                count++;
            }
        }
        for(int j=0;j<count;j++){
            nums[index++]=0;
        }
    }
};