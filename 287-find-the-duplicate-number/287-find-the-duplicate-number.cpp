class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        vector<int> vc(nums.size(),0);
        int i=0;
        for(i=0;i<nums.size();i++)
        {
           vc[nums[i]]++;
            if(vc[nums[i]]>1)
                break;
        }
        return nums[i];
    }
};